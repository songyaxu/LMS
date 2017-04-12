// INFO.cpp : implementation file
//

#include "stdafx.h"
#include "LMS.h"
#include "INFO.h"
#include "ModifyPassword.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CINFO dialog


CINFO::CINFO(CWnd* pParent /*=NULL*/)
	: CDialog(CINFO::IDD, pParent)
{
	//{{AFX_DATA_INIT(CINFO)
	m_name = _T("");
	m_no = _T("");
	m_phone = _T("");
	m_email = _T("");
	m_age = 0;
	m_beizhu = _T("");
	//}}AFX_DATA_INIT
}


void CINFO::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CINFO)
	DDX_Control(pDX, IDC_COMBO6, m_class);
	DDX_Control(pDX, IDC_COMBO5, m_major);
	DDX_Control(pDX, IDC_COMBO4, m_dept);
	DDX_Control(pDX, IDC_COMBO3, m_date);
	DDX_Control(pDX, IDC_COMBO2, m_sex);
	DDX_Control(pDX, IDC_COMBO1, m_type);
	DDX_Text(pDX, IDC_EDIT1, m_name);
	DDX_Text(pDX, IDC_EDIT2, m_no);
	DDX_Text(pDX, IDC_EDIT3, m_phone);
	DDX_Text(pDX, IDC_EDIT4, m_email);
	DDX_Text(pDX, IDC_EDIT5, m_age);
	DDX_Text(pDX, IDC_EDIT8, m_beizhu);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CINFO, CDialog)
	//{{AFX_MSG_MAP(CINFO)
	ON_BN_CLICKED(IDC_MODIFYPASSWORD, OnModifypassword)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CINFO message handlers

BOOL CINFO::OnInitDialog() 
{

	CDialog::OnInitDialog();
	
	//SetDlgItemText(IDC_STATICTag,"图书管理系统");
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CINFO::OnModifypassword() 
{
	CModifyPassword dlg;
	dlg.DoModal();
}
