// Bookbook.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "Bookbook.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBookbook dialog


CBookbook::CBookbook(CWnd* pParent /*=NULL*/)
	: CDialog(CBookbook::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBookbook)
	m_no = _T("");
	m_name = _T("");
	m_isbn = _T("");
	m_bookname = _T("");
	m_no1 = _T("");
	m_name1 = _T("");
	Yn=false;
	//}}AFX_DATA_INIT
}


void CBookbook::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBookbook)
	DDX_Control(pDX, IDC_LIST4, m_book);
	DDX_Control(pDX, IDC_LIST1, m_reader);
	DDX_Control(pDX, IDC_LIST2, m_borrow);
	DDX_Text(pDX, IDC_EDIT1, m_no);
	DDX_Text(pDX, IDC_EDIT2, m_name);
	DDX_Text(pDX, IDC_EDIT3, m_isbn);
	DDX_Text(pDX, IDC_EDIT4, m_bookname);
	DDX_Text(pDX, IDC_EDIT5, m_no1);
	DDX_Text(pDX, IDC_EDIT10, m_name1);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CBookbook, CDialog)
	//{{AFX_MSG_MAP(CBookbook)
	ON_WM_CANCELMODE()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	ON_NOTIFY(NM_CLICK, IDC_LIST4, OnClickList4)
	ON_NOTIFY(NM_CLICK, IDC_LIST1, OnClickList1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON5, OnButton5)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_WM_PAINT()
	ON_WM_CAPTURECHANGED()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBookbook message handlers

