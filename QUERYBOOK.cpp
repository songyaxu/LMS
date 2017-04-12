// QUERYBOOK.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "QUERYBOOK.h"
#include "OneBook.h"
#include "TwoBook.h"
#include "Book.h"
#include "Reader.h"
#include "Renewal.h" 
#include "Config.h"
#include "BookLook.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CQUERYBOOK dialog


CQUERYBOOK::CQUERYBOOK(CWnd* pParent /*=NULL*/)
	: CDialog(CQUERYBOOK::IDD, pParent)
{
	//{{AFX_DATA_INIT(CQUERYBOOK)
	m_reason = _T("");
	//}}AFX_DATA_INIT
}


void CQUERYBOOK::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CQUERYBOOK)
	DDX_Control(pDX, IDC_LIST1, m_ctrList);
	DDX_Control(pDX, IDC_COMBO3, m_item);
	DDX_Control(pDX, IDC_COMBO2, m_two);
	DDX_Control(pDX, IDC_COMBO1, m_one);
	DDX_Text(pDX, IDC_EDIT2, m_reason);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CQUERYBOOK, CDialog)
	//{{AFX_MSG_MAP(CQUERYBOOK)
	ON_CBN_DROPDOWN(IDC_COMBO2, OnDropdownCombo2)
	ON_CBN_DROPDOWN(IDC_COMBO1, OnDropdownCombo1)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_RENEWAL, OnRenewal)
	ON_NOTIFY(NM_DBLCLK, IDC_LIST1, OnDblclkList1)
	ON_WM_PAINT()
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CQUERYBOOK message handlers

BOOL CQUERYBOOK::OnInitDialog() 
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
	COneBook *m_pOnebook=new COneBook(&m_database);
	CString strSQL="select * from OneBook";
	if(m_pOnebook->IsOpen())
		m_pOnebook->Close();
	m_pOnebook->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pOnebook->GetRecordCount()==0)
	{
		MessageBox("数据库错误！","添加图书",MB_OK);
	}
	else
	{
		m_pOnebook->MoveFirst();
		for(int i=0;;i++)
		{
			if(m_pOnebook->IsEOF())
				break;
			m_one.InsertString(i,m_pOnebook->m_oneName);
			m_pOnebook->MoveNext();
		}
	}
	m_one.SetCurSel(5);
	m_item.InsertString(0,"名称");
	m_item.InsertString(1,"出版社");
	m_item.InsertString(2,"主编");
	m_item.InsertString(3,"简介");
	m_item.InsertString(4,"位置");
	m_item.InsertString(5,"ISBN");
	m_item.SetCurSel(0);
	m_ctrList.InsertColumn(0,"ISBN/ISSN");
	m_ctrList.InsertColumn(1,"名称");
	m_ctrList.InsertColumn(2,"出版社");
	m_ctrList.InsertColumn(3,"主编");
	m_ctrList.InsertColumn(4,"简介");
	m_ctrList.InsertColumn(5,"价格");
	m_ctrList.InsertColumn(6,"位置");
	m_ctrList.InsertColumn(7,"数量");
	m_ctrList.InsertColumn(8,"库存");
	m_ctrList.InsertColumn(9,"一级分类");
	m_ctrList.InsertColumn(10,"二级分类");
	m_ctrList.InsertColumn(11,"备注");
	m_ctrList.InsertColumn(12,"版次");
	m_ctrList.InsertColumn(13,"印刷时间");	
	m_ctrList.SetColumnWidth(0,90);
	m_ctrList.SetColumnWidth(1,120);
	m_ctrList.SetColumnWidth(2,120);
	m_ctrList.SetColumnWidth(3,120);
	m_ctrList.SetColumnWidth(4,100);
	m_ctrList.SetColumnWidth(5,60);
	m_ctrList.SetColumnWidth(6,100);
	m_ctrList.SetColumnWidth(7,60);
	m_ctrList.SetColumnWidth(8,60);
	m_ctrList.SetColumnWidth(9,120);
	m_ctrList.SetColumnWidth(10,120);
	m_ctrList.SetColumnWidth(11,180);
	m_ctrList.SetColumnWidth(12,80);
	m_ctrList.SetColumnWidth(13,80);
	m_two.InsertString(0,"全部");
	m_two.SetCurSel(0);
	//m_ctrList.SetExtendedStyle(LVS_EX_FULLROWSELECT|LVS_EX_CHECKBOXES|LVS_EX_INFOTIP|LVS_EX_GRIDLINES);
	DWORD dwStyle =m_ctrList.GetExtendedStyle();
	dwStyle |=LVS_EX_FULLROWSELECT;
	dwStyle |= LVS_EX_GRIDLINES;      
	m_ctrList.SetExtendedStyle(dwStyle);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CQUERYBOOK::OnDropdownCombo2() 
{
	CTwoBook *m_pTwobook=new CTwoBook(&m_database);
	COneBook *m_pOnebook=new COneBook(&m_database);
	if(m_one.GetCurSel()==-1)
		MessageBox("没有选择一级分类！","添加图书",MB_OK);
	else
	{
		m_two.ResetContent();
		CString str;
		int nIndex=m_one.GetCurSel();
		m_one.GetLBText(nIndex,str);
		CString strSQL;
		strSQL.Format("select * from OneBook where oneName='%s'",str);
		if(m_pOnebook->IsOpen())
			m_pOnebook->Close();
		m_pOnebook->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		if(m_pTwobook->IsOpen())
			m_pTwobook->Close();
		strSQL.Format("select * from TwoBook,OneBook where OneBook.oneNo=%d and TwoBook.oneNo=OneBook.oneNo",m_pOnebook->m_oneNo);
		m_pTwobook->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		if(m_pTwobook->GetRecordCount()==0)
			return;
		else
		{
			m_pTwobook->MoveFirst();
			for(int i=0;;i++)
			{

				if(m_pTwobook->IsEOF())
					break;
				if(i==0)
					m_two.InsertString(0,"全部");
				else
				{
					m_two.InsertString(i,m_pTwobook->m_twoName);
					m_pTwobook->MoveNext();
				}
			}
		}
	}
}

