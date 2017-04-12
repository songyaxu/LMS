// NewReader.cpp : implementation file
//

#include "stdafx.h"
#include "LMS.h"
#include "NewReader.h"
#include "Reader.h"
#include "Dept.h"
#include "Major.h"
#include "Class.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CNewReader dialog


CNewReader::CNewReader(CWnd* pParent /*=NULL*/)
	: CDialog(CNewReader::IDD, pParent)
{
	//{{AFX_DATA_INIT(CNewReader)
	m_name = _T("");
	m_no = _T("");
	m_phone = _T("");
	m_email = _T("");
	m_age = 0;
	tag=0;
	m_beizhu = _T("");
	//}}AFX_DATA_INIT
}


void CNewReader::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CNewReader)
	DDX_Control(pDX, IDC_DATETIMEPICKER1, m_date);
	DDX_Control(pDX, IDC_COMBO4, m_dept);
	DDX_Control(pDX, IDC_EDIT7, m_states);
	DDX_Control(pDX, IDC_COMBO5, m_major);
	DDX_Control(pDX, IDC_COMBO6, m_class);
	DDX_Control(pDX, IDC_COMBO7, m_sex);
	DDX_Control(pDX, IDC_COMBO2, m_type);
	DDX_Text(pDX, IDC_EDIT1, m_name);
	DDX_Text(pDX, IDC_EDIT2, m_no);
	DDX_Text(pDX, IDC_EDIT3, m_phone);
	DDX_Text(pDX, IDC_EDIT4, m_email);
	DDX_Text(pDX, IDC_EDIT5, m_age);
	DDX_Text(pDX, IDC_EDIT8, m_beizhu);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CNewReader, CDialog)
	//{{AFX_MSG_MAP(CNewReader)
	ON_CBN_DROPDOWN(IDC_COMBO5, OnDropdownCombo5)
	ON_CBN_DROPDOWN(IDC_COMBO6, OnDropdownCombo6)
	ON_WM_PAINT()
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNewReader message handlers

BOOL CNewReader::OnInitDialog() 
{
	CDialog::OnInitDialog();
	TRY
	{
		m_database.OpenEx(_T("DSN=图书管理系统;UID=syx;PWD=qwerty000"),CDatabase::noOdbcDialog);
		m_pDept.m_pDatabase=&m_database;
		m_pClass.m_pDatabase=&m_database;
		m_pMajor.m_pDatabase=&m_database;
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
	CString strSQL="select * from Dept";
	if(m_pDept.IsOpen())
		m_pDept.Close();
	m_pDept.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pDept.GetRecordCount()==0)
	{
		MessageBox("数据库错误！","添加读者",MB_OK);
	}
	else
	{
		m_pDept.MoveFirst();
		for(int i=0;;i++)
		{
			if(m_pDept.IsEOF())
				break;
			m_dept.InsertString(i,m_pDept.m_DeptName);
			m_pDept.MoveNext();
		}
	}
	m_pDept.Close();
	m_type.InsertString(0,"本科生");
	m_type.InsertString(1,"研究生");
	m_type.InsertString(2,"博士生");
	m_type.InsertString(3,"教师");
	m_type.SetCurSel(0);
	m_sex.InsertString(0,"男");
	m_sex.InsertString(1,"女");
	m_states.SetDlgItemText(IDC_EDIT7,"未借阅");
	UpdateData(false);
	return TRUE;  
}
void CNewReader::OnDropdownCombo5() 
{
	if(m_pMajor.IsOpen())
		m_pMajor.Close();
	if(m_dept.GetCurSel()==-1)
		MessageBox("没有选择系！","添加读者",MB_OK);
	else
	{	
		m_major.ResetContent();
		CString str;
		int nIndex=m_dept.GetCurSel();
		m_dept.GetLBText(nIndex,str);
		CString strSQL;
		strSQL.Format("select * from Dept where DeptName='%s'",str);
		if(m_pDept.IsOpen())
			m_pDept.Close();
		m_pDept.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		strSQL.Format("select * from Major,Dept where Dept.DeptNo='%s' and Dept.DeptNo=Major.DeptNo",m_pDept.m_DeptNo);
		m_pMajor.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		m_pMajor.MoveFirst();
		for(int i=0;;i++)
		{
			if(m_pMajor.IsEOF())
				break;
			m_major.InsertString(i,m_pMajor.m_MajorName);
			m_pMajor.MoveNext();
		}
	}
	m_pMajor.Close();
}

