// BorrowRecord.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "BorrowRecord.h"
#include "Borrow.h"
#include "RestDay.h"
#include "Config.h"
#include "One.h"
#include "Reader.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBorrowRecord dialog


CBorrowRecord::CBorrowRecord(CWnd* pParent /*=NULL*/)
	: CDialog(CBorrowRecord::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBorrowRecord)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CBorrowRecord::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBorrowRecord)
	DDX_Control(pDX, IDC_LIST1, m_ctrList);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CBorrowRecord, CDialog)
	//{{AFX_MSG_MAP(CBorrowRecord)
	ON_WM_CANCELMODE()
	ON_WM_PAINT()
	ON_WM_CAPTURECHANGED()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBorrowRecord message handlers

BOOL CBorrowRecord::OnInitDialog() 
{
	CDialog::OnInitDialog();
	TRY
	{
		m_database.OpenEx(_T("DSN=图书管理系统;UID=syx;PWD=qwerty000"),CDatabase::noOdbcDialog);
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
	m_ctrList.InsertColumn(0,"学号");
	m_ctrList.InsertColumn(1,"姓名");
	m_ctrList.InsertColumn(2,"图书ISBN");
	m_ctrList.InsertColumn(3,"图书名称");
	m_ctrList.InsertColumn(4,"借书数量");
	m_ctrList.InsertColumn(5,"借书时间");
	m_ctrList.InsertColumn(6,"还书时间");
	m_ctrList.InsertColumn(7,"图书状态");
	m_ctrList.SetColumnWidth(0,90);
	m_ctrList.SetColumnWidth(1,90);
	m_ctrList.SetColumnWidth(2,120);
	m_ctrList.SetColumnWidth(3,120);
	m_ctrList.SetColumnWidth(4,60);
	m_ctrList.SetColumnWidth(5,120);
	m_ctrList.SetColumnWidth(6,120);
	m_ctrList.SetColumnWidth(7,60);
	DWORD dwStyle =m_ctrList.GetExtendedStyle();
	dwStyle |= LVS_EX_GRIDLINES;      
	m_ctrList.SetExtendedStyle(dwStyle);
	CString strSQL,temp;
	CReader * m_pReader=new CReader(&m_database);
	if(m_pReader->IsOpen())
		m_pReader->Close();
	strSQL.Format("select * from UserInfo where Uno='%s'",((CLMSApp *)AfxGetApp())->m_UserNo);
	m_pReader->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	temp=m_pReader->m_Ujob;
	m_pReader->Close();
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
	strSQL.Format("select * from Borrow where Uno='%s'",((CLMSApp *)AfxGetApp())->m_UserNo);
	m_pBorrow.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pBorrow.GetRecordCount()==0)
	{
		MessageBox("没有借阅信息!","借阅查询");
		CDialog::OnOK();
		return false;
	}
	else
	{
		m_ctrList.DeleteAllItems();
		m_pBorrow.MoveFirst();
		CString strTemp;
		for(int i=0;;i++)
		{
			if(m_pBorrow.IsEOF())
				break;
			m_ctrList.InsertItem(i,strTemp);
			m_ctrList.SetItemText(i,0,m_pBorrow.m_Uno);
			m_ctrList.SetItemText(i,1,m_pBorrow.m_Uname);
			m_ctrList.SetItemText(i,2,m_pBorrow.m_ISBN);
			m_ctrList.SetItemText(i,3,m_pBorrow.m_Bname);
			strTemp.Format(_T("%d"),m_pBorrow.m_BorrNum);
			m_ctrList.SetItemText(i,4,strTemp);
			m_ctrList.SetItemText(i,5,m_pBorrow.m_BorrTime);
			m_ctrList.SetItemText(i,6,m_pBorrow.m_ReturnTime);
			if(m_pBorrow.m_Tstatus==2)
				m_ctrList.SetItemText(i,7,"已还");
			else
			{
				CString timetime;
				timetime.Format("%d-%d-%d",CTime::GetCurrentTime().GetYear(),CTime::GetCurrentTime().GetMonth(),CTime::GetCurrentTime().GetDay());
				CRestDay dayday;
				int day=dayday.GetDay(timetime,m_pBorrow.m_BorrTime);
				if(day>p.data.Day)
					m_ctrList.SetItemText(i,7,"超期");
				else
					m_ctrList.SetItemText(i,7,"正常");
			}
			m_pBorrow.MoveNext();
		}
	}
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CBorrowRecord::OnCancelMode() 
{
	CDialog::OnCancelMode();
		
}

void CBorrowRecord::OnOK() 
{
	CDialog::OnOK();
}

void CBorrowRecord::OnPaint() 
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

void CBorrowRecord::OnCaptureChanged(CWnd *pWnd) 
{
	// TODO: Add your message handler code here
	
	CDialog::OnCaptureChanged(pWnd);
}
