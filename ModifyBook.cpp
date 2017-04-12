// ModifyBook.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "ModifyBook.h"
#include "OneBook.h"
#include "TwoBook.h"
#include "Book.h"
#include <comdef.h>
using namespace Gdiplus;
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CModifyBook dialog


CModifyBook::CModifyBook(CWnd* pParent /*=NULL*/)
	: CDialog(CModifyBook::IDD, pParent)
{
	//{{AFX_DATA_INIT(CModifyBook)
	m_isbn = _T("");
	m_name = _T("");
	m_num = 0;
	m_publish = _T("");
	m_remark = _T("");
	m_time = _T("");
	m_pleace = _T("");
	m_content = _T("");
	m_store = 0;
	m_version = _T("");
	m_editor = _T("");
	m_price = 0.0;
	//}}AFX_DATA_INIT
}


void CModifyBook::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CModifyBook)
	DDX_Control(pDX, IDC_ONE, m_one);
	DDX_Control(pDX, IDC_TWO, m_two);
	DDX_Text(pDX, IDC_ISBN, m_isbn);
	DDX_Text(pDX, IDC_NAME, m_name);
	DDX_Text(pDX, IDC_NUM, m_num);
	DDX_Text(pDX, IDC_PUBLISH, m_publish);
	DDX_Text(pDX, IDC_REMARKS, m_remark);
	DDX_Text(pDX, IDC_TIME, m_time);
	DDX_Text(pDX, IDC_PLEACE, m_pleace);
	DDX_Text(pDX, IDC_CONCENTS, m_content);
	DDX_Text(pDX, IDC_STORE, m_store);
	DDX_Text(pDX, IDC_VERSION, m_version);
	DDX_Text(pDX, IDC_WRITER, m_editor);
	DDX_Text(pDX, IDC_PRICE, m_price);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CModifyBook, CDialog)
	//{{AFX_MSG_MAP(CModifyBook)
	ON_BN_CLICKED(IDC_QUERY, OnQuery)
	ON_WM_CANCELMODE()
	ON_CBN_DROPDOWN(IDC_TWO, OnDropdownTwo)
	ON_CBN_DROPDOWN(IDC_ONE, OnDropdownOne)
	ON_BN_CLICKED(IDC_CONFORM, OnConform)
	ON_BN_CLICKED(IDC_OPEN, OnOpen)
	ON_WM_PAINT()
	ON_WM_CAPTURECHANGED()
	ON_WM_CHAR()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CModifyBook message handlers

void CModifyBook::OnQuery() 
{
	
}

