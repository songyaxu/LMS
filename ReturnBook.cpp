// ReturnBook.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "ReturnBook.h"
#include "RestDay.h"
#include "Config.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CReturnBook dialog


CReturnBook::CReturnBook(CWnd* pParent /*=NULL*/)
	: CDialog(CReturnBook::IDD, pParent)
{
	//{{AFX_DATA_INIT(CReturnBook)
	m_no = _T("");
	//}}AFX_DATA_INIT
}


void CReturnBook::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CReturnBook)
	DDX_Control(pDX, IDC_LIST1, m_borrow);
	DDX_Text(pDX, IDC_EDIT1, m_no);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CReturnBook, CDialog)
	//{{AFX_MSG_MAP(CReturnBook)
	ON_BN_CLICKED(IDC_RETURN, OnReturn)
	ON_BN_CLICKED(IDC_QUERY, OnQuery)
	ON_WM_CANCELMODE()
	ON_WM_PAINT()
	ON_WM_CAPTURECHANGED()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CReturnBook message handlers
BOOL CReturnBook::OnInitDialog() 
{
	CDialog::OnInitDialog();
	TRY
	{
		m_database.OpenEx(_T("DSN=图书管理系统;UID=syx;PWD=qwerty000"),CDatabase::noOdbcDialog);
		m_pBook.m_pDatabase=&m_database;
		m_pReader.m_pDatabase=&m_database;
		m_pBorrow.m_pDatabase=&m_database;
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
	m_borrow.InsertColumn(0,"序号");
	m_borrow.InsertColumn(1,"读者学号");
	m_borrow.InsertColumn(2,"读者姓名");
	m_borrow.InsertColumn(3,"ISBN");
	m_borrow.InsertColumn(4,"书刊名称");
	m_borrow.InsertColumn(5,"借阅数量");
	m_borrow.InsertColumn(6,"借阅时间");
	m_borrow.InsertColumn(7,"归还时间");
	m_borrow.InsertColumn(8,"借阅时长");
	m_borrow.InsertColumn(9,"状态");
	m_borrow.SetColumnWidth(0,60);
	m_borrow.SetColumnWidth(1,120);
	m_borrow.SetColumnWidth(2,100);
	m_borrow.SetColumnWidth(3,120);
	m_borrow.SetColumnWidth(4,100);
	m_borrow.SetColumnWidth(5,60);
	m_borrow.SetColumnWidth(6,119);
	m_borrow.SetColumnWidth(7,119);
	m_borrow.SetColumnWidth(8,60);
	m_borrow.SetColumnWidth(9,80);
	DWORD dwStyle=m_borrow.GetExtendedStyle();
	dwStyle |= LVS_EX_GRIDLINES;
	dwStyle |= LVS_EX_FULLROWSELECT;
	m_borrow.SetExtendedStyle(dwStyle);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CReturnBook::OnReturn() 
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
		MessageBox("没有选中任何图书!","还书");
		return;
	}
	else
	{
		//此处检查所要还书是否超期!!!!!
		m_borrow.SetItemState(chose, 0, LVIS_SELECTED|LVIS_FOCUSED);
		CString str,strSQL;
		str=m_borrow.GetItemText(chose,0);
		strSQL.Format("select * from Borrow where BorrId='%s'",str);
		if(m_pBorrow.IsOpen())
			m_pBorrow.Close();
		m_pBorrow.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		if(m_pBorrow.GetRecordCount()==0)
		{
			MessageBox("出现未知问题!","还书");
			return;
		}
		else
		{
			CString timetime;
			timetime.Format("%d-%d-%d",CTime::GetCurrentTime().GetYear(),CTime::GetCurrentTime().GetMonth(),CTime::GetCurrentTime().GetDay());
			CRestDay dayday;
			int day=dayday.GetDay(timetime,m_pBorrow.m_BorrTime);
			if(day>p.data.Day)
			{
				if(MessageBox("图书已超期!如果已进行惩罚请点击“继续”!","还书",MB_OKCANCEL)==2)
					return;
			}
		}
		m_pBorrow.Edit();
		m_pBorrow.m_Tstatus=2;
		str.Format("%d-%d-%d",CTime::GetCurrentTime().GetYear(),CTime::GetCurrentTime().GetMonth(),CTime::GetCurrentTime().GetDay());
		m_pBorrow.m_ReturnTime=str;
		m_pBorrow.Update();
		if(m_pReader.IsOpen())
			m_pReader.Close();
		str=m_borrow.GetItemText(chose,1);
		strSQL.Format("select * from UserInfo where Uno='%s'",str);
		m_pReader.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		m_pReader.Edit();
		m_pReader.m_Ustatus-=10;
		m_pReader.Update();
		m_pReader.Close();
		if(m_pBook.IsOpen())
			m_pBook.Close();
		str=m_borrow.GetItemText(chose,3);
		strSQL.Format("select * from Book where ISBN='%s'",str);
		m_pBook.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		m_pBook.Edit();
		m_pBook.m_Bstore+=1;
		m_pBook.Update();
		m_pBook.Close();
		m_borrow.DeleteItem(chose);
		MessageBox("还书成功!","还书");
	}
}

