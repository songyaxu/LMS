// DeptManage.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "DeptManage.h"
#include "Dept.h"
#include "Class.h"
#include "Major.h"
#include "ClassModify.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDeptManage dialog


CDeptManage::CDeptManage(CWnd* pParent /*=NULL*/)
	: CDialog(CDeptManage::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDeptManage)
	m_data = _T("");
	//}}AFX_DATA_INIT
}


void CDeptManage::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDeptManage)
	DDX_Control(pDX, IDC_LIST1, m_ctrList);
	DDX_Control(pDX, IDC_TREE1, m_ctlTree);
	DDX_Text(pDX, IDC_EDIT1, m_data);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDeptManage, CDialog)
	//{{AFX_MSG_MAP(CDeptManage)
	ON_WM_CANCELMODE()
	ON_WM_PAINT()
	ON_NOTIFY(TVN_ENDLABELEDIT, IDC_TREE1, OnEndlabeleditTree1)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_NOTIFY(NM_RCLICK, IDC_TREE1, OnRclickTree1)
	ON_BN_CLICKED(IDC_ADD, OnAdd)
	ON_BN_CLICKED(IDC_DELETE, OnDelete)
	ON_BN_CLICKED(IDC_BUTTON2, OnEditClass)
	ON_BN_CLICKED(IDC_BUTTON3, OnAddNewClass)
	ON_BN_CLICKED(IDC_BUTTON4, OnDeleteClass)
	ON_NOTIFY(LVN_GETDISPINFO, IDC_LIST1, OnGetdispinfoList1)
	ON_NOTIFY(LVN_BEGINLABELEDIT, IDC_LIST1, OnBeginlabeleditList1)
	ON_WM_CAPTURECHANGED()
	ON_WM_CHAR()
	ON_WM_CHARTOITEM()
	ON_WM_CLOSE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDeptManage message handlers

BOOL CDeptManage::OnInitDialog() 
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
	HTREEITEM hroot=m_ctlTree.InsertItem("系/学院",1,0,TVI_ROOT);
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
	CDept *m_pDept=new CDept(&m_database);
	CMajor *m_pMajor=new CMajor(&m_database);
	CString strSQL="select * from Dept";
	if(m_pDept->IsOpen())
		m_pDept->Close();
	m_pDept->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pDept->GetRecordCount()==0)
	{
		MessageBox("没有配置信息!","学院管理");
		return false;
	}
	CString strTemp="";
	m_pDept->MoveFirst();
	for(int i=0;;i++)
	{
		if(m_pDept->IsEOF())
			break;
		HTREEITEM h=m_ctlTree.InsertItem(m_pDept->m_DeptName,1,0,hroot);
		strSQL.Format("select * from Major,Dept where Dept.DeptNo=Major.DeptNo and Dept.DeptName='%s'",m_pDept->m_DeptName);
		if(m_pMajor->IsOpen())
			m_pMajor->Close();
		m_pMajor->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		m_pMajor->MoveFirst();
		for(int j=0;;j++)
		{
			if(m_pMajor->IsEOF())
				break;
			HTREEITEM h1=m_ctlTree.InsertItem(m_pMajor->m_MajorName,1,0,h);
			m_pMajor->MoveNext();
		}
		m_pDept->MoveNext();
	}
	m_pDept->Close();
	m_pMajor->Close();
	m_ctlTree.SetBkColor(RGB(250,250,250));
	m_ctlTree.SetTextColor(RGB(127,0,0));
	m_ctrList.InsertColumn(0,"班级编号");
	m_ctrList.InsertColumn(1,"班级名称");
	m_ctrList.SetColumnWidth(0,190);
	m_ctrList.SetColumnWidth(1,200);
	DWORD dwStyle =m_ctrList.GetExtendedStyle();
	dwStyle|=LVS_EX_FULLROWSELECT;
	dwStyle|=LVS_EX_GRIDLINES;
	dwStyle|=LVS_EDITLABELS;
	m_ctrList.SetExtendedStyle(dwStyle);
	UpdateData(false);  
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CDeptManage::OnCancelMode() 
{
	CDialog::OnCancelMode();	
}

