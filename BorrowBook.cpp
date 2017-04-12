// BorrowBook.cpp : implementation file
//

#include "stdafx.h"
#include "LMS.h"
#include "BorrowBook.h"
#include "Book.h"
#include "Reader.h"
#include "BtnST.h"
#include "Config.h"
#include "Borrow.h"
#include "Renewal.h"
#include "One.h"
#include "RestDay.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBorrowBook dialog


CBorrowBook::CBorrowBook(CWnd* pParent /*=NULL*/)
	: CDialog(CBorrowBook::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBorrowBook)
	m_reason1 = _T("");
	m_reason2 = _T("");
	m_isbn = _T("");
	m_bookname = _T("");
	m_no = _T("");
	m_name = _T("");
	m_num = 1;
	//}}AFX_DATA_INIT
}


void CBorrowBook::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBorrowBook)
	DDX_Control(pDX, IDC_LIST3, m_borrow);
	DDX_Control(pDX, IDC_LIST2, m_reader1);
	DDX_Control(pDX, IDC_LIST1, m_book1);
	DDX_Control(pDX, IDC_COMBO2, m_reader);
	DDX_Control(pDX, IDC_COMBO1, m_book);
	DDX_Text(pDX, IDC_EDIT1, m_reason1);
	DDX_Text(pDX, IDC_EDIT2, m_reason2);
	DDX_Text(pDX, IDC_EDIT3, m_isbn);
	DDX_Text(pDX, IDC_EDIT4, m_bookname);
	DDX_Text(pDX, IDC_EDIT5, m_no);
	DDX_Text(pDX, IDC_EDIT10, m_name);
	DDX_Text(pDX, IDC_EDIT6, m_num);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CBorrowBook, CDialog)
	//{{AFX_MSG_MAP(CBorrowBook)
	ON_WM_CANCELMODE()
	ON_BN_CLICKED(IDC_QUERYBOOK, OnQuerybook)
	ON_BN_CLICKED(IDC_QUERYREADER, OnQueryreader)
	ON_NOTIFY(NM_CLICK, IDC_LIST2, OnClickList2)
	ON_NOTIFY(NM_CLICK, IDC_LIST1, OnClickList1)
	ON_BN_CLICKED(IDC_BORROWBOOK, OnBorrowbook)
	ON_WM_PAINT()
	ON_WM_CAPTURECHANGED()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBorrowBook message handlers

