#if !defined(AFX_PUNISHMENT_H__375407D4_D947_4EB7_8B99_330C7F9DBE9E__INCLUDED_)
#define AFX_PUNISHMENT_H__375407D4_D947_4EB7_8B99_330C7F9DBE9E__INCLUDED_

#include "One.h"	// Added by ClassView
#include "BtnST.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Punishment.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CPunishment dialog

class CPunishment : public CDialog
{
// Construction
public:
	CString m_Bookisbn;
	CButtonST m_btn;
	COne p;
	CDatabase m_database;
	CPunishment(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CPunishment)
	enum { IDD = IDD_DIALOG_PUNISHMENT };
	CListCtrl	m_ctrList;
	CButton	m_c4;
	CButton	m_c3;
	CButton	m_c2;
	CButton	m_c1;
	double	m_fee;
	CString	m_other;
	CString	m_no;
	int		m_numno;
	float	m_feenum;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPunishment)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CPunishment)
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	afx_msg void OnCancelMode();
	afx_msg void OnButton1();
	afx_msg void OnClickList2(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnButton2();
	afx_msg void OnPaint();
	afx_msg void OnCaptureChanged(CWnd *pWnd);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PUNISHMENT_H__375407D4_D947_4EB7_8B99_330C7F9DBE9E__INCLUDED_)
