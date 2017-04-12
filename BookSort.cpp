// BookSort.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "BookSort.h"
#include "OneBook.h"
#include "TwoBook.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBookSort dialog


CBookSort::CBookSort(CWnd* pParent /*=NULL*/)
	: CDialog(CBookSort::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBookSort)
	m_str = _T("");
	//}}AFX_DATA_INIT
}


void CBookSort::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBookSort)
	DDX_Control(pDX, IDC_TREE1, m_ctlTree);
	DDX_Text(pDX, IDC_EDIT1, m_str);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CBookSort, CDialog)
	//{{AFX_MSG_MAP(CBookSort)
	ON_WM_CANCELMODE()
	ON_NOTIFY(TVN_ENDLABELEDIT, IDC_TREE1, OnEndlabeleditTree1)
	ON_BN_CLICKED(IDC_EDIT, OnEdit)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_WM_PAINT()
	ON_WM_CAPTURECHANGED()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBookSort message handlers

BOOL CBookSort::OnInitDialog() 
{
	CDialog::OnInitDialog();
	m_imageList.Create(16, 16, ILC_COLOR, 2, 2);						
	CBitmap bm;
	bm.LoadBitmap(IDB_BITMAP1);									
	m_imageList.Add(&bm, RGB(0, 0, 0));							
	bm.DeleteObject();
	bm.LoadBitmap(IDB_BITMAP2);
	m_imageList.Add(&bm, RGB(0, 0, 0));
	m_ctlTree.SetImageList(&m_imageList,TVSIL_NORMAL); 
	HTREEITEM hroot=m_ctlTree.InsertItem("图书分类",1,0,TVI_ROOT);
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
	CTwoBook *m_pTwobook=new CTwoBook(&m_database);
	CString strSQL;
	strSQL.Format("select * from OneBook");
	if(m_pOnebook->IsOpen())
		m_pOnebook->Close();
	m_pOnebook->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pOnebook->GetRecordCount()==0)
	{
		MessageBox("没有一级分类信息!","分类管理");
		return false;
	}
	m_pOnebook->MoveFirst();
	for(int i=0;;i++)
	{
		if(m_pOnebook->IsEOF())
			break;
		HTREEITEM h=m_ctlTree.InsertItem(m_pOnebook->m_oneName,1,0,hroot);
		strSQL.Format("select * from TwoBook,OneBook where OneBook.oneNo=TwoBook.OneNo and OneBook.oneName='%s'",m_pOnebook->m_oneName);
		if(m_pTwobook->IsOpen())
			m_pTwobook->Close();
		m_pTwobook->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		m_pTwobook->MoveFirst();
		for(int j=0;;j++)
		{
			if(m_pTwobook->IsEOF())
				break;
			HTREEITEM h1=m_ctlTree.InsertItem(m_pTwobook->m_twoName,1,0,h);
			m_pTwobook->MoveNext();
		}
		m_pOnebook->MoveNext();
	}
	m_pOnebook->Close();
	m_pTwobook->Close();
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CBookSort::OnCancelMode() 
{
	CDialog::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}
void CBookSort::OnEndlabeleditTree1(NMHDR* pNMHDR, LRESULT* pResult) 
{
	TV_DISPINFO* pTVDispInfo = (TV_DISPINFO*)pNMHDR;
	COneBook *m_pOnebook=new COneBook(&m_database);
	CTwoBook *m_pTwobook=new CTwoBook(&m_database);
	UpdateData(true);
	CString strText,strSQL;
	HTREEITEM hItem1;
	hItem1= m_ctlTree.GetSelectedItem(); 
	str1=m_ctlTree.GetItemText(hItem1); 
	m_ctlTree.GetEditControl()->GetWindowText(strText.GetBuffer(200),200);
	m_ctlTree.SetItemText(m_ctlTree.GetSelectedItem(),strText);
	HTREEITEM hItem = m_ctlTree.GetSelectedItem();
	int nCount = 0;
	while(hItem)
	{
	  nCount ++;
	  hItem = m_ctlTree.GetParentItem(hItem);
	}
	if(nCount==2)
	{
		strSQL.Format("update OneBook set oneName='%s' where oneName='%s'",strText,str1);
		m_database.ExecuteSQL(strSQL);
	}
	if(nCount==3)
	{
		strSQL.Format("update TwoBook set twoName='%s' where twoname='%s'",strText,str1);
		m_database.ExecuteSQL(strSQL);
	}
	MessageBox("修改成功!","分类管理");
	*pResult = 0;
}

void CBookSort::OnEdit() 
{
	m_ctlTree.ModifyStyle(NULL,TVS_EDITLABELS);
	m_ctlTree.EditLabel(m_ctlTree.GetSelectedItem());
}

