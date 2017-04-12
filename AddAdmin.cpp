// AddAdmin.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "AddAdmin.h"
#include "Admin.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAddAdmin dialog


CAddAdmin::CAddAdmin(CWnd* pParent /*=NULL*/)
	: CDialog(CAddAdmin::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAddAdmin)
	m_type = _T("普通管理员");
	m_name = _T("");
	m_pwd = _T("");
	//}}AFX_DATA_INIT
}


void CAddAdmin::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAddAdmin)
	DDX_Text(pDX, IDC_EDIT11, m_type);
	DDX_Text(pDX, IDC_EDIT1, m_name);
	DDX_Text(pDX, IDC_EDIT2, m_pwd);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CAddAdmin, CDialog)
	//{{AFX_MSG_MAP(CAddAdmin)
	ON_WM_PAINT()
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAddAdmin message handlers

void CAddAdmin::OnOK() 
{
	UpdateData(true);
	if(m_name.IsEmpty())
	{
		MessageBox("请填写管理员名!","添加管理员");
		return;
	}
	if(m_pwd.IsEmpty())
	{
		MessageBox("请填写密码!","添加管理员");
		return;
	}
	if(m_pAdmin.IsOpen())
		m_pAdmin.Close();
	CString strSQL;
	m_pAdmin.Open(AFX_DB_USE_DEFAULT_TYPE,NULL);
	m_pAdmin.AddNew();
	m_pAdmin.m_Aname=m_name;
	m_pAdmin.m_Apwd=m_pwd;
	m_pAdmin.m_Atype=2;
	m_pAdmin.m_Aremarks="普通管理员";
	m_pAdmin.Update();
	MessageBox("添加成功!","添加管理员");
	CDialog::OnOK();
}

BOOL CAddAdmin::OnInitDialog() 
{
	CDialog::OnInitDialog();
	TRY
	{
		m_database.OpenEx(_T("DSN=图书管理系统;UID=syx;PWD=qwerty000"),CDatabase::noOdbcDialog);
		m_pAdmin.m_pDatabase=&m_database;
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
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CAddAdmin::OnPaint() 
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

void CAddAdmin::OnCancelMode() 
{
	CDialog::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}
