// BookLook.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "BookLook.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
using namespace Gdiplus;
/////////////////////////////////////////////////////////////////////////////
// CBookLook dialog


CBookLook::CBookLook(CWnd* pParent /*=NULL*/)
	: CDialog(CBookLook::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBookLook)
	m_isbn = _T("");
	m_name = _T("");
	m_num = 0;
	m_content = _T("");
	m_version = _T("");
	m_pleace = _T("");
	m_publish = _T("");
	m_remark = _T("");
	m_time = _T("");
	m_editor = _T("");
	m_price = 0.0;
	m_store = 0;
	//}}AFX_DATA_INIT
}


void CBookLook::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBookLook)
	DDX_Control(pDX, IDC_TWO, m_two);
	DDX_Control(pDX, IDC_ONE, m_one);
	DDX_Text(pDX, IDC_ISBN, m_isbn);
	DDX_Text(pDX, IDC_NAME, m_name);
	DDX_Text(pDX, IDC_NUM, m_num);
	DDX_Text(pDX, IDC_CONCENTS, m_content);
	DDX_Text(pDX, IDC_VERSION, m_version);
	DDX_Text(pDX, IDC_PLEACE, m_pleace);
	DDX_Text(pDX, IDC_PUBLISH, m_publish);
	DDX_Text(pDX, IDC_REMARKS, m_remark);
	DDX_Text(pDX, IDC_TIME, m_time);
	DDX_Text(pDX, IDC_WRITER, m_editor);
	DDX_Text(pDX, IDC_PRICE, m_price);
	DDX_Text(pDX, IDC_STORE, m_store);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CBookLook, CDialog)
	//{{AFX_MSG_MAP(CBookLook)
	ON_WM_CANCELMODE()
	ON_WM_PAINT()
	ON_WM_CAPTURECHANGED()
	ON_WM_CHAR()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBookLook message handlers

BOOL CBookLook::OnInitDialog() 
{
	CDialog::OnInitDialog();
	TRY
	{
		m_database.OpenEx(_T("DSN=图书管理系统;UID=syx;PWD=qwerty000"),CDatabase::noOdbcDialog);
		m_pBook.m_pDatabase=&m_database;
		m_pTwobook.m_pDatabase=&m_database;
		m_pOnebook.m_pDatabase=&m_database;
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
	if(m_pBook.IsOpen())
		m_pBook.Close();
	CString strSQL;
	char str[10000];
	sprintf(str,"select * from Book where ISBN='%s'",((CLMSApp *)AfxGetApp())->m_ISBN);
	m_pBook.Open(AFX_DB_USE_DEFAULT_TYPE,str);
	if(m_pBook.GetRecordCount()==0)
	{
		MessageBox("加载失败!","修改图书");
	}
	else
	{
		if(m_pBook.m_Bstore!=m_pBook.m_Bnum)
		{
			((CEdit*)GetDlgItem(IDC_ISBN))->EnableWindow(false);
			((CEdit*)GetDlgItem(IDC_NAME))->EnableWindow(false);
			MessageBox("图书有借阅!无法修改书名和ISBN!","修改图书");
		}
		m_isbn=m_pBook.m_ISBN;
		m_name=m_pBook.m_Bname;
		m_editor=m_pBook.m_Beditor;
		m_publish=m_pBook.m_Bpublish;
		m_content=m_pBook.m_Bcontents;
		m_price=m_pBook.m_Bprice;
		m_pleace=m_pBook.m_Bplace;
		m_num=m_pBook.m_Bnum;
		m_store=m_pBook.m_Bstore;
		if(m_pTwobook.IsOpen())
			m_pTwobook.Close();
		strSQL.Format("select * from TwoBook where twoNo='%d'",m_pBook.m_twoNo);
		m_pTwobook.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		m_two.InsertString(0,m_pTwobook.m_twoName);
		m_two.SetCurSel(0);
		if(m_pOnebook.IsOpen())
			m_pOnebook.Close();
		strSQL.Format("select * from OneBook,TwoBook where OneBook.oneNo=TwoBook.oneNo and TwoBook.twoNo='%d'",m_pBook.m_twoNo);
		m_pOnebook.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		m_one.InsertString(0,m_pOnebook.m_oneName);
		m_one.SetCurSel(0);
		m_version=m_pBook.m_BpublishTime;
		m_time=m_pBook.m_BprintTime;
		m_remark=m_pBook.m_Bremarks;
		FilePath=m_pBook.m_Bcover;
		if(!FilePath.IsEmpty())
			OnPaint();
		UpdateData(false);
	}
		m_isbn = _T("");
	m_name = _T("");
	m_num = 0;
	m_publish = _T("");
	m_remark = _T("");
	m_time = _T("");
	m_pleace = _T("");
	m_content = _T("");
	m_store = 0;
	m_version = _T("");
	m_editor = _T("");
	m_price = 0.0;
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CBookLook::OnCancelMode() 
{
	CDialog::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}

void CBookLook::OnPaint() 
{
	CDC *dc=GetDlgItem(IDC_STATIC1)->GetDC();
	HDC hdc = dc->GetSafeHdc();
	Graphics grphics(hdc);

	RECT rect;
	GetDlgItem(IDC_STATIC1)->GetClientRect(&rect);
	Graphics graphics(dc->m_hDC);
	
	_bstr_t bstr(FilePath);
	wchar_t * wstr = (wchar_t*)bstr;
	Image image(wstr,true);
	graphics.DrawImage(&image,0,0,155,210);
	ReleaseDC(dc);
}

void CBookLook::OnCaptureChanged(CWnd *pWnd) 
{
	// TODO: Add your message handler code here
	
	CDialog::OnCaptureChanged(pWnd);
}

void CBookLook::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default
	
	CDialog::OnChar(nChar, nRepCnt, nFlags);
}
