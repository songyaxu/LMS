// MdifyReader.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "MdifyReader.h"
#include "Reader.h"
#include "Class.h"
#include "Major.h"
#include "Dept.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMdifyReader dialog


CMdifyReader::CMdifyReader(CWnd* pParent /*=NULL*/)
	: CDialog(CMdifyReader::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMdifyReader)
	m_name = _T("");
	m_no = _T("");
	m_phone = _T("");
	m_email = _T("");
	m_age = 0;
	m_status = _T("");
	m_remark = _T("");
	//}}AFX_DATA_INIT
}


void CMdifyReader::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMdifyReader)
	DDX_Control(pDX, IDC_DATETIMEPICKER1, m_date);
	DDX_Control(pDX, IDC_COMBO7, m_class);
	DDX_Control(pDX, IDC_COMBO6, m_dept);
	DDX_Control(pDX, IDC_COMBO5, m_major);
	DDX_Control(pDX, IDC_COMBO2, m_sex);
	DDX_Control(pDX, IDC_COMBO1, m_type);
	DDX_Text(pDX, IDC_EDIT1, m_name);
	DDX_Text(pDX, IDC_EDIT2, m_no);
	DDX_Text(pDX, IDC_EDIT3, m_phone);
	DDX_Text(pDX, IDC_EDIT4, m_email);
	DDX_Text(pDX, IDC_EDIT5, m_age);
	DDX_Text(pDX, IDC_EDIT6, m_status);
	DDX_Text(pDX, IDC_EDIT8, m_remark);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CMdifyReader, CDialog)
	//{{AFX_MSG_MAP(CMdifyReader)
	ON_WM_CANCELMODE()
	ON_CBN_DROPDOWN(IDC_COMBO1, OnDropdownCombo1)
	ON_CBN_DROPDOWN(IDC_COMBO6, OnDropdownCombo6)
	ON_CBN_DROPDOWN(IDC_COMBO5, OnDropdownCombo5)
	ON_CBN_DROPDOWN(IDC_COMBO7, OnDropdownCombo7)
	ON_BN_CLICKED(IDC_CONFORM, OnConform)
	ON_WM_PAINT()
	ON_WM_CAPTURECHANGED()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMdifyReader message handlers