BOOL CModifyBook::OnInitDialog() 
{
	CDialog::OnInitDialog();
	TRY
	{
		m_database.OpenEx(_T("DSN=图书管理系统;UID=syx;PWD=qwerty000"),CDatabase::noOdbcDialog);
		m_pBook.m_pDatabase=&m_database;
		m_pTwobook.m_pDatabase=&m_database;
		m_pOnebook.m_pDatabase=&m_database;
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
	if(m_pBook.IsOpen())
		m_pBook.Close();
	CString strSQL;
	char str[10000];
	sprintf(str,"select * from Book where ISBN='%s'",((CLMSApp *)AfxGetApp())->m_ISBN);
	m_pBook.Open(AFX_DB_USE_DEFAULT_TYPE,str);
	if(m_pBook.GetRecordCount()==0)
	{
		MessageBox("加载失败!","修改图书");
	}
	else
	{
		if(m_pBook.m_Bstore!=m_pBook.m_Bnum)
		{
			((CEdit*)GetDlgItem(IDC_ISBN))->EnableWindow(false);
			((CEdit*)GetDlgItem(IDC_NAME))->EnableWindow(false);
			MessageBox("图书有借阅!无法修改书名和ISBN!","修改图书");
		}
		m_isbn=m_pBook.m_ISBN;
		m_name=m_pBook.m_Bname;
		m_editor=m_pBook.m_Beditor;
		m_publish=m_pBook.m_Bpublish;
		m_content=m_pBook.m_Bcontents;
		m_price=m_pBook.m_Bprice;
		m_pleace=m_pBook.m_Bplace;
		m_num=m_pBook.m_Bnum;
		m_store=m_pBook.m_Bstore;
		if(m_pTwobook.IsOpen())
			m_pTwobook.Close();
		strSQL.Format("select * from TwoBook where twoNo='%d'",m_pBook.m_twoNo);
		m_pTwobook.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		m_two.InsertString(0,m_pTwobook.m_twoName);
		m_two.SetCurSel(0);
		if(m_pOnebook.IsOpen())
			m_pOnebook.Close();
		strSQL.Format("select * from OneBook,TwoBook where OneBook.oneNo=TwoBook.oneNo and TwoBook.twoNo='%d'",m_pBook.m_twoNo);
		m_pOnebook.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		m_one.InsertString(0,m_pOnebook.m_oneName);
		m_one.SetCurSel(0);
		m_version=m_pBook.m_BpublishTime;
		m_time=m_pBook.m_BprintTime;
		m_remark=m_pBook.m_Bremarks;
		FilePath=m_pBook.m_Bcover;
		if(!FilePath.IsEmpty())
			OnPaint();
		UpdateData(false);
	}
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
void CModifyBook::OnCancelMode() 
{
	CDialog::OnCancelMode();	
}

CString CModifyBook::Adjust(int x)
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

void CModifyBook::OnDropdownTwo() 
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

void CModifyBook::OnDropdownOne() 
{
	CString strSQL="select * from OneBook";
	if(m_pOnebook.IsOpen())
		m_pOnebook.Close();
	m_pOnebook.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pOnebook.GetRecordCount()==0)
	{
		MessageBox("数据库错误！","修改图书",MB_OK);
	}
	else
	{
		m_pOnebook.MoveFirst();
		for(int i=0;;i++)
		{
			if(m_pOnebook.IsEOF())
				break;
			m_one.InsertString(i,m_pOnebook.m_oneName);
			m_pOnebook.MoveNext();
		}
	}
}

void CModifyBook::OnOK() 
{
	
	CDialog::OnOK();
}

void CModifyBook::OnConform() 
{
	if(MessageBox("确定修改图书信息?","修改图书",MB_OKCANCEL)==2)
		return;
	CTwoBook *m_pTwobook=new CTwoBook(&m_database);
    COneBook *m_pOnebook=new COneBook(&m_database);
	CBook *m_pBook=new CBook(&m_database);
	UpdateData(true);
	CString strSQL;
	strSQL.Format("select * from Book where ISBN='%s'",m_isbn);
	if(m_pBook->IsOpen())
		m_pBook->Close();
	m_pBook->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_isbn.IsEmpty())
	{
		MessageBox("请填写ISBN!","修改图书");
		return;
	}
	if(m_name.IsEmpty())
	{
		MessageBox("请填写图书名称!","修改图书");
		return;
	}
	if(m_publish.IsEmpty())
	{
		MessageBox("请填写出版社!","修改图书");
		return;
	}
	if(m_editor.IsEmpty())
	{
		MessageBox("请填写主编!","修改图书");
		return;
	}
	if(m_price==0)
	{
		MessageBox("请填写价格!","修改图书");
		return;
	}
	if(m_pleace.IsEmpty())
	{
		MessageBox("请填写图书位置!","修改图书");
		return;
	}
	if(m_num==0)
	{
		MessageBox("请填写图书数量!","修改图书");
		return;
	}
	if(m_one.GetCurSel()==-1)
	{
		MessageBox("请选择一级分类!","修改图书");
		return;
	}
	if(m_two.GetCurSel()==-1)
	{
		MessageBox("请选择二级分类!","修改图书");
		return;
	}
	if(m_version.IsEmpty())
	{
		MessageBox("请填写版次!","修改图书");
		return;
	}
	if(m_time.IsEmpty())
	{
		MessageBox("请填写印刷时间!","修改图书");
		return;
	}
	CString str;

	m_pBook->Edit();
	m_pBook->m_ISBN=m_isbn;
	m_pBook->m_Bname=m_name;
	m_pBook->m_Beditor=m_editor;
	m_pBook->m_Bpublish=m_publish;
	m_pBook->m_Bcontents=m_content;
	m_pBook->m_Bprice=m_price;
	m_pBook->m_Bplace=m_pleace;
	m_pBook->m_Bnum=m_num;
	m_pBook->m_Bstore=m_num;
	int nIndex=m_two.GetCurSel();
	m_two.GetLBText(nIndex,str);
	if(m_pTwobook->IsOpen())
			m_pTwobook->Close();
	strSQL.Format("select * from TwoBook where TwoBook.twoName='%s'",str);
	m_pTwobook->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	m_pBook->m_twoNo=m_pTwobook->m_twoNo;
	m_pBook->m_BprintTime=m_time;
	m_pBook->m_BpublishTime=m_version;
	m_pBook->m_Bremarks=m_remark;
	m_pBook->Update();
	m_pBook->Close();
	MessageBox("修改图书成功！","修改图书");
}

void CModifyBook::OnOpen() 
{

	CFileDialog dlg(true, NULL, NULL, NULL, _T("JPG Files(*.jpg)|*.jpg|Png Files(*.png)|*.png| All Files(*.*)|*.*||"), NULL);
	if(dlg.DoModal()==IDOK)
		FilePath=dlg.GetPathName();
	if(FilePath.IsEmpty())
	{
		return;
	}
	CDC *pCDC = GetDlgItem(IDC_STATIC1)->GetDC();
	HDC hdc = pCDC->GetSafeHdc();
	Graphics grphics(hdc);
	CString strSQL;
	RECT rect;
	GetDlgItem(IDC_STATIC1)->GetClientRect(&rect);
	Graphics graphics(pCDC->m_hDC);
	_bstr_t bstr(FilePath);
	wchar_t * wstr = (wchar_t*)bstr;
	Image image(wstr,true);
	graphics.DrawImage(&image,0,0,155,210);
	CBook *m_pBook=new CBook(&m_database);
	strSQL.Format("select * from Book where ISBN='%s'",m_isbn);
	if(m_pBook->IsOpen())
		m_pBook->Close();
	m_pBook->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	m_pBook->Edit();
	m_pBook->m_Bcover=FilePath;
	m_pBook->Update();
	m_pBook->Close();
	Invalidate();
}

void CModifyBook::OnPaint() 
{
	CDC *dc=GetDlgItem(IDC_STATIC1)->GetDC();
	HDC hdc = dc->GetSafeHdc();
	Graphics grphics(hdc);

	RECT rect;
	GetDlgItem(IDC_STATIC1)->GetClientRect(&rect);
	Graphics graphics(dc->m_hDC);
	
	_bstr_t bstr(FilePath);
	wchar_t * wstr = (wchar_t*)bstr;
	Image image(wstr,true);
	graphics.DrawImage(&image,0,0,155,210);
}

void CModifyBook::OnCaptureChanged(CWnd *pWnd) 
{
	CDialog::OnCaptureChanged(pWnd);
}

void CModifyBook::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default
	
	CDialog::OnChar(nChar, nRepCnt, nFlags);
}
