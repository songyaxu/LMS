// CancelRenewal.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "CancelRenewal.h"
#include "Renewal.h"
#include "Reader.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCancelRenewal dialog


CCancelRenewal::CCancelRenewal(CWnd* pParent /*=NULL*/)
	: CDialog(CCancelRenewal::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCancelRenewal)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CCancelRenewal::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCancelRenewal)
	DDX_Control(pDX, IDC_LIST1, m_ctrList);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CCancelRenewal, CDialog)
	//{{AFX_MSG_MAP(CCancelRenewal)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_WM_PAINT()
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCancelRenewal message handlers

BOOL CCancelRenewal::OnInitDialog() 
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
	m_ctrList.InsertColumn(0,"学号");
	m_ctrList.InsertColumn(1,"姓名");
	m_ctrList.InsertColumn(2,"图书ISBN");
	m_ctrList.InsertColumn(3,"图书名称");
	m_ctrList.SetColumnWidth(0,90);
	m_ctrList.SetColumnWidth(1,90);
	m_ctrList.SetColumnWidth(2,120);
	m_ctrList.SetColumnWidth(3,120);
	DWORD dwStyle =m_ctrList.GetExtendedStyle();
	dwStyle |= LVS_EX_GRIDLINES; 
	dwStyle |=LVS_EX_FULLROWSELECT;
	m_ctrList.SetExtendedStyle(dwStyle);
	CRenewal *m_pRenewal=new CRenewal(&m_database);
	CString strSQL;
	strSQL.Format("select * from Renewal where Uno='%s'",((CLMSApp *)AfxGetApp())->m_UserNo);
	if(m_pRenewal->IsOpen())
		m_pRenewal->Close();
	m_pRenewal->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pRenewal->GetRecordCount()==0)
	{
		MessageBox("没有预约信息!","取消预约",MB_OK);
		CDialog::OnOK();
		return false;
	}
	else
	{
		m_ctrList.DeleteAllItems();
		m_pRenewal->MoveFirst();
		CString strTemp;
		for(int i=0;;i++)
		{
			if(m_pRenewal->IsEOF())
				break;
			m_ctrList.InsertItem(i,strTemp);
			m_ctrList.SetItemText(i,0,m_pRenewal->m_Uno);
			m_ctrList.SetItemText(i,1,m_pRenewal->m_Uname);
			m_ctrList.SetItemText(i,2,m_pRenewal->m_ISBN);
			m_ctrList.SetItemText(i,3,m_pRenewal->m_Bname);
			m_pRenewal->MoveNext();
		}
	}
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CCancelRenewal::OnButton1() 
{
	if(m_ctrList.GetItemState(0, LVIS_SELECTED) == LVIS_SELECTED)
	{}	
	else
	{
		MessageBox("没有选中任何记录!","取消预约");
		return;
	}
	CString str;
	m_userno=((CLMSApp *)AfxGetApp())->m_UserNo;
	CReader *m_pReader=new CReader(&m_database);
	if(m_pReader->IsOpen())
		m_pReader->Close();
	CString strSQL;
	strSQL.Format("select * from UserInfo where Uno='%s'",m_userno);
	m_pReader->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	m_pReader->Edit();
	m_pReader->m_Ustatus-=1;
	m_pReader->Update();
	/*CRenewal *m_pRenewal=new CRenewal(&m_database);
	if(m_pRenewal->IsOpen())
		m_pRenewal->Close();
	*/strSQL.Format("delete from Renewal where Uno='%s'",m_userno);
	//m_pRenewal->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	m_database.ExecuteSQL(strSQL);
	//m_pRenewal->Edit();
	//m_pRenewal->Delete();
	//m_pRenewal->Update();
	m_ctrList.DeleteItem(0);
	MessageBox("取消预约成功!","取消预约");

}

void CCancelRenewal::OnPaint() 
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

void CCancelRenewal::OnCancelMode() 
{
	CDialog::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}
