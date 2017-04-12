// NewBook.cpp : implementation file
//

#include "stdafx.h"
#include "LMS.h"
#include "NewBook.h"
#include "OneBook.h"
#include "TwoBook.h"
#include "LMSDoc.h"
#include "Book.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
using namespace Gdiplus;
/////////////////////////////////////////////////////////////////////////////
// CNewBook dialog


CNewBook::CNewBook(CWnd* pParent /*=NULL*/)
	: CDialog(CNewBook::IDD, pParent)
{
	//{{AFX_DATA_INIT(CNewBook)
	m_isbn = _T("");
	m_name = _T("");
	m_num = 0;
	m_price = 0.0;
	m_pleace = _T("");
	m_publish = _T("");
	m_remarks = _T("");
	m_time = _T("");
	m_version = _T("");
	m_writer = _T("");
	m_contens = _T("");
	//}}AFX_DATA_INIT
}


void CNewBook::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CNewBook)
	DDX_Control(pDX, IDC_ONE, m_one);
	DDX_Control(pDX, IDC_TWO, m_two);
	DDX_Text(pDX, IDC_ISBN, m_isbn);
	DDX_Text(pDX, IDC_NAME, m_name);
	DDX_Text(pDX, IDC_NUM, m_num);
	DDX_Text(pDX, IDC_PRICE, m_price);
	DDX_Text(pDX, IDC_PLEACE, m_pleace);
	DDX_Text(pDX, IDC_PUBLISH, m_publish);
	DDX_Text(pDX, IDC_REMARKS, m_remarks);
	DDX_Text(pDX, IDC_TIME, m_time);
	DDX_Text(pDX, IDC_VERSION, m_version);
	DDX_Text(pDX, IDC_WRITER, m_writer);
	DDX_Text(pDX, IDC_CONCENTS, m_contens);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CNewBook, CDialog)
	//{{AFX_MSG_MAP(CNewBook)
	ON_BN_CLICKED(IDC_OPEN, OnOpen)
	ON_WM_PAINT()
	ON_WM_CANCELMODE()
	ON_CBN_DROPDOWN(IDC_TWO, OnDropdownTwo)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNewBook message handlers

void CNewBook::OnOpen() 
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
	Invalidate();
}
void CNewBook::OnPaint() 
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
	CPaintDC dc1(this); // device context for painting
	CRect   rc;   
	GetClientRect(&rc);   
	CDC   dcMem;   
	dcMem.CreateCompatibleDC(&dc1);   
	CBitmap   bmpBackground;   
	bmpBackground.LoadBitmap(IDB_BITMAP5);   //背景图
																	
          
	BITMAP   bitmap;   
	bmpBackground.GetBitmap(&bitmap);   
	CBitmap   *pbmpOld=dcMem.SelectObject(&bmpBackground);   
	dc1.StretchBlt(0,0,rc.Width(),rc.Height(),&dcMem,0,0,   
	bitmap.bmWidth,bitmap.bmHeight,SRCCOPY);  
}
void CNewBook::OnOK() 
{
	CTwoBook *m_pTwobook=new CTwoBook(&m_database);
    COneBook *m_pOnebook=new COneBook(&m_database);
	CBook *m_pBook=new CBook(&m_database);
	UpdateData(true);
	CString strSQL;
	strSQL.Format("select * from Book where ISBN='%s'",m_isbn);
	if(m_pBook->IsOpen())
		m_pBook->Close();
	m_pBook->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pBook->GetRecordCount()!=0)
	{
		MessageBox("图书ISBN已存在!","添加图书");
		return;
	}
	if(m_isbn.IsEmpty())
	{
		MessageBox("请填写ISBN!","添加图书");
		return;
	}
	if(m_name.IsEmpty())
	{
		MessageBox("请填写图书名称!","添加图书");
		return;
	}
	if(m_publish.IsEmpty())
	{
		MessageBox("请填写出版社!","添加图书");
		return;
	}
	if(m_writer.IsEmpty())
	{
		MessageBox("请填写主编!","添加图书");
		return;
	}
	if(m_price==0)
	{
		MessageBox("请填写价格!","添加图书");
		return;
	}
	if(m_pleace.IsEmpty())
	{
		MessageBox("请填写图书位置!","添加图书");
		return;
	}
	if(m_num==0)
	{
		MessageBox("请填写图书数量!","添加图书");
		return;
	}
	if(m_one.GetCurSel()==-1)
	{
		MessageBox("请选择一级分类!","添加图书");
		return;
	}
	if(m_two.GetCurSel()==-1)
	{
		MessageBox("请选择二级分类!","添加图书");
		return;
	}
	if(m_version.IsEmpty())
	{
		MessageBox("请填写版次!","添加图书");
		return;
	}
	if(m_time.IsEmpty())
	{
		MessageBox("请填写印刷时间!","添加图书");
		return;
	}
	CString str;

	m_pBook->AddNew();
	m_pBook->m_ISBN=m_isbn;
	m_pBook->m_Bname=m_name;
	m_pBook->m_Beditor=m_writer;
	m_pBook->m_Bpublish=m_publish;
	m_pBook->m_Bcontents=m_contens;
	m_pBook->m_Bprice=m_price;
	m_pBook->m_Bplace=m_pleace;
	m_pBook->m_Bnum=m_num;
	m_pBook->m_Bstore=m_num;
	m_pBook->m_Bcover=FilePath;
	int nIndex=m_two.GetCurSel();
	m_two.GetLBText(nIndex,str);
	if(m_pTwobook->IsOpen())
			m_pTwobook->Close();
	strSQL.Format("select * from TwoBook where TwoBook.twoName='%s'",str);
	m_pTwobook->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	m_pBook->m_twoNo=m_pTwobook->m_twoNo;
	m_pBook->m_BprintTime=m_time;
	m_pBook->m_BpublishTime=m_version;
	m_pBook->m_Bremarks=m_remarks;
	m_pBook->Update();
	m_pBook->Requery();
	
	m_pBook->Close();
	MessageBox("添加图书成功！","添加图书");
	CDialog::OnOK();
}

BOOL CNewBook::OnInitDialog() 
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
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CNewBook::OnCancelMode() 
{
	CDialog::OnCancelMode();
		
}

void CNewBook::OnDropdownTwo() 
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
				m_two.InsertString(i,m_pTwobook->m_twoName);
				m_pTwobook->MoveNext();
			}
		}
	}
}


