// QueryReaderDlg.cpp : implementation file
//

#include "stdafx.h"
#include "LMS.h"
#include "QueryReaderDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CQueryReaderDlg dialog


CQueryReaderDlg::CQueryReaderDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CQueryReaderDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CQueryReaderDlg)
	m_radio = 1;
	//}}AFX_DATA_INIT
}


void CQueryReaderDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CQueryReaderDlg)
	DDX_Control(pDX, IDC_COMBO1, m_item);
	DDX_Control(pDX, IDC_COMBO8, m_condition);
	DDX_Radio(pDX, IDC_RADIO1, m_radio);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CQueryReaderDlg, CDialog)
	//{{AFX_MSG_MAP(CQueryReaderDlg)
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CQueryReaderDlg message handlers

BOOL CQueryReaderDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	m_item.InsertString(0,"学号");
	m_item.InsertString(1,"姓名");
	m_item.InsertString(2,"学历");
	m_item.InsertString(3,"性别");
	m_item.InsertString(4,"生日");
	m_item.InsertString(5,"专业");
	m_item.InsertString(6,"班级");
	m_item.InsertString(7,"系/学院");
	m_item.InsertString(8,"电子邮箱");
	m_item.InsertString(9,"移动电话");
	m_item.InsertString(10,"备注");
	m_item.SetCurSel(1);
	m_condition.InsertString(0,"等于");
	m_condition.InsertString(1,"不等于");
	m_condition.InsertString(2,"大于");
	m_condition.InsertString(3,"大于或等于");
	m_condition.InsertString(4,"小于");
	m_condition.InsertString(5,"小于或等于");
	m_condition.InsertString(6,"始于");
	m_condition.InsertString(7,"并非始于");
	m_condition.InsertString(8,"止于");
	m_condition.InsertString(9,"并非止于");
	m_condition.InsertString(10,"包含");
	m_condition.InsertString(11,"不包含");
	m_condition.SetCurSel(10);	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CQueryReaderDlg::OnCancelMode() 
{
	CDialog::OnCancelMode();
}
