// ModifyPassword.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "ModifyPassword.h"
#include "Reader.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CModifyPassword dialog


CModifyPassword::CModifyPassword(CWnd* pParent /*=NULL*/)
	: CDialog(CModifyPassword::IDD, pParent)
{
	//{{AFX_DATA_INIT(CModifyPassword)
	m_oldpwd = _T("");
	m_newpwd = _T("");
	m_conformpwd = _T("");
	//}}AFX_DATA_INIT
}


void CModifyPassword::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CModifyPassword)
	DDX_Text(pDX, IDC_EDIT1, m_oldpwd);
	DDX_Text(pDX, IDC_EDIT2, m_newpwd);
	DDX_Text(pDX, IDC_EDIT6, m_conformpwd);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CModifyPassword, CDialog)
	//{{AFX_MSG_MAP(CModifyPassword)
	ON_WM_PAINT()
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CModifyPassword message handlers

void CModifyPassword::OnOK() 
{
	UpdateData(true);
	CReader *m_pReader=new CReader(&m_database);
	if(m_pReader->IsOpen())
		m_pReader->Close();
	CString sql;
	CString str= ((CLMSApp *)AfxGetApp())->m_UserNo;
	sql.Format("select * from UserInfo where Uno='%s' and Upwd='%s'",str,m_oldpwd);
	m_pReader->Open(AFX_DB_USE_DEFAULT_TYPE,sql);
	if(m_pReader->GetRecordCount()==0)
	{
		MessageBox("ÃÜÂë´íÎó!","ÐÞ¸ÄÃÜÂë");
		return;
	}
	if(m_newpwd.IsEmpty()&&m_conformpwd.IsEmpty())
	{
		MessageBox("ÇëÊäÈëÐÂÃÜÂë!","ÐÞ¸ÄÃÜÂë");
		return;
	}
	if(m_newpwd.IsEmpty())
	{
		MessageBox("ÇëÊäÈëÐÂÃÜÂë!","ÐÞ¸ÄÃÜÂë");
		return;
	}
	if(m_newpwd==m_conformpwd)
	{
		m_pReader->Edit();
		m_pReader->m_Upwd=m_newpwd;
		m_pReader->Update();
		MessageBox("ÐÞ¸ÄÃÜÂë³É¹¦!","ÐÞ¸ÄÃÜÂë");
	}
	CDialog::OnOK();
}

BOOL CModifyPassword::OnInitDialog() 
{
	CDialog::OnInitDialog();
	TRY
	{
		m_database.OpenEx(_T("DSN=Í¼Êé¹ÜÀíÏµÍ³;UID=syx;PWD=qwerty000"),CDatabase::noOdbcDialog);
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

void CModifyPassword::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	CRect   rect;   
	GetClientRect(&rect);   
	CDC   dcMem;   
	dcMem.CreateCompatibleDC(&dc);   
	CBitmap   bmpBackground;   
	bmpBackground.LoadBitmap(IDB_BITMAP5);   //±³¾°Í¼
																	
          
	BITMAP   bitmap;   
	bmpBackground.GetBitmap(&bitmap);   
	CBitmap   *pbmpOld=dcMem.SelectObject(&bmpBackground);   
	dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcMem,0,0,   
	bitmap.bmWidth,bitmap.bmHeight,SRCCOPY);  
}

void CModifyPassword::OnCancelMode() 
{
	CDialog::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}
