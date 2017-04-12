// LMSView.cpp : implementation of the CLMSView class
//

#include "stdafx.h"
#include "LMS.h"
#include "LOGIN.h" 
#include "LMSDoc.h"
#include "LMSView.h"
#include "BtnST.h"
#include "BookMDlg.h" 
#include "INFO.h"  
#include "RADERM.h" 
#include "BorrowBook.h"
#include "NewBook.h"
#include "NewReader.h"
#include "DeleteReader.h"
#include "DeleteBook.h"
#include "Punishment.h"
#include "UserDlg.h"
#include "DelayBook.h"
#include "DeptManage.h"
#include "ConfigManage.h"
#include "DatabaseManage.h"
#include "Bookbook.h"
#include "ReturnBook.h"
#include "Admin.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLMSView

IMPLEMENT_DYNCREATE(CLMSView, CFormView)

BEGIN_MESSAGE_MAP(CLMSView, CFormView)
	//{{AFX_MSG_MAP(CLMSView)
	ON_WM_PAINT()
	ON_WM_CTLCOLOR()
	ON_WM_SIZE()
	ON_WM_DRAWITEM()
	ON_BN_CLICKED(IDC_ADDNEWBOOK, OnAddnewbook)
	ON_BN_CLICKED(IDC_RETURNBOOK, OnReturnbook)
	ON_BN_CLICKED(IDC_BORROWBOOK, OnBorrowbook)
	ON_BN_CLICKED(IDC_DELAY, OnDelay)
	ON_BN_CLICKED(IDC_DELETEBOOK, OnDeletebook)
	ON_BN_CLICKED(IDC_PUNISHMENT, OnPunishment)
	ON_BN_CLICKED(IDC_DELETEREADER, OnDeletereader)
	ON_BN_CLICKED(IDC_ADDNEWREADER, OnAddnewreader)
	ON_BN_CLICKED(IDC_DELAYBOOK, OnDelaybook)
	ON_BN_CLICKED(IDC_Exit, OnExit)
	ON_BN_CLICKED(IDC_PeopleM, OnPeopleM)
	ON_BN_CLICKED(IDC_BookM, OnBookM)
	ON_BN_CLICKED(IDC_DEPTM, OnDeptm)
	ON_BN_CLICKED(IDC_BORROWREASON, OnBorrowreason)
	ON_BN_CLICKED(IDC_DATABASEM, OnDatabasem)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CFormView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLMSView construction/destruction

CLMSView::CLMSView()
	: CFormView(CLMSView::IDD)
{
	m_Uno="";
	//{{AFX_DATA_INIT(CLMSView)
	//}}AFX_DATA_INIT
	// TODO: add construction code here
}

CLMSView::~CLMSView()
{
}

void CLMSView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CLMSView)
	DDX_Control(pDX, IDC_DATABASEM, m_pbutton);
	//}}AFX_DATA_MAP
}

BOOL CLMSView::PreCreateWindow(CREATESTRUCT& cs)
{
	bool Yn=Login();
	//bool Yn=true;
	if(!Yn)
	{
		CUserDlg dlg;
		dlg.DoModal();
		OnExit();
	}
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
	CString strSQL;
	CAdmin *m_pAdmin=new CAdmin(&m_database);
	if(m_pAdmin->IsOpen())
		m_pAdmin->Close();
	strSQL.Format("select * from Admin where Aname='%s'",((CLMSApp *)AfxGetApp())->m_UserNo);
	m_pAdmin->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	CTime CurTime;
	CurTime=CTime::GetCurrentTime();
	CString strTime;
	strTime.Format("%d-%d-%d",CurTime.GetYear(),CurTime.GetMonth(),CurTime.GetDay());
	m_pAdmin->Edit();
	m_pAdmin->m_Alasttime=strTime;
	m_pAdmin->Update();
	((CLMSApp *)AfxGetApp())->m_Atype=m_pAdmin->m_Atype;
	m_pAdmin->Close();
	return CFormView::PreCreateWindow(cs);
}

