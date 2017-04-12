#if !defined(AFX_ADDADMIN_H__7810DD0E_E7F4_46B3_8AA3_5C6E0DF7353C__INCLUDED_)
#define AFX_ADDADMIN_H__7810DD0E_E7F4_46B3_8AA3_5C6E0DF7353C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AddAdmin.h : header file
//
#include "Admin.h"
/////////////////////////////////////////////////////////////////////////////
// CAddAdmin dialog

class CAddAdmin : public CDialog
{
// Construction
public:
	CAddAdmin(CWnd* pParent = NULL);   // standard constructor
	CDatabase m_database;
	CAdmin m_pAdmin;
// Dialog Data
	//{{AFX_DATA(CAddAdmin)
	enum { IDD = IDD_DIALOG_ADDNEWADMIN };
	CString	m_type;
	CString	m_name;
	CString	m_pwd;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAddAdmin)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CAddAdmin)
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADDADMIN_H__7810DD0E_E7F4_46B3_8AA3_5C6E0DF7353C__INCLUDED_)
