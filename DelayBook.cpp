// DelayBook.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "DelayBook.h"
#include "Borrow.h"
#include "RestDay.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDelayBook dialog


CDelayBook::CDelayBook(CWnd* pParent /*=NULL*/)
	: CDialog(CDelayBook::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDelayBook)
	m_reason = _T("");
	//}}AFX_DATA_INIT
}


void CDelayBook::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDelayBook)
	DDX_Control(pDX, IDC_LIST1, m_book);
	DDX_Text(pDX, IDC_EDIT1, m_reason);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDelayBook, CDialog)
	//{{AFX_MSG_MAP(CDelayBook)
	ON_BN_CLICKED(IDC_CONFORM, OnConform)
	ON_WM_CANCELMODE()
	ON_BN_CLICKED(IDC_QUERY, OnQuery)
	ON_WM_PAINT()
	ON_WM_CAPTURECHANGED()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDelayBook message handlers

BOOL CDelayBook::OnInitDialog() 
{
	CDialog::OnInitDialog();
	m_book.InsertColumn(0,"ISBN");
	m_book.InsertColumn(1,"书刊名称");
	m_book.InsertColumn(2,"借阅数");
	m_book.InsertColumn(3,"借阅时间");
	m_book.InsertColumn(4,"借阅状态");
	m_book.SetColumnWidth(0,129);
	m_book.SetColumnWidth(1,126);
	m_book.SetColumnWidth(2,126);
	m_book.SetColumnWidth(3,126);
	m_book.SetColumnWidth(4,126);
	DWORD dwStyle=m_book.GetExtendedStyle();
	dwStyle |= LVS_EX_GRIDLINES;
	dwStyle |= LVS_EX_FULLROWSELECT;
	m_book.SetExtendedStyle(dwStyle);
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
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CDelayBook::OnCancelMode() 
{
	CDialog::OnCancelMode();	
}

void CDelayBook::OnQuery() 
{
	UpdateData(true);
	if(m_reason.IsEmpty())
	{
		MessageBox("请填写读书学号!","图书续期");
		return;
	}
	CBorrow *m_pBorrow=new CBorrow(&m_database);
	if(m_pBorrow->IsOpen())
		m_pBorrow->Close();
	CString strSQL;
	strSQL.Format("select * from Borrow where Uno='%s'",m_reason);
	m_pBorrow->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pBorrow->GetRecordCount()==0)
	{
		MessageBox("没有借书记录!","图书续期");
		return;
	}
	m_pBorrow->MoveFirst();
	int i;
	for(i=0;;i++)
	{
		CString strTemp;
		if(m_pBorrow->IsEOF())
			break;
		m_book.InsertItem(i,strTemp);
		m_book.SetItemText(i,0,m_pBorrow->m_ISBN);
		m_book.SetItemText(i,1,m_pBorrow->m_Bname);
		strTemp.Format("%d",m_pBorrow->m_BorrNum);
		m_book.SetItemText(i,2,strTemp);
		m_book.SetItemText(i,3,m_pBorrow->m_BorrTime);
		CTime cur;
		cur=CTime::GetCurrentTime();
		CString timetime;
		timetime.Format("%d-%d-%d",cur.GetYear(),cur.GetMonth(),cur.GetDay());
		CRestDay dayday;
		int daytime=dayday.GetDay(m_pBorrow->m_BorrTime,timetime);
		strTemp.Format("%d",daytime);
		m_book.SetItemText(i,4,strTemp); //需要打开配置信息!
		m_pBorrow->MoveNext();
	}

}

void CDelayBook::OnConform() 
{
	int i,count=0;
	int chose;
	int nHeadNum = m_book.GetItemCount();
	for(i=0;i<nHeadNum;i++)
	{
		if(m_book.GetItemState(i, LVIS_SELECTED) == LVIS_SELECTED)
		{
			count++;
			chose=i;
			break;
		}
	}
	if(count==0)
	{
		MessageBox("没有选中任何记录!","图书续期");
		return;
	}

}

void CDelayBook::OnPaint() 
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

void CDelayBook::OnCaptureChanged(CWnd *pWnd) 
{
	// TODO: Add your message handler code here
	
	CDialog::OnCaptureChanged(pWnd);
}
