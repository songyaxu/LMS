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
	m_item.InsertString(0,"ѧ��");
	m_item.InsertString(1,"����");
	m_item.InsertString(2,"ѧ��");
	m_item.InsertString(3,"�Ա�");
	m_item.InsertString(4,"����");
	m_item.InsertString(5,"רҵ");
	m_item.InsertString(6,"�༶");
	m_item.InsertString(7,"ϵ/ѧԺ");
	m_item.InsertString(8,"��������");
	m_item.InsertString(9,"�ƶ��绰");
	m_item.InsertString(10,"��ע");
	m_item.SetCurSel(1);
	m_condition.InsertString(0,"����");
	m_condition.InsertString(1,"������");
	m_condition.InsertString(2,"����");
	m_condition.InsertString(3,"���ڻ����");
	m_condition.InsertString(4,"С��");
	m_condition.InsertString(5,"С�ڻ����");
	m_condition.InsertString(6,"ʼ��");
	m_condition.InsertString(7,"����ʼ��");
	m_condition.InsertString(8,"ֹ��");
	m_condition.InsertString(9,"����ֹ��");
	m_condition.InsertString(10,"����");
	m_condition.InsertString(11,"������");
	m_condition.SetCurSel(10);	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CQueryReaderDlg::OnCancelMode() 
{
	CDialog::OnCancelMode();
}
