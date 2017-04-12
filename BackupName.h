#if !defined(AFX_BACKUPNAME_H__7806A908_E8B0_4F94_920A_3BF6C45E999E__INCLUDED_)
#define AFX_BACKUPNAME_H__7806A908_E8B0_4F94_920A_3BF6C45E999E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BackupName.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CBackupName dialog

class CBackupName : public CDialog
{
// Construction
public:
	CBackupName(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CBackupName)
	enum { IDD = IDD_DIALOG_DATABASEBACKUP };
	CString	m_name;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBackupName)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CBackupName)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BACKUPNAME_H__7806A908_E8B0_4F94_920A_3BF6C45E999E__INCLUDED_)