BOOL CBookbook::OnInitDialog() 
{
	CDialog::OnInitDialog();
	m_book.InsertColumn(0,"ISBN");
	m_book.InsertColumn(1,"书刊名称");
	m_book.SetColumnWidth(0,129);
	m_book.SetColumnWidth(1,126);
	m_reader.InsertColumn(0,"读者学号");
	m_reader.InsertColumn(1,"读者姓名");
	m_reader.SetColumnWidth(0,129);
	m_reader.SetColumnWidth(1,126);
	DWORD dwStyle=m_reader.GetExtendedStyle();
	dwStyle |= LVS_EX_GRIDLINES;
	dwStyle |= LVS_EX_FULLROWSELECT;
	m_reader.SetExtendedStyle(dwStyle);
	m_book.SetExtendedStyle(dwStyle);
	m_borrow.InsertColumn(0,"读者学号");
	m_borrow.InsertColumn(1,"读者姓名");
	m_borrow.InsertColumn(2,"ISBN");
	m_borrow.InsertColumn(3,"书刊名称");
	m_borrow.SetColumnWidth(0,150);
	m_borrow.SetColumnWidth(1,150);
	m_borrow.SetColumnWidth(2,150);
	m_borrow.SetColumnWidth(3,150);
	DWORD dwStyle1=m_borrow.GetExtendedStyle();
	dwStyle1 |= LVS_EX_GRIDLINES; 
	dwStyle1 |=LVS_EX_FULLROWSELECT;
	m_borrow.SetExtendedStyle(dwStyle1);
	TRY
	{
		m_database.OpenEx(_T("DSN=图书管理系统;UID=syx;PWD=qwerty000"),CDatabase::noOdbcDialog);
		m_pBook.m_pDatabase=&m_database;
		m_pReader.m_pDatabase=&m_database;
		m_pRenewal.m_pDatabase=&m_database;
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
	UpdateData(false);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CBookbook::OnCancelMode() 
{
	CDialog::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}

void CBookbook::OnButton1() 
{
	CString str="%";
	UpdateData(true);
	m_reader.DeleteAllItems();
	if(m_no.IsEmpty())
	{
		MessageBox("没有输入关键字!","图书预约");
		return;
	}
	else
	{
		int i;
		CString strSQL;
		strSQL.Format("select * from UserInfo where Uno like '%s%s%s'",str,m_no,str);
		if(m_pReader.IsOpen())
			m_pReader.Close();
		m_pReader.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		if(m_pReader.GetRecordCount()==0)
		{
			MessageBox("没有任何信息!","图书预约");
			return;
		}
		m_pReader.MoveFirst();
		for(i=0;;i++)
		{
			CString strTemp;
			if(m_pReader.IsEOF())
				break;
			m_reader.InsertItem(i,strTemp);
			m_reader.SetItemText(i,0,m_pReader.m_Uno);
			m_reader.SetItemText(i,1,m_pReader.m_Uname);
			m_pReader.MoveNext();
		}
	}
}

void CBookbook::OnButton4() 
{
	UpdateData(true);
	CString str="%";
	m_book.DeleteAllItems();
	if(m_name.IsEmpty())
	{
		MessageBox("没有输入关键字!","图书预约");
		return;
	}
	else
	{
		int i;
		CString strSQL;
		strSQL.Format("select * from Book where Bname like '%s%s%s'",str,m_name,str);
		if(m_pBook.IsOpen())
			m_pBook.Close();
		m_pBook.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		if(m_pBook.GetRecordCount()==0)
		{
			MessageBox("没有任何信息!","图书预约");
			return;
		}
		m_pBook.MoveFirst();
		for(i=0;;i++)
		{
			CString strTemp;
			if(m_pBook.IsEOF())
				break;
			m_book.InsertItem(i,strTemp);
			m_book.SetItemText(i,0,m_pBook.m_ISBN);
			m_book.SetItemText(i,1,m_pBook.m_Bname);
			m_pBook.MoveNext();
		}
	}
}

void CBookbook::OnClickList4(NMHDR* pNMHDR, LRESULT* pResult) 
{
	CString str,str1;
	NM_LISTVIEW* pNMListView = (NM_LISTVIEW*)pNMHDR;
	if(pNMListView->iItem==-1)
	{
		return;
	}	
	str=m_book.GetItemText(pNMListView->iItem,0);
	m_isbn=str;
	str1=m_book.GetItemText(pNMListView->iItem,1);
	m_bookname=str1;
	UpdateData(false);
	*pResult = 0;
}

void CBookbook::OnClickList1(NMHDR* pNMHDR, LRESULT* pResult) 
{
	CString str,str1;
	NM_LISTVIEW* pNMListView = (NM_LISTVIEW*)pNMHDR;
	if(pNMListView->iItem==-1)
	{
		return;
	}	
	str=m_reader.GetItemText(pNMListView->iItem,0);
	m_no1=str;
	str1=m_reader.GetItemText(pNMListView->iItem,1);
	m_name1=str1;
	UpdateData(false);
	*pResult = 0;
}

void CBookbook::OnButton2() 
{
	UpdateData(true);
	CString strSQL;
	strSQL.Format("select * from Renewal where Uno='%s'",m_no1);
	if(m_pRenewal.IsOpen())
		m_pRenewal.Close();
	m_pRenewal.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pRenewal.GetRecordCount()==0)
	{}
	else
	{
		MessageBox("此人已有图书预约记录不可再预约!","图书预约");
		return;
	}
	if(m_no1.IsEmpty()&&m_isbn.IsEmpty())
	{
		MessageBox("请输入预约图书和学号!","图书预约");
		return;
	}
	if(m_pRenewal.IsOpen())
		m_pRenewal.Close();
	m_pRenewal.Open(AFX_DB_USE_DEFAULT_TYPE,NULL);
	m_pRenewal.AddNew();
	m_pRenewal.m_ISBN=m_isbn;
	m_pRenewal.m_Bname=m_bookname;
	m_pRenewal.m_Uno=m_no1;
	m_pRenewal.m_Uname=m_name1;
	m_pRenewal.Update();
	m_pRenewal.Close();
	if(m_pReader.IsOpen())
		m_pReader.Close();
	strSQL.Format("select * from UserInfo where Uno='%s'",m_no1);
	m_pReader.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	m_pReader.Edit();
	m_pReader.m_Ustatus+=1;
	m_pReader.Update();
	m_pReader.Close();
	MessageBox("预约图书成功!","图书预约");
}

void CBookbook::OnButton5() 
{
	UpdateData(true);
	if(m_no.IsEmpty())
	{
		MessageBox("请输入学号!","图书预约");
		return;
	}
	if(m_pReader.IsOpen())
		m_pReader.Close();
	CString strSQL;
	strSQL.Format("select * from UserInfo where Uno='%s'",m_no);
	m_pReader.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pReader.GetRecordCount()==0)
	{
		MessageBox("没有此读者学号!","图书预约");
		return;
	}
	if(m_pReader.m_Ustatus%10==1)
	{
		MessageBox("此人没有预约记录!","图书预约");
		return;
	}
	if(m_pRenewal.IsOpen())
		m_pRenewal.Close();
	strSQL.Format("select * from Renewal where Uno='%s'",m_no);
	m_pRenewal.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pRenewal.GetRecordCount()==0)
	{
		MessageBox("此人没预约!请检查个人信息表!并检查错误!","图书预约");
		return;
	}
	m_pRenewal.MoveFirst();
	m_borrow.DeleteAllItems();
	for(int i=0;;i++)
	{
		CString strTemp;
		if(m_pRenewal.IsEOF())
			break;
		m_borrow.InsertItem(i,strTemp);
		m_borrow.SetItemText(i,0,m_pRenewal.m_Uno);
		m_borrow.SetItemText(i,1,m_pRenewal.m_Uname);
		m_borrow.SetItemText(i,2,m_pRenewal.m_ISBN);
		m_borrow.SetItemText(i,3,m_pRenewal.m_Bname);
		m_pRenewal.MoveNext();
	}
	m_pRenewal.Close();
}

void CBookbook::OnButton3() 
{
	int i,count=0;
	int chose;
	int nHeadNum = m_borrow.GetItemCount();
	for(i=0;i<nHeadNum;i++)
	{
		if(m_borrow.GetItemState(i, LVIS_SELECTED) == LVIS_SELECTED)
		{
			count++;
			chose=i;
			break;
		}
	}
	if(count==0)
	{
		MessageBox("没有选中任何图书!","图书预约");
		return;
	}
	else
	{
		m_borrow.SetItemState(chose, 0, LVIS_SELECTED|LVIS_FOCUSED);
		CString strSQL,str;
		str=m_borrow.GetItemText(chose,0);
		strSQL.Format("delete from Renewal where Uno='%s'",str);
		m_database.ExecuteSQL(strSQL);
		if(m_pReader.IsOpen())
			m_pReader.Close();
		strSQL.Format("select * from UserInfo where Uno='%s'",str);
		m_pReader.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		m_pReader.Edit();
		m_pReader.m_Ustatus-=1;
		m_pReader.Update();
		m_pReader.Close();
		m_borrow.DeleteItem(chose);
		MessageBox("取消预约成功!","图书预约");
	}
}

void CBookbook::OnPaint() 
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

void CBookbook::OnCaptureChanged(CWnd *pWnd) 
{
	// TODO: Add your message handler code here
	
	CDialog::OnCaptureChanged(pWnd);
}