void CQUERYBOOK::OnDropdownCombo1() 
{
	m_two.SetCurSel(0);
}

void CQUERYBOOK::OnButton1() 
{
	COneBook *m_pOnebook=new COneBook(&m_database);
	CTwoBook *m_pTwobook=new CTwoBook(&m_database);
	m_ctrList.DeleteAllItems();
	UpdateData(true);
	if(m_reason.IsEmpty()&&m_item.GetCurSel()!=-1&&m_one.GetCurSel()!=-1&&m_two.GetCurSel()!=-1)
	{
		MessageBox("查询条件!","图书查询");
		return;
	}
	else
	{
		if(m_two.GetCurSel()==0)
		{
			m_ctrList.DeleteAllItems();
			CString strSQL,str,str1="%";
			m_one.GetLBText(m_one.GetCurSel(),str);
			CBook *m_pBook=new CBook(&m_database);
			if(m_pBook->IsOpen())
				m_pBook->Close();
			strSQL.Format("select * from Book,TwoBook,OneBook where OneBook.OneName='%s' and OneBook.oneNo=TwoBook.oneNo and Book.twoNo=TWOBook.twoNo and %s like '%s%s%s'",str,Adjust(m_item.GetCurSel()),str1,m_reason,str1);
			m_pBook->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
			if(m_pBook->GetRecordCount()==0)
			{
				MessageBox("没有任何图书!","图书查询");
				return;
			}
			m_ctrList.DeleteAllItems();
			m_pBook->MoveFirst();
			CString strTemp;
			for(int i=0;;i++)
			{
				if(m_pBook->IsEOF())
					break;
				m_ctrList.InsertItem(i,strTemp);
				m_ctrList.SetItemText(i,0,m_pBook->m_ISBN);
				m_ctrList.SetItemText(i,1,m_pBook->m_Bname);
				m_ctrList.SetItemText(i,2,m_pBook->m_Bpublish);
				m_ctrList.SetItemText(i,3,m_pBook->m_Beditor);
				m_ctrList.SetItemText(i,4,m_pBook->m_Bcontents);
				strTemp.Format(_T("%.2f"),m_pBook->m_Bprice);
				m_ctrList.SetItemText(i,5,strTemp);
				m_ctrList.SetItemText(i,6,m_pBook->m_Bplace);
				strTemp.Format("%d",m_pBook->m_Bnum);
				m_ctrList.SetItemText(i,7,strTemp);
				strTemp.Format("%d",m_pBook->m_Bstore);
				m_ctrList.SetItemText(i,8,strTemp);
				if(m_pOnebook->IsOpen())
					m_pOnebook->Close();
				strSQL.Format("select * from OneBook,TwoBook where TwoBook.oneNo=OneBook.oneNo and TwoBook.twoNo=%d",m_pBook->m_twoNo);
				m_pOnebook->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
				m_ctrList.SetItemText(i,9,m_pOnebook->m_oneName);
				m_pOnebook->Close();
				if(m_pTwobook->IsOpen())
					m_pTwobook->Close();
				strSQL.Format("select * from TwoBook where twoNo=%d",m_pBook->m_twoNo);
				m_pTwobook->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
				m_ctrList.SetItemText(i,10,m_pTwobook->m_twoName);
				m_pTwobook->Close();
				m_ctrList.SetItemText(i,11,m_pBook->m_Bremarks);
				m_ctrList.SetItemText(i,12,m_pBook->m_BpublishTime);
				m_ctrList.SetItemText(i,13,m_pBook->m_BprintTime);
				m_pBook->MoveNext();
			}
		}
		else
		{
			CString strSQL,str,str2="%";
			CTwoBook *m_pTwobook=new CTwoBook(&m_database);
			m_one.GetLBText(m_one.GetCurSel(),str);
			if(m_pTwobook->IsOpen())
				m_pTwobook->Close();
			strSQL.Format("select * from TwoBook where twoName='%s'",str);
			m_pTwobook->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
			CBook *m_pBook=new CBook(&m_database);
			if(m_pBook->IsOpen())
				m_pBook->Close();
			strSQL.Format("select * from Book where twoNo=%d and %s like '%s%s%s'",m_pTwobook->m_oneNo,Adjust(m_item.GetCurSel()),str2,m_reason,str2);
			m_pBook->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
			if(m_pBook->GetRecordCount()==0)
			{
				MessageBox("没有任何图书!","图书查询");
				return;
			}
			else
			{
				m_ctrList.DeleteAllItems();
				m_pBook->MoveFirst();
				CString strTemp;
				for(int i=0;;i++)
				{
					if(m_pBook->IsEOF())
						break;
					m_ctrList.InsertItem(i,strTemp);
					strTemp.Format("%d",i+1);
					m_ctrList.SetItemText(i,0,strTemp);
					m_ctrList.SetItemText(i,1,m_pBook->m_ISBN);
					m_ctrList.SetItemText(i,2,m_pBook->m_Bname);
					m_ctrList.SetItemText(i,3,m_pBook->m_Bpublish);
					m_ctrList.SetItemText(i,4,m_pBook->m_Beditor);
					m_ctrList.SetItemText(i,5,m_pBook->m_Bcontents);
					strTemp.Format(_T("%lf"),m_pBook->m_Bprice);
					m_ctrList.SetItemText(i,6,strTemp);
					m_ctrList.SetItemText(i,7,m_pBook->m_Bplace);
					strTemp.Format("%d",m_pBook->m_Bnum);
					m_ctrList.SetItemText(i,8,strTemp);
					strTemp.Format("%d",m_pBook->m_Bstore);
					m_ctrList.SetItemText(i,9,strTemp);
					strTemp.Format("%d",m_pBook->m_twoNo);
					m_ctrList.SetItemText(i,11,strTemp);
					m_ctrList.SetItemText(i,12,m_pBook->m_Bremarks);
					m_ctrList.SetItemText(i,13,m_pBook->m_BpublishTime);
					m_ctrList.SetItemText(i,14,m_pBook->m_BprintTime);
					m_pBook->MoveNext();
				}
			}
		}
	}
}

