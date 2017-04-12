// LOGIN.cpp : implementation file
//

#include "stdafx.h"
#include "LMS.h"
#include "LOGIN.h"
#include "BtnST.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLOGIN dialog


CLOGIN::CLOGIN(CWnd* pParent /*=NULL*/)
	: CDialog(CLOGIN::IDD, pParent)
{
	//{{AFX_DATA_INIT(CLOGIN)
	m_username = _T("0131122589");
	m_userpassword = _T("0000");
	m_radio = 1;
	//}}AFX_DATA_INIT
}


void CLOGIN::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CLOGIN)
	DDX_Control(pDX, IDC_STATIC2, m_s2);
	DDX_Control(pDX, IDC_STATIC3, m_s3);
	DDX_Control(pDX, IDC_STATIC1, m_s1);
	DDX_Control(pDX, IDC_EDIT2, m_e2);
	DDX_Control(pDX, IDC_EDIT1, m_e1);
	DDX_Text(pDX, IDC_EDIT1, m_username);
	DDX_Text(pDX, IDC_EDIT2, m_userpassword);
	DDX_Radio(pDX, IDC_RADIO1, m_radio);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CLOGIN, CDialog)
	//{{AFX_MSG_MAP(CLOGIN)
	ON_WM_CTLCOLOR()
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_CANCEL1, OnCancel1)
	ON_BN_CLICKED(IDC_OK1, OnOk1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLOGIN message handlers

void CLOGIN::OnOk1() 
{
	UpdateData(true);
	TRY
	{
		m_database.OpenEx(_T("DSN=图书管理系统;UID=syx;PWD=qwerty000"),CDatabase::noOdbcDialog);
		m_pRecord.m_pDatabase=&m_database;
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
	if(m_radio==0)
	{
		UpdateData(true);
		if(m_username.IsEmpty())
		{
			MessageBox("请输入用户名和密码！","登录系统",MB_OK|MB_ICONEXCLAMATION);
			m_username.Empty();
			UpdateData(FALSE);
			return;
		}
		//编写SQL语句
		CString strSQL;
		strSQL.Format("select * from Admin where Aname='%s' AND Apwd='%s'",m_username,m_userpassword);
		//编写SQL语句结束

		m_pRecord.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		
		if(m_pRecord.GetRecordCount()==0)
		{
			if(m_count<3)
			{
				MessageBox("登录失败,请仔细检查用户名和密码!","图书管理系统",MB_OK|MB_ICONERROR);
				m_count++;
				m_username.Empty();
				UpdateData(FALSE);
			//	rs.Close();
				m_database.Close();
			}
			else
			{
				m_database.Close();
				MessageBox("您登录失败超过3次，请与管理员联系!","图书管理系统");
				CLOGIN::OnCancel();
			}
		}
		else
		{
			m_state=1;
			m_database.Close();
			CLOGIN::OnOK();
		}
	}
	else
	{
		UpdateData(true);
		if(m_username.IsEmpty())
		{
			MessageBox("请输入用户名和密码！","登录系统",MB_OK|MB_ICONEXCLAMATION);
			UpdateData(FALSE);
			return;
		}
		CString strSQL;
		strSQL.Format("select * from UserInfo where Uno='%s' AND Upwd='%s'",m_username,m_userpassword);

		m_pRecord.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		
		if(m_pRecord.GetRecordCount()==0)
		{
			if(m_count<3)
			{
				MessageBox("登录失败,请仔细检查用户名和密码!","图书管理系统",MB_OK|MB_ICONERROR);
				m_count++;
				m_userpassword.Empty();
				UpdateData(FALSE);
				m_database.Close();
			}
			else
			{
				m_database.Close();
				MessageBox("您登录失败超过3次，请与管理员联系!","图书管理系统");
				CLOGIN::OnCancel();
			}
		}
		else
		{
			m_state=1;
			m_database.Close();
			CLOGIN::OnOK();
		}
	}
}

void CLOGIN::OnCancel1() 
{
	CLOGIN::OnCancel();
}

BOOL CLOGIN::OnInitDialog() 
{
	CDialog::OnInitDialog();
	CMenu*   menu   =   this->GetSystemMenu(true);   
	menu->EnableMenuItem(SC_CLOSE, MF_BYCOMMAND | MF_GRAYED);
	m_font.CreatePointFont(120,"华文琥珀");
	m_font1.CreatePointFont(120,"Times New Roman");
	m_e1.SetFont(&m_font1);
	m_e2.SetFont(&m_font1);
	m_s1.SetFont(&m_font);
	m_s2.SetFont(&m_font);
	m_s3.SetFont(&m_font);
	m_count=1;
	m_state=0;
	//GetDlgItem(IDC_OK1)->EnableWindow(false);
	ModifyStyleEx(0,WS_EX_APPWINDOW);
	// TODO: Return a different brush if the default is not desired
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

HBRUSH CLOGIN::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor) 
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);
	if(IDC_STATIC1==pWnd->GetDlgCtrlID())
	{
		pDC->SetBkMode(TRANSPARENT);
		pDC->SetTextColor(RGB(255,0,0));
	}	
	if(IDC_STATIC2==pWnd->GetDlgCtrlID())
	{
		pDC->SetBkMode(TRANSPARENT);
		pDC->SetTextColor(RGB(255,0,0));
	}
	if(nCtlColor==CTLCOLOR_SCROLLBAR)  
	 {
	  pDC->SetTextColor(RGB(0,0,0));
	  pDC->SetBkColor(RGB(233,233,220));
	  HBRUSH b=CreateSolidBrush(RGB(233,233,220));
	  return b;
	 }
	 else if(nCtlColor==CTLCOLOR_EDIT)   
	 {
	  pDC->SetTextColor(RGB(0,0,0));
	  pDC->SetBkColor(RGB(255,255,255));
	  HBRUSH b=CreateSolidBrush(RGB(255,255,255));
	  return b;
	 }
	 else if(nCtlColor==CTLCOLOR_STATIC)  
	 {
	  pDC->SetTextColor(RGB(128,128,255));
	  pDC->SetBkColor(RGB(255,255,255));
	  HBRUSH b=CreateSolidBrush(RGB(255,255,255));
	  return b;
	 }	
	return hbr;
}
void CLOGIN::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	CRect rect;
	GetClientRect(&rect);
	dc.FillSolidRect(rect,RGB(255,255,255)); 	
	// Do not call CDialog::OnPaint() for painting messages
}