BOOL CBorrowBook::OnInitDialog() 
{
	CDialog::OnInitDialog();
	m_book.InsertString(0,"ISBN");
	m_book.InsertString(1,"书刊名称");
	m_reader.InsertString(0,"读者学号");
	m_reader.InsertString(1,"读者姓名");
	m_book.SetCurSel(1);
	m_reader.SetCurSel(0);
	m_book1.InsertColumn(0,"ISBN");
	m_book1.InsertColumn(1,"书刊名称");
	m_book1.SetColumnWidth(0,129);
	m_book1.SetColumnWidth(1,126);
	m_reader1.InsertColumn(0,"读者学号");
	m_reader1.InsertColumn(1,"读者姓名");
	m_reader1.SetColumnWidth(0,129);
	m_reader1.SetColumnWidth(1,126);
	DWORD dwStyle=m_reader1.GetExtendedStyle();
	dwStyle |= LVS_EX_GRIDLINES;
	dwStyle |= LVS_EX_FULLROWSELECT;
	m_reader1.SetExtendedStyle(dwStyle);
	m_book1.SetExtendedStyle(dwStyle);
	m_borrow.InsertColumn(0,"读者学号");
	m_borrow.InsertColumn(1,"读者姓名");
	m_borrow.InsertColumn(2,"ISBN");
	m_borrow.InsertColumn(3,"书刊名称");
	m_borrow.InsertColumn(4,"借阅数量");
	m_borrow.InsertColumn(5,"借阅时间");
	m_borrow.SetColumnWidth(0,150);
	m_borrow.SetColumnWidth(1,130);
	m_borrow.SetColumnWidth(2,150);
	m_borrow.SetColumnWidth(3,110);
	m_borrow.SetColumnWidth(4,70);
	m_borrow.SetColumnWidth(5,129);
	DWORD dwStyle1=m_borrow.GetExtendedStyle();
	dwStyle1 |= LVS_EX_GRIDLINES;      
	m_borrow.SetExtendedStyle(dwStyle1);
	m_btn.SubclassDlgItem(IDC_QUERYBOOK,this);
	m_btn.SetIcon(IDI_SEARCH);
	m_btn1.SubclassDlgItem(IDC_QUERYREADER,this);
	m_btn1.SetIcon(IDI_SEARCH);
	TRY
	{
		m_database.OpenEx(_T("DSN=图书管理系统;UID=syx;PWD=qwerty000"),CDatabase::noOdbcDialog);
		m_pBook.m_pDatabase=&m_database;
		m_pReader.m_pDatabase=&m_database;
		m_pBorrow.m_pDatabase=&m_database;
		m_pConfig.m_pDatabase=&m_database;
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
	UpdateData(true);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CBorrowBook::OnCancelMode() 
{
	CDialog::OnCancelMode();
		
}

void CBorrowBook::OnQuerybook() 
{
	UpdateData(true);
	CString str="%";
	m_book1.DeleteAllItems();
	if(m_reason1.IsEmpty())
	{
		MessageBox("请输入关键字!","图书借阅");
		return;
	}
	if(m_book.GetCurSel()==-1)
	{
		MessageBox("没有选择查询方式!","图书借阅");
		return;
	}
	else
	{
		if(m_book.GetCurSel()==0)
		{
			int i;
			CString strSQL;
			strSQL.Format("select * from Book where ISBN like '%s%s%s'",str,m_reason1,str);
			if(m_pBook.IsOpen())
				m_pBook.Close();
			m_pBook.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
			if(m_pBook.GetRecordCount()==0)
			{
				MessageBox("没有任何信息!","图书借阅");
				return;
			}
			m_pBook.MoveFirst();
			for(i=0;;i++)
			{
				CString strTemp;
				if(m_pBook.IsEOF())
					break;
				m_book1.InsertItem(i,strTemp);
				m_book1.SetItemText(i,0,m_pBook.m_ISBN);
				m_book1.SetItemText(i,1,m_pBook.m_Bname);
				m_pBook.MoveNext();
			}
		}
		if(m_book.GetCurSel()==1)
		{
			int i;
			CString strSQL;
			strSQL.Format("select * from Book where Bname like '%s%s%s'",str,m_reason1,str);
			if(m_pBook.IsOpen())
				m_pBook.Close();
			m_pBook.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
			if(m_pBook.GetRecordCount()==0)
			{
				MessageBox("没有任何信息!","图书借阅");
				return;
			}
			m_pBook.MoveFirst();
			for(i=0;;i++)
			{
				CString strTemp;
				if(m_pBook.IsEOF())
					break;
				m_book1.InsertItem(i,strTemp);
				m_book1.SetItemText(i,0,m_pBook.m_ISBN);
				m_book1.SetItemText(i,1,m_pBook.m_Bname);
				m_pBook.MoveNext();
			}
		}
	}
}

void CBorrowBook::OnQueryreader() 
{
	CString str="%";
	UpdateData(true);
	m_reader1.DeleteAllItems();
	if(m_reason1.IsEmpty())
	{
		MessageBox("请输入关键字!","图书借阅");
		return;
	}
	if(m_reader.GetCurSel()==-1)
	{
		MessageBox("没有选择查询方式!","图书借阅");
		return;
	}
	else
	{
		if(m_reader.GetCurSel()==0)
		{
			int i;
			CString strSQL;
			strSQL.Format("select * from UserInfo where Uno like '%s%s%s'",str,m_reason2,str);
			if(m_pReader.IsOpen())
				m_pReader.Close();
			m_pReader.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
			if(m_pReader.GetRecordCount()==0)
			{
				MessageBox("没有任何信息!","图书借阅");
				return;
			}
			m_pReader.MoveFirst();
			for(i=0;;i++)
			{
				CString strTemp;
				if(m_pReader.IsEOF())
					break;
				m_reader1.InsertItem(i,strTemp);
				m_reader1.SetItemText(i,0,m_pReader.m_Uno);
				m_reader1.SetItemText(i,1,m_pReader.m_Uname);
				m_pReader.MoveNext();
			}
		}
		if(m_reader.GetCurSel()==1)
		{
			int i;
			CString strSQL;
			strSQL.Format("select * from UserInfo where Uname like '%s%s%s'",str,m_reason2,str);
			if(m_pReader.IsOpen())
				m_pReader.Close();
			m_pReader.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
			if(m_pReader.GetRecordCount()==0)
			{
				MessageBox("没有任何信息!","图书借阅");
				return;
			}
			m_pReader.MoveFirst();
			for(i=0;;i++)
			{
				CString strTemp;
				if(m_pReader.IsEOF())
					break;
				m_reader1.InsertItem(i,strTemp);
				m_reader1.SetItemText(i,0,m_pReader.m_Uno);
				m_reader1.SetItemText(i,1,m_pReader.m_Uname);
				m_pReader.MoveNext();
			}
		}
		m_pReader.Close();
	}
}

void CBorrowBook::OnClickList2(NMHDR* pNMHDR, LRESULT* pResult) 
{
	CString str,str1;
	NM_LISTVIEW* pNMListView = (NM_LISTVIEW*)pNMHDR;
	if(pNMListView->iItem==-1)
	{
		return;
	}	
	str=m_reader1.GetItemText(pNMListView->iItem,0);
	m_no=str;
	str1=m_reader1.GetItemText(pNMListView->iItem,1);
	m_name=str1;
	UpdateData(false);
	*pResult = 0;
}

void CBorrowBook::OnClickList1(NMHDR* pNMHDR, LRESULT* pResult) 
{	
	CString str,str1;
	NM_LISTVIEW* pNMListView = (NM_LISTVIEW*)pNMHDR;
	if(pNMListView->iItem==-1)
	{
		return;
	}	
	str=m_book1.GetItemText(pNMListView->iItem,0);
	m_isbn=str;
	str1=m_book1.GetItemText(pNMListView->iItem,1);
	m_bookname=str1;
	UpdateData(false);
	*pResult = 0;
}

void CBorrowBook::OnBorrowbook() 
{
	UpdateData(true);
	if(m_no.IsEmpty()||m_isbn.IsEmpty())
	{
		MessageBox("请选择图书和读者!","图书借阅");
		return;
	}
	if(m_num==0)
	{
		MessageBox("请输入借阅数!","图书借阅");
		return;
	}
	CString strSQL;
	if(m_pBook.IsOpen())
		m_pBook.Close();
	strSQL.Format("select * from Book where ISBN='%s'",m_isbn);
	m_pBook.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pBook.m_Bstore-m_num<0)
	{
		MessageBox("库存不足!无法借阅!","图书借阅");
		return;
	}
	m_pBook.Close();
	strSQL.Format("select * from Config");
	if(m_pConfig.IsOpen())
		m_pConfig.Close();
	m_pConfig.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pConfig.GetRecordCount()==0)
	{
		MessageBox("没有配置信息!无法加载用户约束信息!","图书借阅");
		return;
	}
	if(m_pReader.IsOpen())
		m_pReader.Close();
	strSQL.Format("select * from UserInfo where Uno='%s'",m_no);
	m_pReader.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	m_pConfig.MoveFirst();
	COne  p;
	for(int j=0;;j++)
	{
		if(m_pConfig.IsEOF())
			break;
		if(m_pConfig.m_Cname==m_pReader.m_Ujob)
		{
			p.data.Day=m_pConfig.m_Time;
			p.data.MaxNum=m_pConfig.m_MaxNum;
			p.data.Punish=m_pConfig.m_Punish;
			p.data.SameNum=m_pConfig.m_SameNum;
			break;
		}
		m_pConfig.MoveNext();
	}
	m_pConfig.Close();
	m_pReader.Close();
	CTime CurTime;
	CurTime=CTime::GetCurrentTime();
	int i=0;
	int samecount=0;
	if(m_pReader.IsOpen())
		m_pReader.Close();
	strSQL.Format("select * from UserInfo where Uno='%s'",m_no);
	m_pReader.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pReader.m_Ustatus/10>=2)
	{
		if(m_pBorrow.IsOpen())
			m_pBorrow.Close();
		strSQL.Format("select * from Borrow where Uno='%s' and Tstatus=0",m_no);
		m_pBorrow.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		if(m_pBorrow.GetRecordCount()==0)
		{
			MessageBox("无法加载信息!","图书借阅");
			return;
		}
		m_pBorrow.MoveFirst();
		for(i=0;;i++)
		{
			if(m_pBorrow.IsEOF())
				break;
			CRestDay dayday;
			CString timetime;
			timetime.Format("%d-%d-%d",CTime::GetCurrentTime().GetYear(),CTime::GetCurrentTime().GetMonth(),CTime::GetCurrentTime().GetDay());
			int day=dayday.GetDay(m_pBorrow.m_BorrTime,timetime);
			if(day>p.data.Day)
			{
				MessageBox("有超期借阅未还图书，请先进行还书在借书!","图书借阅");
				return;
			}
			if(m_pBorrow.m_ISBN==m_isbn)
			{
				samecount+=m_pBorrow.m_BorrNum;
			}
			m_pBorrow.MoveNext();
		}
	}
	m_pBorrow.Close();
	if(samecount+m_num>p.data.SameNum)
	{
		MessageBox("借阅相同书超过上限无法借阅!","图书借阅");
		return;
	}
	m_pReader.Close();
	if(m_pReader.IsOpen())
		m_pReader.Close();
	strSQL.Format("select * from UserInfo where Uno='%s'",m_no);
	m_pReader.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pReader.m_Ustatus/10+m_num>p.data.MaxNum+1)
	{
		MessageBox("借阅图书超过上限不能在借书了!","图书借阅");
		return;
	}
	m_pReader.Close();
	if(m_pReader.IsOpen())
		m_pReader.Close();
	strSQL.Format("select * from UserInfo where Uno='%s'",m_no);
	m_pReader.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pReader.m_Ustatus/10>=2)
	{
		if(m_pBorrow.IsOpen())
			m_pBorrow.Close();
		strSQL.Format("select * from Borrow where Uno='%s' and Tstatus=0 and ISBN='%s'",m_no,m_isbn);
		m_pBorrow.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		int nCount=0;
		if(m_pBorrow.GetRecordCount()!=0)
		{
			m_pBorrow.MoveFirst();
			for(int k=0;;k++)
			{
				if(m_pBorrow.IsEOF())
					break;
				nCount++;
				m_pBorrow.MoveNext();
			}
			if(nCount+m_num>p.data.SameNum)
			{
				MessageBox("借阅相同的图书超过上限不能在借阅此书了!","图书借阅");
				return;
			}
		}
	}
	m_pBorrow.Close();
	m_pReader.Close();
	if(m_pRenewal.IsOpen())
		m_pRenewal.Close();
	strSQL.Format("select * from  Renewal where Uno='%s' and ISBN='%s'",m_no,m_isbn);
	m_pRenewal.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pRenewal.GetRecordCount()>0)
	{
		if(MessageBox("有预约的图书，继续借阅此书一本!并将解除预约记录!并结束!","图书借阅",MB_OKCANCEL)==2)
			return;
		strSQL.Format("delete Renewal where Uno='%s' and ISBN='%s'",m_no,m_isbn);
		m_database.ExecuteSQL(strSQL);
		if(m_pBorrow.IsOpen())
			m_pBorrow.Close();
		m_pBorrow.Open(AFX_DB_USE_DEFAULT_TYPE,NULL);
		m_pBorrow.AddNew();
		m_pBorrow.m_Bname=m_bookname;
		m_pBorrow.m_BorrNum=1;
		CString DateTime;
		CTime CurT= CTime::GetCurrentTime(); 
		DateTime.Format("%04d-%02d-%02d", CurT.GetYear(),CurT.GetMonth(), CurT.GetDay());
		m_pBorrow.m_BorrTime=DateTime;
		m_pBorrow.m_ISBN=m_isbn;
		m_pBorrow.m_Uname=m_name;
		m_pBorrow.m_Uno=m_no;
		m_pBorrow.m_Tstatus=0;
		m_pBorrow.Update();
		if(m_pReader.IsOpen())
			m_pReader.Close();
		strSQL.Format("select * from UserInfo where Uno='%s'",m_no);
		m_pReader.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		m_pReader.Edit();
		m_pReader.m_Ustatus-=1;
		m_pReader.m_Ustatus+=10;
		m_pReader.Update();
		m_pReader.Close();
		if(m_pBook.IsOpen())
			m_pBook.Close();
		strSQL.Format("select * from Book where ISBN='%s'",m_isbn);
		m_pBook.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		m_pBook.Edit();
		m_pBook.m_Bstore-=1;
		m_pBook.Update();
		m_pBook.Close();
	}
	else
	{
		CBorrow *m_pBorrowp=new CBorrow(&m_database);
		m_pBorrowp->Open(AFX_DB_USE_DEFAULT_TYPE,NULL);
		m_pBorrowp->AddNew();
		m_pBorrowp->m_Bname=m_bookname;
		m_pBorrowp->m_BorrNum=m_num;
		CString DateTime;
		CTime CurT= CTime::GetCurrentTime(); 
		DateTime.Format("%04d-%02d-%02d", CurT.GetYear(),CurT.GetMonth(), CurT.GetDay());
		m_pBorrowp->m_BorrTime=DateTime;
		m_pBorrowp->m_ISBN=m_isbn;
		m_pBorrowp->m_Uname=m_name;
		m_pBorrowp->m_Uno=m_no;
		m_pBorrowp->SetFieldNull(&(m_pBorrowp->m_ReturnTime),FALSE);
		m_pBorrowp->m_Tstatus=0;
		m_pBorrowp->Update();
		m_pBorrowp->Requery();
		if(m_pReader.IsOpen())
			m_pReader.Close();
		strSQL.Format("select * from UserInfo where Uno='%s'",m_no);
		m_pReader.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		m_pReader.Edit();
		m_pReader.m_Ustatus+=m_num*10;
		m_pReader.Update();
		if(m_pBook.IsOpen())
			m_pBook.Close();
		strSQL.Format("select * from Book where ISBN='%s'",m_isbn);
		m_pBook.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		m_pBook.Edit();
		m_pBook.m_Bstore-=m_num;
		m_pBook.Update();
	}
	MessageBox("借书成功!","图书借阅");
	CString DateTime;
	CTime CurT= CTime::GetCurrentTime(); 
	DateTime.Format("%04d-%02d-%02d", CurT.GetYear(),CurT.GetMonth(), CurT.GetDay());
	m_pRenewal.Close();
	if(m_pBorrow.IsOpen())
		m_pBorrow.Close();
	strSQL.Format("select * from Borrow where Uno='%s' and ISBN='%s' and Tstatus!=2 and BorrTime='%s'",m_no,m_isbn,DateTime);
	m_pBorrow.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	CString strTemp;
	m_pBorrow.MoveFirst();
	for(int k=0;;k++)
	{
		if(m_pBorrow.IsEOF())
			break;
		m_borrow.InsertItem(k,strTemp);
		m_borrow.SetItemText(k,0,m_pBorrow.m_Uno);
		m_borrow.SetItemText(k,1,m_pBorrow.m_Uname);
		m_borrow.SetItemText(k,2,m_pBorrow.m_ISBN);
		m_borrow.SetItemText(k,3,m_pBorrow.m_Bname);
		strTemp.Format("%d",m_pBorrow.m_BorrNum);
		m_borrow.SetItemText(k,4,strTemp);
		m_borrow.SetItemText(k,5,m_pBorrow.m_BorrTime);
		m_pBorrow.MoveNext();
	}
}

void CBorrowBook::OnPaint() 
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

void CBorrowBook::OnCaptureChanged(CWnd *pWnd) 
{
	// TODO: Add your message handler code here
	
	CDialog::OnCaptureChanged(pWnd);
}