BOOL CMdifyReader::OnInitDialog() 
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

	CReader *m_pReader1=new CReader(&m_database);
	if(m_pReader1->IsOpen())
		m_pReader1->Close();
	CString sql;
	CString str= ((CLMSApp *)AfxGetApp())->m_UserNo;
	sql.Format("select * from UserInfo where Uno='%s'",str);
	m_pReader1->Open(AFX_DB_USE_DEFAULT_TYPE,sql);
	if(m_pReader1->GetRecordCount()==0)
	{
		MessageBox("载入个人信息失败!","修改读者");
		return false;
	}
	else
	{
		if(m_pReader1->m_Ustatus!=11)
		{
			((CEdit*)GetDlgItem(IDC_EDIT1))->EnableWindow(false);
			((CEdit*)GetDlgItem(IDC_EDIT2))->EnableWindow(false);
			MessageBox("有图书借阅或者预约!无法修改学号姓名!","修改读者");
		}
	}
	m_age=m_pReader1->m_Uage;
	CClass *m_pClass1=new CClass(&m_database);
	if(m_pClass1->IsOpen())
		m_pClass1->Close();
	sql.Format("select * from Class where ClassNo='%s'",m_pReader1->m_ClassNo);
	m_pClass1->Open(AFX_DB_USE_DEFAULT_TYPE,sql);
	if(m_pClass1->GetRecordCount()==0)
	{
		MessageBox("查询班级失败!","修改读者");
	}
	else
	{
		m_class.AddString(m_pClass1->m_ClassName);
		m_class.SetCurSel(0);
	}
	CDept *m_pDept1=new CDept(&m_database);
	if(m_pDept1->IsOpen())
		m_pDept1->Close();
	sql.Format("select * from Dept where DeptNo='%s'",m_pReader1->m_DeptNo);
	m_pDept1->Open(AFX_DB_USE_DEFAULT_TYPE,sql);
	if(m_pDept1->GetRecordCount()==0)
	{
		MessageBox("查询系别失败!","修改读者");
	}
	else
	{
		m_dept.AddString(m_pDept1->m_DeptName);
		m_dept.SetCurSel(0);
	}
	CMajor *m_pMajor1=new CMajor(&m_database);
	if(m_pMajor1->IsOpen())
		m_pMajor1->Close();
	sql.Format("select * from Major where MajorNo='%s'",m_pReader1->m_MajorNo);
	m_pMajor1->Open(AFX_DB_USE_DEFAULT_TYPE,sql);
	if(m_pMajor1->GetRecordCount()==0)
	{
		MessageBox("查询专业失败!","修改读者");
	}
	else
	{
		m_major.AddString(m_pMajor1->m_MajorName);
		m_major.SetCurSel(0);
	}
	m_sex.InsertString(0,"男");
	m_sex.InsertString(1,"女");
	if(m_pReader1->m_Usex=="男")
		m_sex.SetCurSel(0);
	else
		m_sex.SetCurSel(1);
	CDateTimeCtrl* pTime = (CDateTimeCtrl*)GetDlgItem(IDC_DATETIMEPICKER1);
	ASSERT(pTime);
	int year,month,day;
	sscanf(m_pReader1->m_Ubirthday,"%d-%d-%d",&year,&month,&day);
	CTime time(year,month,day,0,0,0); 
	pTime->SetTime(&time);
	m_name=m_pReader1->m_Uname;
	m_email=m_pReader1->m_Uemail;
	m_remark=m_pReader1->m_Uremarks;
	m_type.InsertString(0,m_pReader1->m_Ujob);
	m_type.SetCurSel(0);
	m_no=m_pReader1->m_Uno;
	m_phone=m_pReader1->m_Uphone;
	if(m_pReader1->m_Ustatus>=20)
	{
		m_status+="借阅中 ";
	}
	if(m_pReader1->m_Ustatus%10>1)
	{
		m_status="预约中";
	}
	UpdateData(false);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CMdifyReader::OnCancelMode() 
{
	CDialog::OnCancelMode();
		
}

void CMdifyReader::OnDropdownCombo1() 
{
	m_type.ResetContent();
	m_type.InsertString(0,"本科生");
	m_type.InsertString(1,"研究生");
	m_type.InsertString(2,"博士生");
	m_type.InsertString(3,"教师");
}

void CMdifyReader::OnDropdownCombo6() 
{
	m_pDept.m_pDatabase=&m_database;
	m_dept.ResetContent();
	CString strSQL="select * from Dept";
	if(m_pDept.IsOpen())
		m_pDept.Close();
	m_pDept.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pDept.GetRecordCount()==0)
	{
		MessageBox("数据库错误！","修改读者",MB_OK);
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
}