void CDeptManage::OnPaint() 
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
void CDeptManage::OnEndlabeleditTree1(NMHDR* pNMHDR, LRESULT* pResult) 
{
	CDept *m_pDept1=new CDept(&m_database);
	CMajor *m_pMajor1=new CMajor(&m_database);
	UpdateData(true);
	TV_DISPINFO* pTVDispInfo = (TV_DISPINFO*)pNMHDR;
	CString strText,strSQL;
	HTREEITEM hItem1;
	hItem1= m_ctlTree.GetSelectedItem(); 
	str1=m_ctlTree.GetItemText(hItem1); 
	m_ctlTree.GetEditControl()->GetWindowText(strText.GetBuffer(200),200);
	HTREEITEM hItem = m_ctlTree.GetSelectedItem();
	int nCount = 0;
	while(hItem)
	{
	  nCount ++;
	  hItem = m_ctlTree.GetParentItem(hItem);
	}
	if(nCount==1)
	{
		MessageBox("不可修改!","学院管理");
		return;
	}
	if(nCount==2)
	{
		strSQL.Format("update Dept set DeptName='%s' where DeptName='%s'",strText,str1);
		m_database.ExecuteSQL(strSQL);
	}
	if(nCount==3)
	{
		strSQL.Format("update Major set MajorName='%s' where MajorName='%s'",strText,str1);
		m_database.ExecuteSQL(strSQL);
	}
	m_ctlTree.SetItemText(m_ctlTree.GetSelectedItem(),strText);
	MessageBox("修改成功!","学院管理");
	*pResult = 0;
}

void CDeptManage::OnButton1() 
{
	UpdateData(true);
	if(m_data.IsEmpty())
	{
		MessageBox("添加结点文本不能为空!","学院管理");
		return;
	}
	CString strSQL,str1;
	int sum=0,sum1=0;
	UpdateData(true);
	if(m_data.IsEmpty())
	{
		MessageBox("添加结点文本不能为空！","分类管理");
		return;
	}
	HTREEITEM hItem =m_ctlTree.GetSelectedItem();
	str1=m_ctlTree.GetItemText(hItem);
	CDept *m_pDept=new CDept(&m_database);
	if(m_pDept->IsOpen())
		m_pDept->Close();
	strSQL.Format("select * from Dept");
	m_pDept->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pDept->GetRecordCount()==0)
	{
		MessageBox("没有学院信息!","学院管理");
		return;
	}
	else
	{
		m_pDept->MoveFirst();
		for(int i=0;;i++)
		{
			if(m_pDept->IsEOF())
				break;
			sum++;
			m_pDept->MoveNext();
		}
	}
	m_pDept->Close();
	int nCount = 0;
	while(hItem)
	{
	  nCount ++;
	  hItem = m_ctlTree.GetParentItem(hItem);
	}
	if(nCount==1)
	{
		strSQL.Format("insert into Dept values('N%d','%s')",sum+1,m_data);
		m_database.ExecuteSQL(strSQL);
	}
	if(nCount==2)
	{
		if(m_pDept->IsOpen())
			m_pDept->Close();
		strSQL.Format("select * from Dept where DeptName='%s'",str1);
		m_pDept->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		if(m_pDept->GetRecordCount()==0)
		{
			MessageBox("出现未知错误!","学院管理");
			return;
		}
		CMajor *m_pMajor=new CMajor(&m_database);
		if(m_pMajor->IsOpen())
			m_pMajor->Close();
		strSQL="select * from Major";
		m_pMajor->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		m_pMajor->MoveFirst();
		for(int k=0;;k++)
		{
			if(m_pMajor->IsEOF())
				break;
			sum1++;
			m_pMajor->MoveNext();
		}
		m_pMajor->Close();
		strSQL.Format("insert into Major values('AB%d','%s','%s')",sum1+1,m_data,m_pDept->m_DeptNo);
		m_pDept->Close();
		m_database.ExecuteSQL(strSQL);
	}
	if(nCount>=3)
	{
		MessageBox("不允许添加子节点!","学院管理");
		return;
	}
	HTREEITEM hNew=m_ctlTree.InsertItem(m_data,1,0,m_ctlTree.GetSelectedItem());
	m_data="";
	UpdateData(false);
	MessageBox("添加成功!","学院管理");
	m_ctlTree.SetFocus();  
}


