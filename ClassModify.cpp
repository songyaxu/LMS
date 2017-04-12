// ClassModify.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "ClassModify.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CClassModify dialog


CClassModify::CClassModify(CWnd* pParent /*=NULL*/)
	: CDialog(CClassModify::IDD, pParent)
{
	//{{AFX_DATA_INIT(CClassModify)
	m_classno = _T("");
	m_classname = _T("");
	//}}AFX_DATA_INIT
}


void CClassModify::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CClassModify)
	DDX_Text(pDX, IDC_EDIT1, m_classno);
	DDX_Text(pDX, IDC_EDIT2, m_classname);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CClassModify, CDialog)
	//{{AFX_MSG_MAP(CClassModify)
	ON_WM_PAINT()
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CClassModify message handlers

void CClassModify::OnOK() 
{
	UpdateData(true);
	if(m_classno.IsEmpty()&&m_classname.IsEmpty())
	{
		MessageBox("请认真填写班级信息!","班级修改");
		return;
	}
	CDialog::OnOK();
}

void CClassModify::OnPaint() 
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

void CClassModify::OnCancelMode() 
{
	CDialog::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}
