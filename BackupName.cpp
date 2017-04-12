// BackupName.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "BackupName.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBackupName dialog


CBackupName::CBackupName(CWnd* pParent /*=NULL*/)
	: CDialog(CBackupName::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBackupName)
	m_name = _T("");
	//}}AFX_DATA_INIT
}


void CBackupName::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBackupName)
	DDX_Text(pDX, IDC_EDIT1, m_name);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CBackupName, CDialog)
	//{{AFX_MSG_MAP(CBackupName)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBackupName message handlers
