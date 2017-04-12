// PunishRecord.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "PunishRecord.h"
#include "Punish.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPunishRecord dialog


CPunishRecord::CPunishRecord(CWnd* pParent /*=NULL*/)
	: CDialog(CPunishRecord::IDD, pParent)
{
	//{{AFX_DATA_INIT(CPunishRecord)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CPunishRecord::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CPunishRecord)
	DDX_Control(pDX, IDC_LIST1, m_ctrList);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CPunishRecord, CDialog)
	//{{AFX_MSG_MAP(CPunishRecord)
	ON_WM_PAINT()
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPunishRecord message handlers

BOOL CPunishRecord::OnInitDialog() 
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
	m_ctrList.InsertColumn(4,"原因");
	m_ctrList.InsertColumn(5,"惩罚金额");
	m_ctrList.SetColumnWidth(0,90);
	m_ctrList.SetColumnWidth(1,90);
	m_ctrList.SetColumnWidth(2,120);
	m_ctrList.SetColumnWidth(3,120);
	m_ctrList.SetColumnWidth(4,130);
	m_ctrList.SetColumnWidth(5,60);
	DWORD dwStyle =m_ctrList.GetExtendedStyle();
	dwStyle |= LVS_EX_GRIDLINES; 
	dwStyle |=LVS_EX_FULLROWSELECT;
	m_ctrList.SetExtendedStyle(dwStyle);
	CPunish *m_pPunish=new CPunish(&m_database);
	CString strSQL;
	strSQL.Format("select * from Punish where Uno='%s'",((CLMSApp *)AfxGetApp())->m_UserNo);
	if(m_pPunish->IsOpen())
		m_pPunish->Close();
	m_pPunish->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pPunish->GetRecordCount()==0)
	{
		MessageBox("没有惩罚!","惩罚记录",MB_OK);
		CDialog::OnOK();
		return false;
	}
	else
	{
		m_ctrList.DeleteAllItems();
		m_pPunish->MoveFirst();
		CString strTemp;
		for(int i=0;;i++)
		{
			if(m_pPunish->IsEOF())
				break;
			m_ctrList.InsertItem(i,strTemp);
			m_ctrList.SetItemText(i,0,m_pPunish->m_Uno);
			m_ctrList.SetItemText(i,1,m_pPunish->m_Uname);
			m_ctrList.SetItemText(i,2,m_pPunish->m_ISBN);
			m_ctrList.SetItemText(i,3,m_pPunish->m_Bname);
			m_ctrList.SetItemText(i,4,m_pPunish->m_Reason);
			strTemp.Format("%lf",m_pPunish->m_Fee);
			m_ctrList.SetItemText(i,5,strTemp);
			m_pPunish->MoveNext();
		}
	}	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CPunishRecord::OnOK() 
{
	// TODO: Add extra validation here
	
	CDialog::OnOK();
}

void CPunishRecord::OnPaint() 
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

void CPunishRecord::OnCancelMode() 
{
	CDialog::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}
