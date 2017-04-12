// AdminManage.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "AdminManage.h"
#include "Admin.h"
#include "AddAdmin.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAdminManage dialog


CAdminManage::CAdminManage(CWnd* pParent /*=NULL*/)
	: CDialog(CAdminManage::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAdminManage)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CAdminManage::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAdminManage)
	DDX_Control(pDX, IDC_LIST1, m_ctrList);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CAdminManage, CDialog)
	//{{AFX_MSG_MAP(CAdminManage)
	ON_WM_CANCELMODE()
	ON_NOTIFY(NM_DBLCLK, IDC_LIST1, OnDblclkList1)
	ON_BN_CLICKED(IDC_ADDNEW, OnAddnew)
	ON_BN_CLICKED(IDC_DELETE, OnDelete)
	ON_WM_PAINT()
	ON_WM_CAPTURECHANGED()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAdminManage message handlers

BOOL CAdminManage::OnInitDialog() 
{
	CDialog::OnInitDialog();
	m_ctrList.InsertColumn(0,"用户名");
	m_ctrList.InsertColumn(1,"密码");
	m_ctrList.InsertColumn(2,"类型");
	m_ctrList.InsertColumn(3,"上次登录时间");
	m_ctrList.InsertColumn(4,"用户类型");
	m_ctrList.SetColumnWidth(0,120);
	m_ctrList.SetColumnWidth(1,100);
	m_ctrList.SetColumnWidth(2,40);
	m_ctrList.SetColumnWidth(3,118);
	m_ctrList.SetColumnWidth(4,119);
	DWORD dwStyle =m_ctrList.GetExtendedStyle();
	dwStyle |=LVS_EX_FULLROWSELECT;
	dwStyle |= LVS_EX_GRIDLINES;       
	m_ctrList.SetExtendedStyle(dwStyle);
	TRY
	{
		m_database.OpenEx(_T("DSN=图书管理系统;UID=syx;PWD=qwerty000"),CDatabase::noOdbcDialog);
		m_pAdmin.m_pDatabase=&m_database;
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
	CString strSQL="select * from Admin";
	if(m_pAdmin.IsOpen())
		m_pAdmin.Close();
	m_pAdmin.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pAdmin.GetRecordCount()==0)
	{
		MessageBox("没有管理员信息!","管理员管理");
		return false;
	}
	CString strTemp="";
	m_pAdmin.MoveFirst();
	for(int i=0;;i++)
	{
		if(m_pAdmin.IsEOF())
			break;
		m_ctrList.InsertItem(i,strTemp);
		m_ctrList.SetItemText(i,0,m_pAdmin.m_Aname);
		m_ctrList.SetItemText(i,1,m_pAdmin.m_Apwd);
		strTemp.Format("%d",m_pAdmin.m_Atype);
		m_ctrList.SetItemText(i,2,strTemp);
		m_ctrList.SetItemText(i,3,m_pAdmin.m_Alasttime);
		m_ctrList.SetItemText(i,4,m_pAdmin.m_Aremarks);
		m_pAdmin.MoveNext();
	}
	UpdateData(false);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CAdminManage::OnCancelMode() 
{
	CDialog::OnCancelMode();	
}

void CAdminManage::OnDblclkList1(NMHDR* pNMHDR, LRESULT* pResult) 
{
	*pResult = 0;
}

void CAdminManage::OnAddnew() 
{
	CAddAdmin dlg;
	dlg.DoModal();
}

void CAdminManage::OnDelete() 
{
	int count=0;
	bool Yn=false;
	for(int i=0; i<m_ctrList.GetItemCount(); i++)
	{
		if(m_ctrList.GetItemState(i, LVIS_SELECTED) == LVIS_SELECTED)
		{	  
			Yn=true;
			count=i;
		}
	}
	if(!Yn)
	{
		MessageBox("没有选中任何信息!","管理员管理");
		return;
	}
	else
	{
		m_ctrList.SetItemState(count, 0, LVIS_SELECTED|LVIS_FOCUSED);
		CString strSQL,str;
		str=m_ctrList.GetItemText(count,0);
		strSQL.Format("select * from Admin where Aname='%s'",str);
		if(m_pAdmin.IsOpen())
			m_pAdmin.Close();
		m_pAdmin.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		m_pAdmin.Delete();
		MessageBox("删除成功!","管理员管理");
		m_ctrList.DeleteItem(count);
	}
}

void CAdminManage::OnPaint() 
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
void CAdminManage::OnCaptureChanged(CWnd *pWnd) 
{
	// TODO: Add your message handler code here
	
	CDialog::OnCaptureChanged(pWnd);
}