void CDeptManage::OnRclickTree1(NMHDR* pNMHDR, LRESULT* pResult) 
{	
	CClass *m_pClass=new CClass(&m_database);
	HTREEITEM hItem1;
	CString str,strSQL;
	hItem1= m_ctlTree.GetSelectedItem(); 
	str=m_ctlTree.GetItemText(hItem1);
	HTREEITEM hItem = m_ctlTree.GetSelectedItem();
	int nCount = 0;
	while(hItem)
	{
	  nCount ++;
	  hItem = m_ctlTree.GetParentItem(hItem);
	}
	if(nCount==3)
	{
		m_ctrList.DeleteAllItems();
		CString strTemp="";
		if(m_pClass->IsOpen())
			m_pClass->Close();
		strSQL.Format("select * from Class,Major where Major.MajorNo=Class.MajorNo and Major.MajorName='%s'",str);
		m_pClass->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		m_pClass->MoveFirst();
		for(int i=0;;i++)
		{
			if(m_pClass->IsEOF())
				break;
			m_ctrList.InsertItem(i,strTemp);
			m_ctrList.SetItemText(i,0,m_pClass->m_ClassNo);
			m_ctrList.SetItemText(i,1,m_pClass->m_ClassName);
			m_pClass->MoveNext();
		}
		UpdateData(false);
		m_pClass->Close();
	}
	*pResult = 0;
}

void CDeptManage::OnAdd() 
{
	m_ctlTree.ModifyStyle(NULL,TVS_EDITLABELS);
	m_ctlTree.EditLabel(m_ctlTree.GetSelectedItem());
}

void CDeptManage::OnDelete() 
{
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
		MessageBox("不可删除!","学院管理");
		return;
	}
	if(nCount==2)
	{
		strSQL.Format("delete Dept where DeptName='%s'",str1);
		m_database.ExecuteSQL(strSQL);
		m_ctlTree.DeleteItem(m_ctlTree.GetSelectedItem());
	}
	if(nCount>=3)
	{
		strSQL.Format("delete Major where MajorName='%s'",str1);
		m_database.ExecuteSQL(strSQL);
		m_ctlTree.DeleteItem(m_ctlTree.GetSelectedItem());
	}
	MessageBox("删除成功!","学院管理");
	UpdateData(false);
	m_ctlTree.SetFocus();
}

void CDeptManage::OnEditClass() 
{
	CClass *m_pClass=new CClass(&m_database);
	UpdateData(true);
	int i,count=0;
	int chose;
	int nHeadNum = m_ctrList.GetItemCount();
	for(i=0;i<nHeadNum;i++)
	{
		if(m_ctrList.GetItemState(i, LVIS_SELECTED) == LVIS_SELECTED)
		{
			count++;
			chose=i;
			break;
		}
	}
	if(count==0)
	{
		MessageBox("没有选中任何记录!","修改班级");
		return;
	}
	else
	{
		CString str1;
		HTREEITEM hItem =m_ctlTree.GetSelectedItem();
		str1=m_ctlTree.GetItemText(hItem);
		CString str,strSQL;
		str=m_ctrList.GetItemText(chose,0);
		CClassModify dlg;
		if(dlg.DoModal()==IDOK)
		{
			CString strTemp="";
			if(m_pClass->IsOpen())
				m_pClass->Close();
			strSQL.Format("select * from Class,Major where Major.MajorNo=Class.MajorNo and Major.MajorName='%s' and ClassNo='%s'",str1,str);
			m_pClass->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
			if(m_pClass->GetRecordCount()==0)
			{
				MessageBox("出现未知错误!","修改班级");
				return;
			}
			strSQL.Format("update Class  set Class.ClassNo='%s' ,Class.classname='%s' where MajorNo='%s' and  ClassNo='%s' ",dlg.m_classno,dlg.m_classname,m_pClass->m_MajorNo,str);
			MessageBox("修改成功!","修改班级");
			m_database.ExecuteSQL(strSQL);
			m_pClass->Close();
		}
		m_ctrList.DeleteAllItems();
		CString strTemp="";
		if(m_pClass->IsOpen())
			m_pClass->Close();
		strSQL.Format("select * from Class,Major where Major.MajorNo=Class.MajorNo and Major.MajorName='%s'",str1);
		m_pClass->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		m_pClass->MoveFirst();
		for(int i=0;;i++)
		{
			if(m_pClass->IsEOF())
				break;
			m_ctrList.InsertItem(i,strTemp);
			m_ctrList.SetItemText(i,0,m_pClass->m_ClassNo);
			m_ctrList.SetItemText(i,1,m_pClass->m_ClassName);
			m_pClass->MoveNext();
		}
		UpdateData(false);
		m_pClass->Close();

	}

}