void CNewReader::OnDropdownCombo6() 
{
	
	if(m_pClass.IsOpen())
		m_pClass.Close();
	if(m_major.GetCurSel()==-1)
		MessageBox("没有选择专业！","添加读者",MB_OK);
	else
	{
		m_class.ResetContent();
		CString str;
		int nIndex=m_major.GetCurSel();
		m_major.GetLBText(nIndex,str);
		CString strSQL;
		strSQL.Format("select * from Major where MajorName='%s'",str);
		if(m_pMajor.IsOpen())
			m_pMajor.Close();
		m_pMajor.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		if(m_pClass.IsOpen())
			m_pClass.Close();
		strSQL.Format("select * from Class,Major where Major.MajorNo='%s' and Major.MajorNo=Class.MajorNo",m_pMajor.m_MajorNo);
		m_pClass.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		m_pClass.MoveFirst();
		for(int i=0;;i++)
		{
			if(m_pClass.IsEOF())
				break;
			m_class.InsertString(i,m_pClass.m_ClassName);
			m_pClass.MoveNext();
		}
	}
}

void CNewReader::OnOK() 
{
	CReader *m_pReader=new CReader(&m_database);
	if(m_pReader->IsOpen())
		m_pReader->Close();
	UpdateData(true);
	CString strSQL;
	strSQL.Format("select * from UserInfo where Uno='%s'",m_no);
	m_pReader->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pReader->GetRecordCount()!=0)
	{
		MessageBox("已存在的证件号！","添加读者");
		return;
	}
	if(m_name.IsEmpty())
	{
		MessageBox("请填写姓名！","添加读者");
		return;
	}
	if(m_no.IsEmpty())
	{
		MessageBox("请填证件号！","添加读者");
		return;
	}
	if(m_dept.GetCurSel()==-1)
	{
		MessageBox("请选择系别！","添加读者");
		return;
	}
	if(m_major.GetCurSel()==-1)
	{
		MessageBox("请选择专业！","添加读者");
		return;
	}
	if(m_class.GetCurSel()==-1)
	{
		MessageBox("请选择班级！","添加读者");
		return;
	}
	CString str;

	m_pReader->AddNew();
	m_pReader->m_Uname=m_name;
	m_pReader->m_Uno=m_no;
	int nIndex=m_type.GetCurSel();
	m_type.GetLBText(nIndex,str);
	m_pReader->m_Ujob=str;
	if(m_sex.GetCurSel()!=-1)
	{
		nIndex=m_sex.GetCurSel();
		m_sex.GetLBText(nIndex,str);
		m_pReader->m_Usex=str;
	}
	m_pReader->m_Uemail=m_email;
	m_pReader->m_Uage=m_age;
	m_pReader->m_Uphone=m_phone;
	m_pReader->m_Uremarks=m_beizhu;
	nIndex=m_major.GetCurSel();
	m_major.GetLBText(nIndex,str);
	if(m_pMajor.IsOpen())
			m_pMajor.Close();
	strSQL.Format("select * from Major where Major.MajorName='%s'",str);
	m_pMajor.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	m_pReader->m_MajorNo=m_pMajor.m_MajorNo;
	
	nIndex=m_major.GetCurSel();
	m_major.GetLBText(nIndex,str);
	if(m_pDept.IsOpen())
			m_pDept.Close();
	strSQL.Format("select * from Dept where Dept.DeptName='%s'",str);
	m_pDept.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	m_pReader->m_DeptNo=m_pDept.m_DeptNo;
	
	nIndex=m_class.GetCurSel();
	m_class.GetLBText(nIndex,str);
	if(m_pClass.IsOpen())
		m_pClass.Close();
	strSQL.Format("select * from Class where Class.ClassName='%s'",str);
	m_pClass.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	m_pReader->m_ClassNo=m_pClass.m_ClassNo;

	CTime curTime=CTime::GetCurrentTime();
	CTime timeTime;
	CString szDate;
	DWORD dwResult =m_date.GetTime(timeTime);
	if (dwResult == GDT_VALID)
	{
		szDate = timeTime.Format(TEXT("%Y/%m/%d"));
	}
	if(timeTime!=curTime)
		m_pReader->m_Ubirthday=szDate;
	m_pReader->m_Ustatus=11;
	m_pReader->Update();
	//m_pReader->Requery();
	
	m_pReader->Close();
	MessageBox("添加读者成功！","添加读者");
	CDialog::OnOK();
}

void CNewReader::OnPaint() 
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

void CNewReader::OnCancelMode() 
{
	CDialog::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}
