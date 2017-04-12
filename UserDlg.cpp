// UserDlg.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "UserDlg.h"
#include "ModifyInfo.h"
#include "Reader.h"
#include "QUERYBOOK.h"
#include "BorrowRecord.h"
#include "CancelRenewal.h"
#include "PunishRecord.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CUserDlg dialog
CUserDlg::CUserDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CUserDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CUserDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CUserDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CUserDlg)
	DDX_Control(pDX, IDC_PERSONINFO, m_btn);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CUserDlg, CDialog)
	//{{AFX_MSG_MAP(CUserDlg)
	ON_BN_CLICKED(IDC_PERSONINFO, OnPersoninfo)
	ON_BN_CLICKED(IDC_Exit, OnExit)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BOOKQUERY, OnBookquery)
	ON_BN_CLICKED(IDC_BOOK_BOOK, OnBookBook)
	ON_BN_CLICKED(IDC_BORROWRECORD, OnBorrowrecord)
	ON_BN_CLICKED(IDC_CANCELRENEWAL, OnCancelrenewal)
	ON_BN_CLICKED(IDC_PUNISHMENTRECORD, OnPunishmentrecord)
	ON_WM_ERASEBKGND()
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CUserDlg message handlers

void CUserDlg::OnPersoninfo() 
{
	CModifyInfo dlg;
	dlg.DoModal();
}

void CUserDlg::OnExit() 
{
	OnOK();
}

BOOL CUserDlg::OnInitDialog() 
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
	CString str;
	CReader *m_pReader=new CReader(&m_database);
	if(m_pReader->IsOpen())
		m_pReader->Close();
	CString strSQL;
	m_userno=((CLMSApp *)AfxGetApp())->m_UserNo;
	strSQL.Format("select * from UserInfo where Uno='%s'",m_userno);
	m_pReader->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pReader->GetRecordCount()==0)
	{
		MessageBox("登陆出现错误!","登陆");
		OnExit();
	}
	if(m_pReader->m_Ulasttime.IsEmpty()||m_pReader->m_Ulasttime=="NULL")
		MessageBox("欢迎使用图书管理系统!\r\n您是第一次登陆此系统!","登陆消息");
	else
	{
		str.Format("上次登录时间为:%s",m_pReader->m_Ulasttime);
		MessageBox(str,"登陆消息");
	}
	CTime CurTime;
	CurTime=CTime::GetCurrentTime();
	str.Format("%d-%d-%d",CurTime.GetYear(),CurTime.GetMonth(),CurTime.GetDay());
	m_pReader->Edit();
	m_pReader->m_Ulasttime=str;
	m_pReader->Update();
	CString username="";
	username=m_pReader->m_Uname;
	m_btn.SetWindowText(username);
	str=m_userno;
	ModifyStyleEx(0,WS_EX_APPWINDOW);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}


void CUserDlg::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	CRect   rect;   
	GetClientRect(&rect);   
	CDC   dcMem;   
	dcMem.CreateCompatibleDC(&dc);   
	CBitmap   bmpBackground;   
	bmpBackground.LoadBitmap(IDB_BITMAP4);   //背景图
																	
          
	BITMAP   bitmap;   
	bmpBackground.GetBitmap(&bitmap);   
	CBitmap   *pbmpOld=dcMem.SelectObject(&bmpBackground);   
	dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcMem,0,0,   
	bitmap.bmWidth,bitmap.bmHeight,SRCCOPY);  
}

void CUserDlg::OnBookquery() 
{
	CQUERYBOOK dlg;
	dlg.DoModal();
}

void CUserDlg::OnBookBook() 
{
	CQUERYBOOK dlg;
	dlg.DoModal();
}

void CUserDlg::OnBorrowrecord() 
{
	CBorrowRecord dlg;
	dlg.DoModal();
}

void CUserDlg::OnCancelrenewal() 
{
	CCancelRenewal dlg;
	dlg.DoModal();
}

void CUserDlg::OnPunishmentrecord() 
{
	CPunishRecord dlg;
	dlg.DoModal();
}

BOOL CUserDlg::OnEraseBkgnd(CDC* pDC) 
{

	return CDialog::OnEraseBkgnd(pDC);
}

void CUserDlg::OnCancelMode() 
{
	CDialog::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}