void CMdifyReader::OnDropdownCombo5() 
{
	m_pMajor.m_pDatabase=&m_database;
	if(m_pMajor.IsOpen())
		m_pMajor.Close();
	if(m_dept.GetCurSel()==-1)
		MessageBox("没有选择系！","修改读者",MB_OK);
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

void CMdifyReader::OnDropdownCombo7() 
{

	m_pClass.m_pDatabase=&m_database;
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

void CMdifyReader::OnConform() 
{
	if(MessageBox("确认修改读者信息?","修改读者",MB_OKCANCEL)==2)
	{
		return;
	}
	CReader *m_pReader=new CReader(&m_database);
	if(m_pReader->IsOpen())
		m_pReader->Close();
	UpdateData(true);
	if(m_no.IsEmpty())
	{
		MessageBox("请填写学号!","修改读者");
		return;
	}
	if(((CLMSApp *)AfxGetApp())->m_UserNo==m_no)
	{
		CString strSQL;
		strSQL.Format("select * from UserInfo where Uno='%s'",m_no,((CLMSApp *)AfxGetApp())->m_UserNo);
		m_pReader->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		if(m_name.IsEmpty())
		{
			MessageBox("请填写姓名！","修改读者");
			return;
		}
		if(m_no.IsEmpty())
		{
			MessageBox("请填证件号！","修改读者");
			return;
		}
		if(m_dept.GetCurSel()==-1)
		{
			MessageBox("请选择系别！","修改读者");
			return;
		}
		if(m_major.GetCurSel()==-1)
		{
			MessageBox("请选择专业！","修改读者");
			return;
		}
		if(m_class.GetCurSel()==-1)
		{
			MessageBox("请选择班级！","修改读者");
			return;
		}
		CString str;

		m_pReader->Edit();
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
		m_pReader->m_Uremarks=m_remark;
		nIndex=m_major.GetCurSel();
		m_major.GetLBText(nIndex,str);
		if(m_pMajor.IsOpen())
			m_pMajor.Close();
		m_pMajor.m_pDatabase=&m_database;
		strSQL.Format("select * from Major where Major.MajorName='%s'",str);
		m_pMajor.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		m_pReader->m_MajorNo=m_pMajor.m_MajorNo;

		nIndex=m_dept.GetCurSel();
		m_dept.GetLBText(nIndex,str);
		if(m_pDept.IsOpen())
				m_pDept.Close();
		strSQL.Format("select * from Dept where Dept.DeptName='%s'",str);
		m_pDept.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		m_pReader->m_DeptNo=m_pDept.m_DeptNo;

		nIndex=m_class.GetCurSel();
		m_class.GetLBText(nIndex,str);
		m_pClass.m_pDatabase=&m_database;
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
			szDate = timeTime.Format(TEXT("%Y-%m-%d"));
		}
		if(timeTime!=curTime)
			m_pReader->m_Ubirthday=szDate;

		m_pReader->Update();
		m_pReader->Requery();

		m_pReader->Close();
		MessageBox("修改读者成功！","修改读者");
	}
	else
	{
		CString strSQL;
		strSQL.Format("select * from UserInfo where Uno='%s'",m_no);
		m_pReader->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		if(m_pReader->GetRecordCount()!=0)
		{
			MessageBox("已存在的证件号！","修改读者");
			return;
		}
		if(m_name.IsEmpty())
		{
			MessageBox("请填写姓名！","修改读者");
			return;
		}
		if(m_no.IsEmpty())
		{
			MessageBox("请填证件号！","修改读者");
			return;
		}
		if(m_dept.GetCurSel()==-1)
		{
			MessageBox("请选择系别！","修改读者");
			return;
		}
		if(m_major.GetCurSel()==-1)
		{
			MessageBox("请选择专业！","修改读者");
			return;
		}
		if(m_class.GetCurSel()==-1)
		{
			MessageBox("请选择班级！","修改读者");
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
		m_pReader->m_Uremarks=m_remark;
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
			szDate = timeTime.Format(TEXT("%Y-%m-%d"));
		}
		if(timeTime!=curTime)
			m_pReader->m_Ubirthday=szDate;

		m_pReader->Update();
		m_pReader->Requery();
		//m_pReader->Close();
		if(m_pReader->IsOpen())
			m_pReader->Close();
		strSQL.Format("select * from UserInfo where Uno='%s'",((CLMSApp *)AfxGetApp())->m_UserNo);
		m_pReader->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		m_pReader->Delete();
		m_pReader->Update();
		//m_pReader->Close();
		MessageBox("修改读者成功！","修改读者");
	}
	
}

void CMdifyReader::OnPaint() 
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

void CMdifyReader::OnCaptureChanged(CWnd *pWnd) 
{
	// TODO: Add your message handler code here
	
	CDialog::OnCaptureChanged(pWnd);
}
