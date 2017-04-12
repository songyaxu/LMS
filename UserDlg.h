#if !defined(AFX_USERDLG_H__A5B5F151_95EA_4AB1_9B33_9DCB95C5DE49__INCLUDED_)
#define AFX_USERDLG_H__A5B5F151_95EA_4AB1_9B33_9DCB95C5DE49__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// UserDlg.h : header file
//
#include "BtnST.h"
/////////////////////////////////////////////////////////////////////////////
// CUserDlg dialog

class CUserDlg : public CDialog
{
// Construction
public:
	CDatabase m_database;
	CButtonST m_btn1;
	CString m_userno;
	CUserDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CUserDlg)
	enum { IDD = IDD_DIALOG_USER };
	CButton	m_btn;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CUserDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CUserDlg)
	afx_msg void OnPersoninfo();
	afx_msg void OnExit();
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg void OnBookquery();
	afx_msg void OnBookBook();
	afx_msg void OnBorrowrecord();
	afx_msg void OnCancelrenewal();
	afx_msg void OnPunishmentrecord();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_USERDLG_H__A5B5F151_95EA_4AB1_9B33_9DCB95C5DE49__INCLUDED_)