void CLMSView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

}

/////////////////////////////////////////////////////////////////////////////
// CLMSView printing

BOOL CLMSView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CLMSView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CLMSView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CLMSView::OnPrint(CDC* pDC, CPrintInfo* /*pInfo*/)
{
	// TODO: add customized printing code here
}

/////////////////////////////////////////////////////////////////////////////
// CLMSView diagnostics

#ifdef _DEBUG
void CLMSView::AssertValid() const
{
	CFormView::AssertValid();
}

void CLMSView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CLMSDoc* CLMSView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CLMSDoc)));
	return (CLMSDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CLMSView message handlers

BOOL CLMSView::Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext) 
{	
	return CFormView::Create(lpszClassName, lpszWindowName, dwStyle, rect, pParentWnd, nID, pContext);
}

void CLMSView::OnPaint() 
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
	
	// Do not call CFormView::OnPaint() for painting messages
}

HBRUSH CLMSView::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor) 
{
	HBRUSH hbr = CFormView::OnCtlColor(pDC, pWnd, nCtlColor);
	if(nCtlColor==CTLCOLOR_STATIC)  
	 {
		pDC->SetTextColor(RGB(0,0,0));
		pDC->SetBkColor(RGB(128,128,255));
		HBRUSH b=CreateSolidBrush(RGB(28,66,138));
		pDC-> SetBkMode(TRANSPARENT);
		return b;
	 }	
	return hbr;
}

void CLMSView::OnSize(UINT nType, int cx, int cy) 
{
	CFormView::OnSize(nType, cx, cy);	
}

void CLMSView::OnDrawItem(int nIDCtl, LPDRAWITEMSTRUCT lpDrawItemStruct) 
{
	CFormView::OnDrawItem(nIDCtl, lpDrawItemStruct);
}

bool CLMSView::Login()
{
	CLOGIN dlg;
	dlg.DoModal();
	if (dlg.m_state!=1)
		OnExit();
	else
	{
		((CLMSApp *)AfxGetApp())->m_UserNo=dlg.m_username;
		if(dlg.m_radio==0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

void CLMSView::OnExit() 
{
	exit(0);
}

void CLMSView::OnBookM() 
{
	CBookMDlg dlg;
	dlg.DoModal();
}

void CLMSView::OnPeopleM() 
{
	CRADERM dlg;
	dlg.DoModal();
}
void CLMSView::OnBorrowbook() 
{
	CBorrowBook dlg;
	dlg.DoModal();
}

void CLMSView::OnDelay() 
{
	CBookbook dlg;
	dlg.DoModal();
}

void CLMSView::OnReturnbook() 
{
	CReturnBook dlg;
	dlg.DoModal();	
}

void CLMSView::OnAddnewbook() 
{
	CNewBook dlg;
	dlg.DoModal();
}

void CLMSView::OnAddnewreader() 
{
	CNewReader dlg;
	dlg.DoModal();
}

void CLMSView::OnDeletereader() 
{
	CDeleteReader dlg;
	dlg.DoModal();
}

void CLMSView::OnDeletebook() 
{
	CDeleteBook dlg;
	dlg.DoModal();
}

void CLMSView::OnPunishment() 
{
	CPunishment dlg;
	dlg.DoModal();
}

void CLMSView::OnDelaybook() 
{
	CDelayBook DLG;
	DLG.DoModal();
}


void CLMSView::OnDeptm() 
{
	CDeptManage dlg;
	dlg.DoModal();
}

void CLMSView::OnBorrowreason() 
{
	CConfigManage dlg;
	dlg.DoModal();
}

void CLMSView::OnDatabasem() 
{
	if(((CLMSApp *)AfxGetApp())->m_Atype!=1)
	{
		MessageBox("权限不够!","数据库管理",MB_ICONSTOP);
		return;
	}
	CDatabaseManage dlg;
	dlg.DoModal();
}
