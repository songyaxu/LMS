// ModifyInfo.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "ModifyInfo.h"
#include "ModifyPassword.h"
#include "Reader.h"
#include "Dept.h"
#include "Class.h"
#include "Major.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CModifyInfo dialog


CModifyInfo::CModifyInfo(CWnd* pParent /*=NULL*/)
	: CDialog(CModifyInfo::IDD, pParent)
{
	//{{AFX_DATA_INIT(CModifyInfo)
	m_name = _T("");
	m_no = _T("");
	m_phone = _T("");
	m_email = _T("");
	m_age = 0;
	m_states = _T("");
	m_remark = _T("");
	m_type = _T("");
	m_date = _T("");
	//}}AFX_DATA_INIT
}


void CModifyInfo::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CModifyInfo)
	DDX_Control(pDX, IDC_COMBO2, m_sex);
	DDX_Control(pDX, IDC_COMBO6, m_class);
	DDX_Control(pDX, IDC_COMBO5, m_major);
	DDX_Control(pDX, IDC_COMBO4, m_dept);
	DDX_Text(pDX, IDC_EDIT1, m_name);
	DDX_Text(pDX, IDC_EDIT2, m_no);
	DDX_Text(pDX, IDC_EDIT3, m_phone);
	DDX_Text(pDX, IDC_EDIT4, m_email);
	DDX_Text(pDX, IDC_EDIT5, m_age);
	DDX_Text(pDX, IDC_EDIT7, m_states);
	DDX_Text(pDX, IDC_EDIT8, m_remark);
	DDX_CBString(pDX, IDC_COMBO1, m_type);
	DDX_Text(pDX, IDC_EDIT9, m_date);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CModifyInfo, CDialog)
	//{{AFX_MSG_MAP(CModifyInfo)
	ON_BN_CLICKED(IDC_MODIFYPWD, OnModifypwd)
	ON_WM_PAINT()
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CModifyInfo message handlers

BOOL CModifyInfo::OnInitDialog() 
{
	CDialog::OnInitDialog();
	TRY
	{
		m_database.OpenEx(_T("DSN=图书管理系统;UID=syx;PWD=qwerty000"),CDatabase::noOdbcDialog);
	}
	CATCH(CDBException,ex)
	{
	   AfxMessageBox(ex->m_strError);
	   AfxMessageBox(ex->m_strStateNativeOrigin);
	}
	AND_CATCH(CMemoryException,pEx)
	{
	   pEx->ReportError();
	   AfxMessageBox(_T("memory exception"));
	}
	AND_CATCH(CException,e)
	{
	   TCHAR szError[100];
	   e->GetErrorMessage(szError,100);
	   AfxMessageBox(szError);
	}
	END_CATCH
	CReader *m_pReader=new CReader(&m_database);
	if(m_pReader->IsOpen())
		m_pReader->Close();
	CString sql;
	CString str= ((CLMSApp *)AfxGetApp())->m_UserNo;
	sql.Format("select * from UserInfo where Uno='%s'",str);
	m_pReader->Open(AFX_DB_USE_DEFAULT_TYPE,sql);
	if(m_pReader->GetRecordCount()==0)
	{
		MessageBox("载入个人信息失败!","个人信息");
		return false;
	}
	m_age=m_pReader->m_Uage;
	CClass *m_pClass=new CClass(&m_database);
	if(m_pClass->IsOpen())
		m_pClass->Close();
	sql.Format("select * from Class where ClassNo='%s'",m_pReader->m_ClassNo);
	m_pClass->Open(AFX_DB_USE_DEFAULT_TYPE,sql);
	if(m_pClass->GetRecordCount()==0)
	{
		MessageBox("查询班级失败!","个人信息");
	}
	else
	{
		m_class.AddString(m_pClass->m_ClassName);
		m_class.SetCurSel(0);
	}
	CDept *m_pDept=new CDept(&m_database);
	if(m_pDept->IsOpen())
		m_pDept->Close();
	sql.Format("select * from Dept where DeptNo='%s'",m_pReader->m_DeptNo);
	m_pDept->Open(AFX_DB_USE_DEFAULT_TYPE,sql);
	if(m_pDept->GetRecordCount()==0)
	{
		MessageBox("查询系别失败!","个人信息");
	}
	else
	{
		m_dept.AddString(m_pDept->m_DeptName);
		m_dept.SetCurSel(0);
	}
	CMajor *m_pMajor=new CMajor(&m_database);
	if(m_pMajor->IsOpen())
		m_pMajor->Close();
	sql.Format("select * from Major where MajorNo='%s'",m_pReader->m_MajorNo);
	m_pMajor->Open(AFX_DB_USE_DEFAULT_TYPE,sql);
	if(m_pMajor->GetRecordCount()==0)
	{
		MessageBox("查询专业失败!","个人信息");
	}
	else
	{
		m_major.AddString(m_pMajor->m_MajorName);
		m_major.SetCurSel(0);
	}
	m_sex.InsertString(0,"男");
	m_sex.InsertString(1,"女");
	if(m_pReader->m_Usex=="男")
		m_sex.SetCurSel(0);
	else
		m_sex.SetCurSel(1);
	m_date=m_pReader->m_Ubirthday;
	m_name=m_pReader->m_Uname;
	m_email=m_pReader->m_Uemail;
	m_remark=m_pReader->m_Uremarks;
	m_type=m_pReader->m_Ujob;
	m_no=m_pReader->m_Uno;
	m_phone=m_pReader->m_Uphone;
	if(m_pReader->m_Ustatus>=20)
	{
		m_states+="借阅中 ";
	}
	if(m_pReader->m_Ustatus%10>1)
	{
		m_states="预约中";
	}

	UpdateData(false);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CModifyInfo::OnModifypwd() 
{
	CModifyPassword dlg;
	dlg.DoModal();
}

void CModifyInfo::OnOK() 
{
	UpdateData(true);
	CReader *m_pReader=new CReader(&m_database);
	if(m_pReader->IsOpen())
		m_pReader->Close();
	CString strSQL;
	strSQL.Format("select * from UserInfo where Uno='%s'",m_no);
	m_pReader->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	m_pReader->Edit();
		m_pReader->m_Uage=m_age;
	if(!m_date.IsEmpty())
		m_pReader->m_Ubirthday=m_date;
	if(!m_email.IsEmpty())
		m_pReader->m_Uemail=m_email;
	if(!m_phone.IsEmpty())
		m_pReader->m_Uphone=m_phone;
	if(!m_remark.IsEmpty())
		m_pReader->m_Uremarks=m_remark;
	int nIndex=m_sex.GetCurSel();
	if(nIndex!=-1)
		m_sex.GetLBText(nIndex,m_pReader->m_Usex);
	m_pReader->Update();
	m_pReader->Requery();
	MessageBox("修改成功!","个人信息");
	CDialog::OnOK();
}

void CModifyInfo::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	CRect   rect;   
	GetClientRect(&rect);   
	CDC   dcMem;   
	dcMem.CreateCompatibleDC(&dc);   
	CBitmap   bmpBackground;   
	bmpBackground.LoadBitmap(IDB_BITMAP5);   //背景图
																	
          
	BITMAP   bitmap;   
	bmpBackground.GetBitmap(&bitmap);   
	CBitmap   *pbmpOld=dcMem.SelectObject(&bmpBackground);   
	dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcMem,0,0,   
	bitmap.bmWidth,bitmap.bmHeight,SRCCOPY);  
}

void CModifyInfo::OnCancelMode() 
{
	CDialog::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}