void CReturnBook::OnQuery() 
{
	UpdateData(true);
	m_borrow.DeleteAllItems();
	if(m_no.IsEmpty())
	{
		MessageBox("没有输入关键字!","还书");
		return;
	}
	else
	{
		CString strSQL,strTemp="";
		strSQL.Format("select * from UserInfo where Uno='%s'",m_no);
		if(m_pReader.IsOpen())
			m_pReader.Close();
		m_pReader.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		if(m_pReader.GetRecordCount()==0)
		{
			MessageBox("没有此读者学号!请检查!","还书");
			return;
		}
		temp=m_pReader.m_Ujob;
		m_pReader.Close();
		CConfig * m_pConfig=new CConfig(&m_database);
		if(m_pConfig->IsOpen())
			m_pConfig->Close();
		strSQL.Format("select * from Config where Cname='%s'",temp);
		m_pConfig->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		p.data.Day=m_pConfig->m_Time;
		p.data.MaxNum=m_pConfig->m_MaxNum;
		p.data.Punish=m_pConfig->m_Punish;
		p.data.SameNum=m_pConfig->m_SameNum;
		m_pConfig->Close();
		if(m_pBorrow.IsOpen())
			m_pBorrow.Close();
		strSQL.Format("select * from Borrow where Uno='%s' and Tstatus!=2",m_no);
		m_pBorrow.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		if(m_pBorrow.GetRecordCount()==0)
		{
			MessageBox("没有借阅任何书籍!","还书");
			return;
		}
		m_pBorrow.MoveFirst();
		for(int i=0;;i++)
		{
			if(m_pBorrow.IsEOF())
				break;
			m_borrow.InsertItem(i,strTemp);
			strTemp.Format("%d",m_pBorrow.m_BorrId);
			m_borrow.SetItemText(i,0,strTemp);
			m_borrow.SetItemText(i,1,m_pBorrow.m_Uno);
			m_borrow.SetItemText(i,2,m_pBorrow.m_Uname);
			m_borrow.SetItemText(i,3,m_pBorrow.m_ISBN);
			m_borrow.SetItemText(i,4,m_pBorrow.m_Bname);
			strTemp.Format("%d",m_pBorrow.m_BorrNum);
			m_borrow.SetItemText(i,5,strTemp);
			m_borrow.SetItemText(i,6,m_pBorrow.m_BorrTime);
			m_borrow.SetItemText(i,7,m_pBorrow.m_ReturnTime);
			CString timetime;
			timetime.Format("%d-%d-%d",CTime::GetCurrentTime().GetYear(),CTime::GetCurrentTime().GetMonth(),CTime::GetCurrentTime().GetDay());
			CRestDay dayday;
			int day=dayday.GetDay(timetime,m_pBorrow.m_BorrTime);
			strTemp.Format("%d",day);

			m_borrow.SetItemText(i,8,strTemp);
			if(day>p.data.Day)
			{
				m_borrow.SetItemText(i,9,"超期");
			}
			else
			{
				m_borrow.SetItemText(i,9,"正常");
			}
			m_pBorrow.MoveNext();
		}
		m_pBorrow.Close();
	}
	UpdateData(false);
}
void CReturnBook::OnCancelMode() 
{
	CDialog::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}


void CReturnBook::OnPaint() 
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

void CReturnBook::OnCaptureChanged(CWnd *pWnd) 
{
	// TODO: Add your message handler code here
	
	CDialog::OnCaptureChanged(pWnd);
}