void CBookSort::OnButton1() 
{
	CString strSQL,str1;
	int sum=0,sum1=0;
	UpdateData(true);
	if(m_str.IsEmpty())
	{
		MessageBox("添加结点文本不能为空！","分类管理");
		return;
	}
	HTREEITEM hItem =m_ctlTree.GetSelectedItem();
	str1=m_ctlTree.GetItemText(hItem);
	COneBook *m_pOnebook=new COneBook(&m_database);
	if(m_pOnebook->IsOpen())
		m_pOnebook->Close();
	strSQL.Format("select * from OneBook");
	m_pOnebook->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pOnebook->GetRecordCount()==0)
	{
		MessageBox("没有一级分类信息!","分类管理");
		return;
	}
	else
	{
		m_pOnebook->MoveFirst();
		for(int i=0;;i++)
		{
			if(m_pOnebook->IsEOF())
				break;
			sum++;
			m_pOnebook->MoveNext();
		}
	}
	m_pOnebook->Close();
	int nCount = 0;
	while(hItem)
	{
	  nCount ++;
	  hItem = m_ctlTree.GetParentItem(hItem);
	}
	if(nCount==1)
	{
		strSQL.Format("insert into OneBook values(%d,'%s')",sum+1,m_str);
		HTREEITEM hNew=m_ctlTree.InsertItem(m_str,1,0,m_ctlTree.GetSelectedItem());
		m_database.ExecuteSQL(strSQL);
	}
	if(nCount==2)
	{
		if(m_pOnebook->IsOpen())
			m_pOnebook->Close();
		strSQL.Format("select * from OneBook where oneName='%s'",str1);
		m_pOnebook->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		if(m_pOnebook->GetRecordCount()==0)
		{
			MessageBox("出现未知错误!","分类管理");
			return;
		}
		CTwoBook *m_pTwobook=new CTwoBook(&m_database);
		if(m_pTwobook->IsOpen())
			m_pTwobook->Close();
		strSQL="select * from TwoBook";
		m_pTwobook->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		m_pTwobook->MoveFirst();
		for(int k=0;;k++)
		{
			if(m_pTwobook->IsEOF())
				break;
			sum1++;
			m_pTwobook->MoveNext();
		}
		m_pTwobook->Close();
		strSQL.Format("insert into TwoBook values(%d,'%s',%d)",sum1+1,m_str,m_pOnebook->m_oneNo);
		m_pOnebook->Close();
		m_database.ExecuteSQL(strSQL);
		HTREEITEM hNew=m_ctlTree.InsertItem(m_str,1,0,m_ctlTree.GetSelectedItem());
	}
	if(nCount>=3)
	{
		MessageBox("不允许添加子节点!","分类管理");
		return;
	}
	m_str="";
	MessageBox("添加成功!","分类管理");
	UpdateData(false);
	m_ctlTree.SetFocus();
}

void CBookSort::OnButton2() 
{
	COneBook *m_pOnebook=new COneBook(&m_database);
	CTwoBook *m_pTwobook=new CTwoBook(&m_database);
	CString strSQL,str1;
	UpdateData(true);
	HTREEITEM hItem =m_ctlTree.GetSelectedItem();
	str1=m_ctlTree.GetItemText(hItem);
	int nCount = 0;
	while(hItem)
	{
	  nCount ++;
	  hItem = m_ctlTree.GetParentItem(hItem);
	}
	if(nCount==1)
	{
		MessageBox("不可删除!","分类管理");
		return;
	}
	if(nCount==2)
	{
		if(m_pOnebook->IsOpen())
			m_pOnebook->Close();
		strSQL.Format("select * from OneBook where oneName='%s'",str1);
		m_pOnebook->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		if(m_pOnebook->GetRecordCount()==0)
		{
			MessageBox("出现未知错误!","分类管理");
			return;
		}
		m_pOnebook->Delete();
		m_ctlTree.DeleteItem(m_ctlTree.GetSelectedItem());
	}
	if(nCount>=3)
	{
		if(m_pTwobook->IsOpen())
			m_pTwobook->Close();
		strSQL.Format("select * from TwoBook where twoName='%s'",str1);
		m_pTwobook->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		m_pTwobook->Delete();
		m_ctlTree.DeleteItem(m_ctlTree.GetSelectedItem());
	}
	MessageBox("删除成功!","分类管理");
	UpdateData(false);
	m_ctlTree.SetFocus();
}

void CBookSort::OnPaint() 
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

void CBookSort::OnCaptureChanged(CWnd *pWnd) 
{
	// TODO: Add your message handler code here
	
	CDialog::OnCaptureChanged(pWnd);
}
