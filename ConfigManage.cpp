// ConfigManage.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "ConfigManage.h"
#include "Config.h" 

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CConfigManage dialog


CConfigManage::CConfigManage(CWnd* pParent /*=NULL*/)
	: CDialog(CConfigManage::IDD, pParent)
{
	//{{AFX_DATA_INIT(CConfigManage)
	m_name = _T("");
	m_maxnum = 0;
	m_samenum = 0;
	m_fee = 0;
	m_time = 0;
	//}}AFX_DATA_INIT
}


void CConfigManage::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CConfigManage)
	DDX_Control(pDX, IDC_LIST1, m_ctrList);
	DDX_Text(pDX, IDC_EDIT1, m_name);
	DDX_Text(pDX, IDC_EDIT2, m_maxnum);
	DDV_MinMaxInt(pDX, m_maxnum, 1, 100);
	DDX_Text(pDX, IDC_EDIT4, m_samenum);
	DDV_MinMaxInt(pDX, m_samenum, 1, 100);
	DDX_Text(pDX, IDC_EDIT6, m_fee);
	DDV_MinMaxInt(pDX, m_fee, 1, 100);
	DDX_Text(pDX, IDC_EDIT3, m_time);
	DDV_MinMaxInt(pDX, m_time, 1, 100);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CConfigManage, CDialog)
	//{{AFX_MSG_MAP(CConfigManage)
	ON_WM_CANCELMODE()
	ON_NOTIFY(NM_CLICK, IDC_LIST1, OnClickList1)
	ON_BN_CLICKED(IDC_MODIFY, OnModify)
	ON_WM_PAINT()
	ON_WM_CAPTURECHANGED()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CConfigManage message handlers

BOOL CConfigManage::OnInitDialog() 
{
	CDialog::OnInitDialog();
	m_ctrList.InsertColumn(0,"配置对象");
	m_ctrList.InsertColumn(1,"最大借书量");
	m_ctrList.InsertColumn(2,"借书时间");
	m_ctrList.InsertColumn(3,"罚分");
	m_ctrList.InsertColumn(4,"借阅最大相同书量");
	m_ctrList.SetColumnWidth(0,120);
	m_ctrList.SetColumnWidth(1,100);
	m_ctrList.SetColumnWidth(2,120);
	m_ctrList.SetColumnWidth(3,120);
	m_ctrList.SetColumnWidth(4,128);
	DWORD dwStyle =m_ctrList.GetExtendedStyle();
	dwStyle |=LVS_EX_FULLROWSELECT;
	dwStyle |= LVS_EX_GRIDLINES;       
	m_ctrList.SetExtendedStyle(dwStyle);
	TRY
	{
		m_database.OpenEx(_T("DSN=图书管理系统;UID=syx;PWD=qwerty000"),CDatabase::noOdbcDialog);
		m_pConfig.m_pDatabase=&m_database;
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
	CString strSQL="select * from Config";
	if(m_pConfig.IsOpen())
		m_pConfig.Close();
	m_pConfig.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pConfig.GetRecordCount()==0)
	{
		MessageBox("没有配置信息!请添加，否则借书等过程中会出现问题!","借阅管理");
		return false;
	}
	CString strTemp="";
	m_pConfig.MoveFirst();
	for(int i=0;;i++)
	{
		if(m_pConfig.IsEOF())
			break;
		m_ctrList.InsertItem(i,strTemp);
		m_ctrList.SetItemText(i,0,m_pConfig.m_Cname);
		strTemp.Format("%d",m_pConfig.m_MaxNum);
		m_ctrList.SetItemText(i,1,strTemp);
		strTemp.Format("%d",m_pConfig.m_Time);
		m_ctrList.SetItemText(i,2,strTemp);
		strTemp.Format("%d",m_pConfig.m_Punish);
		m_ctrList.SetItemText(i,3,strTemp);
		strTemp.Format("%d",m_pConfig.m_SameNum);
		m_ctrList.SetItemText(i,4,strTemp);
		m_pConfig.MoveNext();
	}
	UpdateData(false);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CConfigManage::OnCancelMode() 
{
	CDialog::OnCancelMode();	
}

void CConfigManage::OnClickList1(NMHDR* pNMHDR, LRESULT* pResult) 
{
	CString str;
	NM_LISTVIEW* pNMListView = (NM_LISTVIEW*)pNMHDR;
	if(pNMListView->iItem==-1)
	{
		return;
	}	
	str=m_ctrList.GetItemText(pNMListView->iItem,0);
	m_name=str;
	str=m_ctrList.GetItemText(pNMListView->iItem,1);
	m_maxnum=atoi(str);
	str=m_ctrList.GetItemText(pNMListView->iItem,2);
	m_time=atoi(str);
	str=m_ctrList.GetItemText(pNMListView->iItem,3);
	m_fee=atoi(str);
	str=m_ctrList.GetItemText(pNMListView->iItem,4);
	m_samenum=atoi(str);
	UpdateData(false);
	*pResult = 0;
}

void CConfigManage::OnModify() 
{
	if(MessageBox("确定修改配置信息?","借阅管理",MB_OKCANCEL)==2)
	{
		return;
	}
	UpdateData(true);
	if(m_name.IsEmpty())
	{
		MessageBox("请填写配置对象名!","借阅管理");
		return;
	}
	if(m_maxnum==0)
	{
		MessageBox("请填写最大借书量!","借阅管理");
		return;
	}
	if(m_fee==0)
	{
		MessageBox("请填写惩罚金额!","借阅管理");
		return;
	}
	if(m_samenum==0)
	{
		MessageBox("请填写相同图书借书量!","借阅管理");
	}
	if(m_pConfig.IsOpen())
		m_pConfig.Close();
	CString strSQL;
	strSQL.Format("select * from Config where Cname='%s'",m_name);
	m_pConfig.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pConfig.GetRecordCount()==0)
	{
		MessageBox("加载出现问题!","借阅管理");
		return;
	}
	m_pConfig.Edit();
	m_pConfig.m_Cname=m_name;
	m_pConfig.m_Punish=m_fee;
	m_pConfig.m_MaxNum=m_maxnum;
	m_pConfig.m_Time=m_time;
	m_pConfig.m_SameNum=m_samenum;
	m_pConfig.Update();
	MessageBox("修改配置借阅成功!","借阅管理");
}

void CConfigManage::OnPaint() 
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

void CConfigManage::OnCaptureChanged(CWnd *pWnd) 
{
	// TODO: Add your message handler code here
	
	CDialog::OnCaptureChanged(pWnd);
}