CString CQUERYBOOK::Adjust(int x)
{
	if(x==0)
		return "Bname";
	if(x==1)
		return "Bpublish";
	if(x==2)
		return "Beditor";
	if(x==3)
		return "Bcontents";
	if(x==4)
		return "Bplace";
	if(x==5)
		return "ISBN"; 
	return "";
}

void CQUERYBOOK::OnRenewal() 
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
		MessageBox("没有选中任何信息!","图书预约");
		return;
	}
	else
	{
		m_ctrList.SetItemState(count, 0, LVIS_SELECTED|LVIS_FOCUSED);
		CString str;
		m_userno=((CLMSApp *)AfxGetApp())->m_UserNo;
		CReader *m_pReader=new CReader(&m_database);
		if(m_pReader->IsOpen())
			m_pReader->Close();
		CString strSQL;
		str=m_ctrList.GetItemText(count,0);
		strSQL.Format("select * from UserInfo where Uno='%s'",m_userno);
		m_pReader->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		if(m_pReader->m_Ustatus%10>1)
		{
			MessageBox("你已经有了预约!不可以在预约了!","图书预约");
			return;
		}
		CRenewal *m_pRenewal=new CRenewal(&m_database);
		strSQL.Format("select * from Renewal");
		m_pRenewal->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		m_pRenewal->AddNew();
		m_pRenewal->m_Uno=m_pReader->m_Uno;
		m_pRenewal->m_Uname=m_pReader->m_Uname;
		m_pRenewal->m_ISBN=m_ctrList.GetItemText(count,0);
		m_pRenewal->m_Bname=m_ctrList.GetItemText(count,1);
		m_pReader->Edit();
		m_pReader->m_Ustatus+=1;
		m_pReader->Update();
		m_pRenewal->Update();
	}
	MessageBox("预约成功!","预约图书");
}

void CQUERYBOOK::OnDblclkList1(NMHDR* pNMHDR, LRESULT* pResult) 
{
	NM_LISTVIEW* pNMListView = (NM_LISTVIEW*)pNMHDR;
	if(pNMListView->iItem != -1)
	{
		((CLMSApp *)AfxGetApp())->m_ISBN=m_ctrList.GetItemText(pNMListView->iItem,0);
		CBookLook dlg;
		dlg.DoModal();
	}
	*pResult = 0;
}

void CQUERYBOOK::OnPaint() 
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

void CQUERYBOOK::OnCancelMode() 
{
	CDialog::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}
