// DeleteReader.cpp : implementation file
//

#include "stdafx.h"
#include "LMS.h"
#include "DeleteReader.h"
#include "Reader.h"
#include "Class.h"
#include "Major.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDeleteReader dialog


CDeleteReader::CDeleteReader(CWnd* pParent /*=NULL*/)
	: CDialog(CDeleteReader::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDeleteReader)
	m_reason = _T("");
	//}}AFX_DATA_INIT
}


void CDeleteReader::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDeleteReader)
	DDX_Control(pDX, IDC_LIST2, m_ctrList);
	DDX_Control(pDX, IDC_COMBO2, m_item);
	DDX_Text(pDX, IDC_EDIT1, m_reason);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDeleteReader, CDialog)
	//{{AFX_MSG_MAP(CDeleteReader)
	ON_BN_CLICKED(IDC_QUERY, OnQuery)
	ON_BN_CLICKED(IDC_DELETE, OnDelete)
	ON_WM_PAINT()
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDeleteReader message handlers

BOOL CDeleteReader::OnInitDialog() 
{
	CDialog::OnInitDialog();
	m_item.InsertString(0,"学号");
	m_item.InsertString(1,"姓名");
	m_item.InsertString(2,"学历");
	m_item.InsertString(3,"性别");
	m_item.InsertString(4,"生日");
	m_item.InsertString(5,"系/学院");
	m_item.InsertString(6,"专业");
	m_item.InsertString(7,"班级");
	m_item.SetCurSel(1);
	m_ctrList.InsertColumn(0,"学号");
	m_ctrList.InsertColumn(1,"姓名");
	m_ctrList.InsertColumn(2,"学历");
	m_ctrList.InsertColumn(3,"性别");
	m_ctrList.InsertColumn(4,"生日");
	m_ctrList.InsertColumn(5,"系别编号");
	m_ctrList.InsertColumn(6,"专业编号");
	m_ctrList.InsertColumn(7,"班级编号");
	m_ctrList.SetColumnWidth(0,120);
	m_ctrList.SetColumnWidth(1,90);
	m_ctrList.SetColumnWidth(2,90);
	m_ctrList.SetColumnWidth(3,60);
	m_ctrList.SetColumnWidth(4,100);
	m_ctrList.SetColumnWidth(5,120);
	m_ctrList.SetColumnWidth(6,100);
	m_ctrList.SetColumnWidth(7,120);
	//m_ctrList.SetExtendedStyle(LVS_EX_FULLROWSELECT|LVS_EX_CHECKBOXES|LVS_EX_INFOTIP|LVS_EX_GRIDLINES);
	DWORD dwStyle =m_ctrList.GetExtendedStyle();
	dwStyle |= LVS_EX_GRIDLINES;      
	dwStyle |=LVS_EX_CHECKBOXES;  
	m_ctrList.SetExtendedStyle(dwStyle);
	TRY
	{
		m_database.OpenEx(_T("DSN=图书管理系统;UID=syx;PWD=qwerty000"),CDatabase::noOdbcDialog);
		m_pReader.m_pDatabase=&m_database;
		m_pClass.m_pDatabase=&m_database;
		m_pDept.m_pDatabase=&m_database;
		m_pMajor.m_pDatabase=&m_database;
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
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
CString CDeleteReader::Adjust(int x)
{
	if(x==0)
		return "Uno";
	if(x==1)
		return "Uname";
	if(x==2)
		return "Ujob";
	if(x==3)
		return "Usex";
	if(x==4)
		return "Ubirthday";
	if(x==5)
		return "DeptNo";
	if(x==6)
		return "MajorNo";
	if(x==7)
		return "ClassNo";
	return "";
}
void CDeleteReader::OnQuery() 
{
	UpdateData(true);
	if(m_reason.IsEmpty())
	{
		MessageBox("请输入查询信息!","删除读者");
		return;
	}
	CString str,str1;
	str1="%";
	if(m_pReader.IsOpen())
		m_pReader.Close();
	int nIndex=m_item.GetCurSel();
	m_item.GetLBText(nIndex,str);
	if(nIndex==5||nIndex==6||nIndex==7)
	{
		if(nIndex==5)
		{
			m_ctrList.DeleteAllItems();
			if(m_pReader.IsOpen())
				m_pReader.Close();
			CString SQL;
			SQL.Format("select * from UserInfo,Dept where Dept.DeptNo=UserInfo.DeptNo and Dept.DeptName like '%s%s%s'",str1,m_reason,str1);
			m_pReader.Open(AFX_DB_USE_DEFAULT_TYPE,SQL);
			if(m_pReader.GetRecordCount()==0)
			{
				MessageBox("没有任何信息!","删除读者");
			}
			else
			{
				for(int i=0;;i++)
				{
					CString strTemp="";
					if(m_pReader.IsEOF())
						break;
					m_ctrList.InsertItem(i,strTemp);
					m_ctrList.SetItemText(i,0,m_pReader.m_Uno);
					m_ctrList.SetItemText(i,1,m_pReader.m_Uname);
					m_ctrList.SetItemText(i,2,m_pReader.m_Ujob);
					m_ctrList.SetItemText(i,3,m_pReader.m_Usex);
					m_ctrList.SetItemText(i,4,m_pReader.m_Ubirthday);
					if(m_pDept.IsOpen())
						m_pDept.Close();
					SQL.Format("select * from Dept where Dept.DeptNo='%s'",m_pReader.m_DeptNo);
					m_pDept.Open(AFX_DB_USE_DEFAULT_TYPE,SQL);
					m_pDept.MoveFirst();
					m_ctrList.SetItemText(i,5,m_pDept.m_DeptName);
					if(m_pMajor.IsOpen())
						m_pMajor.Close();
					SQL.Format("select * from Major where Major.MajorNo='%s'",m_pReader.m_MajorNo);
					m_pMajor.Open(AFX_DB_USE_DEFAULT_TYPE,SQL);
					m_pMajor.MoveFirst();
					m_ctrList.SetItemText(i,6,m_pMajor.m_MajorName);
					if(m_pClass.IsOpen())
						m_pClass.Close();
					CString SQL;
					SQL.Format("select * from Class where Class.ClassNo='%s'",m_pReader.m_ClassNo);
					m_pClass.Open(AFX_DB_USE_DEFAULT_TYPE,SQL);
					m_pClass.MoveFirst();
					m_ctrList.SetItemText(i,7,m_pClass.m_ClassName);
					m_pReader.MoveNext();
				}
			}
		}
		if(nIndex==6)
		{
			m_ctrList.DeleteAllItems();
			CString SQL;
			if(m_pReader.IsOpen())
				m_pReader.Close();
			SQL.Format("select * from UserInfo,Major where Major.MajorNo=UserInfo.MajorNo and Major.MajorName like '%s%s%s'",str1,m_reason,str1);
			m_pReader.Open(AFX_DB_USE_DEFAULT_TYPE,SQL);
			if(m_pReader.GetRecordCount()==0)
			{
				MessageBox("没有任何信息!","删除读者");
			}
			else
			{
				for(int i=0;;i++)
				{
					CString strTemp="";
					if(m_pReader.IsEOF())
						break;
					m_ctrList.InsertItem(i,strTemp);
					m_ctrList.SetItemText(i,0,m_pReader.m_Uno);
					m_ctrList.SetItemText(i,1,m_pReader.m_Uname);
					m_ctrList.SetItemText(i,2,m_pReader.m_Ujob);
					m_ctrList.SetItemText(i,3,m_pReader.m_Usex);
					m_ctrList.SetItemText(i,4,m_pReader.m_Ubirthday);
					if(m_pDept.IsOpen())
						m_pDept.Close();
					SQL.Format("select * from Dept where Dept.DeptNo='%s'",m_pReader.m_DeptNo);
					m_pDept.Open(AFX_DB_USE_DEFAULT_TYPE,SQL);
					m_pDept.MoveFirst();
					m_ctrList.SetItemText(i,5,m_pDept.m_DeptName);
					if(m_pMajor.IsOpen())
						m_pMajor.Close();
					SQL.Format("select * from Major where Major.MajorNo='%s'",m_pReader.m_MajorNo);
					m_pMajor.Open(AFX_DB_USE_DEFAULT_TYPE,SQL);
					m_pMajor.MoveFirst();
					m_ctrList.SetItemText(i,6,m_pMajor.m_MajorName);
					if(m_pClass.IsOpen())
						m_pClass.Close();
					CString SQL;
					SQL.Format("select * from Class where Class.ClassNo='%s'",m_pReader.m_ClassNo);
					m_pClass.Open(AFX_DB_USE_DEFAULT_TYPE,SQL);
					m_pClass.MoveFirst();
					m_ctrList.SetItemText(i,7,m_pClass.m_ClassName);
					m_pReader.MoveNext();
				}
			}
		}
		if(nIndex==7)
		{
			
			m_ctrList.DeleteAllItems();
			CString SQL;
			CReader *m_pReaderst=new CReader(&m_database);
			if(m_pReader.IsOpen())
				m_pReader.Close();
			SQL.Format("select distinct Uno from UserInfo,Class where Class.ClassNo=UserInfo.ClassNo and Class.ClassName like '%s%s%s'",str1,m_reason,str1);
			m_pReader.Open(AFX_DB_USE_DEFAULT_TYPE,SQL);
			if(m_pReader.GetRecordCount()==0)
			{
				MessageBox("没有任何信息!","删除读者");
			}
			else
			{
				for(int i=0;;i++)
				{

					CString sql;
					sql.Format("select * from UserInfo where Uno='%s'",m_pReader.m_Uno);
					if(m_pReaderst->IsOpen())
						m_pReaderst->Close();
					m_pReaderst->Open(AFX_DB_USE_DEFAULT_TYPE,sql);
					CString strTemp="";
					if(m_pReader.IsEOF())
						break;
					m_ctrList.InsertItem(i,strTemp);
					m_ctrList.SetItemText(i,0,m_pReaderst->m_Uno);
					m_ctrList.SetItemText(i,1,m_pReaderst->m_Uname);
					m_ctrList.SetItemText(i,2,m_pReaderst->m_Ujob);
					m_ctrList.SetItemText(i,3,m_pReaderst->m_Usex);
					m_ctrList.SetItemText(i,4,m_pReaderst->m_Ubirthday);
					if(m_pDept.IsOpen())
						m_pDept.Close();
					SQL.Format("select * from Dept where Dept.DeptNo='%s'",m_pReaderst->m_DeptNo);
					m_pDept.Open(AFX_DB_USE_DEFAULT_TYPE,SQL);
					m_pDept.MoveFirst();
					m_ctrList.SetItemText(i,5,m_pDept.m_DeptName);
					if(m_pMajor.IsOpen())
						m_pMajor.Close();
					SQL.Format("select * from Major where Major.MajorNo='%s'",m_pReaderst->m_MajorNo);
					m_pMajor.Open(AFX_DB_USE_DEFAULT_TYPE,SQL);
					m_pMajor.MoveFirst();
					m_ctrList.SetItemText(i,6,m_pMajor.m_MajorName);
					if(m_pClass.IsOpen())
						m_pClass.Close();
					SQL.Format("select * from Class where Class.ClassNo='%s'",m_pReaderst->m_ClassNo);
					m_pClass.Open(AFX_DB_USE_DEFAULT_TYPE,SQL);
					m_pClass.MoveFirst();
					m_ctrList.SetItemText(i,7,m_pClass.m_ClassName);
					m_pReader.MoveNext();
				}
			}
		}
	}
	else
	{
		if(m_pReader.IsOpen())
			m_pReader.Close();
		CString strSQL;
		strSQL.Format("select * from UserInfo where %s like '%s%s%s'",Adjust(nIndex),str1,m_reason,str1);
		m_pReader.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		if(m_pReader.GetRecordCount()==0)
		{
			MessageBox("没有任何信息！","读者管理",MB_OK|MB_ICONINFORMATION);
		}
		else
		{
			m_ctrList.DeleteAllItems();
			m_pReader.MoveFirst();
			CString strTemp,SQL;
			for(int i=0;;i++)
			{
				if(m_pReader.IsEOF())
					break;
				m_ctrList.InsertItem(i,strTemp);
				m_ctrList.SetItemText(i,0,m_pReader.m_Uno);
				m_ctrList.SetItemText(i,1,m_pReader.m_Uname);
				m_ctrList.SetItemText(i,2,m_pReader.m_Ujob);
				m_ctrList.SetItemText(i,3,m_pReader.m_Usex);
				m_ctrList.SetItemText(i,4,m_pReader.m_Ubirthday);
				if(m_pDept.IsOpen())
					m_pDept.Close();
				SQL.Format("select * from Dept where Dept.DeptNo='%s'",m_pReader.m_DeptNo);
				m_pDept.Open(AFX_DB_USE_DEFAULT_TYPE,SQL);
				m_pDept.MoveFirst();
				m_ctrList.SetItemText(i,5,m_pDept.m_DeptName);
				if(m_pMajor.IsOpen())
					m_pMajor.Close();
				SQL.Format("select * from Major where Major.MajorNo='%s'",m_pReader.m_MajorNo);
				m_pMajor.Open(AFX_DB_USE_DEFAULT_TYPE,SQL);
				m_pMajor.MoveFirst();
				m_ctrList.SetItemText(i,6,m_pMajor.m_MajorName);
				if(m_pClass.IsOpen())
					m_pClass.Close();
				CString SQL;
				SQL.Format("select * from Class where Class.ClassNo='%s'",m_pReader.m_ClassNo);
				m_pClass.Open(AFX_DB_USE_DEFAULT_TYPE,SQL);
				m_pClass.MoveFirst();
				m_ctrList.SetItemText(i,7,m_pClass.m_ClassName);
				m_pReader.MoveNext();
			}
		}
	}
}

void CDeleteReader::OnDelete() 
{
	int count=0;
	int a[10000];
	for(int i=0; i<m_ctrList.GetItemCount(); i++)
	{
		if(m_ctrList.GetCheck(i))
		{	  
			a[count++]=i;
		}
	}
	if(count==0)
	{
		MessageBox("没有选中任何信息!","删除读者");
		return;
	}
	else
	{	try
		{
			CString str;
			m_database.BeginTrans();
			for(int i=0;i<count;i++)
			{
				CString strSQL;
				str=m_ctrList.GetItemText(a[i],0);
				strSQL.Format("select * from UserInfo where Uno='%s'",str);
				m_pReader.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
				if(m_pReader.m_Ustatus!=11)
				{
					CString str1;
					str1.Format("因%s有图书借阅或者预约!无法进行删除!",str);
					MessageBox(str1,"删除读者");
					continue;
				}
				m_pReader.Close();
				strSQL.Format("delete from UserInfo where Uno='%s'",str);
				m_database.ExecuteSQL(strSQL);
			}
			m_database.CommitTrans();
			for(int j=count-1;j>=0;j--)
			{
				m_ctrList.DeleteItem(a[j]);
			}
		}
		catch(...)
		{
			MessageBox("删除失败信息回滚!","删除读者");
			m_database.Rollback();
			return;
		}
	}
	MessageBox("删除成功!","删除读者");
}

void CDeleteReader::OnPaint() 
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

void CDeleteReader::OnCancelMode() 
{
	CDialog::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}