void CDeptManage::OnAddNewClass() 
{
	CClass *m_pClass=new CClass(&m_database);
	CMajor *m_pMajor=new CMajor(&m_database);
	UpdateData(true);
	CString str1;
	HTREEITEM hItem =m_ctlTree.GetSelectedItem();
	str1=m_ctlTree.GetItemText(hItem);
	CString str,strSQL;
	CClassModify dlg;
	if(dlg.DoModal()==IDOK)
	{
		CString strTemp="";
		if(m_pMajor->IsOpen())
			m_pMajor->Close();
		strSQL.Format("select * from Major where MajorName='%s'",str1);
		m_pMajor->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		if(m_pMajor->GetRecordCount()==0)
		{
			MessageBox("出现未知错误!","添加班级");
			return;
		}
		strSQL.Format("insert into Class  values('%s','%s','%s')",dlg.m_classno,dlg.m_classname,m_pMajor->m_MajorNo);
		MessageBox("添加成功!","添加班级");
		m_database.ExecuteSQL(strSQL);
		m_pClass->Close();
		m_pMajor->Close();
	}
	m_ctrList.DeleteAllItems();
	CString strTemp="";
	if(m_pClass->IsOpen())
		m_pClass->Close();
	strSQL.Format("select * from Class,Major where Major.MajorNo=Class.MajorNo and Major.MajorName='%s'",str1);
	m_pClass->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	m_pClass->MoveFirst();
	for(int i=0;;i++)
	{
		if(m_pClass->IsEOF())
			break;
		m_ctrList.InsertItem(i,strTemp);
		m_ctrList.SetItemText(i,0,m_pClass->m_ClassNo);
		m_ctrList.SetItemText(i,1,m_pClass->m_ClassName);
		m_pClass->MoveNext();
	}
	UpdateData(false);
	m_pClass->Close();
}

void CDeptManage::OnDeleteClass() 
{
	CClass *m_pClass=new CClass(&m_database);
	UpdateData(true);
	int i,count=0;
	int chose;
	int nHeadNum = m_ctrList.GetItemCount();
	for(i=0;i<nHeadNum;i++)
	{
		if(m_ctrList.GetItemState(i, LVIS_SELECTED) == LVIS_SELECTED)
		{
			count++;
			chose=i;
			break;
		}
	}
	if(count==0)
	{
		MessageBox("没有选中任何记录!","删除班级");
		return;
	}
	else
	{
		CString str1,str2;
		HTREEITEM hItem =m_ctlTree.GetSelectedItem();
		str1=m_ctlTree.GetItemText(hItem);
		CString str,strSQL;
		str=m_ctrList.GetItemText(chose,0);
		str2=m_ctrList.GetItemText(chose,1);
		CClassModify dlg;
		CString strTemp="";
		if(m_pClass->IsOpen())
			m_pClass->Close();
		strSQL.Format("select * from Class,Major where Major.MajorNo=Class.MajorNo and Major.MajorName='%s' and ClassNo='%s'",str1,str);
		m_pClass->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		if(m_pClass->GetRecordCount()==0)
		{
			MessageBox("出现未知错误!","删除班级");
			return;
		}
		strSQL.Format("delete Class  where ClassName='%s' and MajorNo='%s' and  ClassNo='%s' ",str2,m_pClass->m_MajorNo,str);
		MessageBox("修改成功!","删除班级");
		m_database.ExecuteSQL(strSQL);
		m_pClass->Close();
		m_ctrList.DeleteItem(chose);
	}
}

void CDeptManage::OnGetdispinfoList1(NMHDR* pNMHDR, LRESULT* pResult) 
{
	LV_DISPINFO* pDispInfo = (LV_DISPINFO*)pNMHDR;
	// TODO: Add your control notification handler code here
	
	*pResult = 0;
}

void CDeptManage::OnBeginlabeleditList1(NMHDR* pNMHDR, LRESULT* pResult) 
{
	LV_DISPINFO* pDispInfo = (LV_DISPINFO*)pNMHDR;
	//pDispInfo->item.pszText=szOut[pTVDI->item.iItem];
	*pResult = 0;
}

void CDeptManage::OnCaptureChanged(CWnd *pWnd) 
{
	// TODO: Add your message handler code here
	
	CDialog::OnCaptureChanged(pWnd);
}

void CDeptManage::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default
	
	CDialog::OnChar(nChar, nRepCnt, nFlags);
}

int CDeptManage::OnCharToItem(UINT nChar, CListBox* pListBox, UINT nIndex) 
{
	// TODO: Add your message handler code here and/or call default
	
	return CDialog::OnCharToItem(nChar, pListBox, nIndex);
}

void CDeptManage::OnClose() 
{
	// TODO: Add your message handler code here and/or call default
	
	CDialog::OnClose();
}
