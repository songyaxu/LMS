#if !defined(AFX_QUERYBOOK_H__5C053D4B_0947_457F_9EEA_DF2DCDFDC7A8__INCLUDED_)
#define AFX_QUERYBOOK_H__5C053D4B_0947_457F_9EEA_DF2DCDFDC7A8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// QUERYBOOK.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CQUERYBOOK dialog

class CQUERYBOOK : public CDialog
{
// Construction
public:
	CString m_userno;
	CString Adjust(int nIndex);
	CDatabase m_database;
	CQUERYBOOK(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CQUERYBOOK)
	enum { IDD = IDD_DIALOG_QUERY };
	CListCtrl	m_ctrList;
	CComboBox	m_item;
	CComboBox	m_two;
	CComboBox	m_one;
	CString	m_reason;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CQUERYBOOK)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CQUERYBOOK)
	virtual BOOL OnInitDialog();
	afx_msg void OnDropdownCombo2();
	afx_msg void OnDropdownCombo1();
	afx_msg void OnButton1();
	afx_msg void OnRenewal();
	afx_msg void OnDblclkList1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnPaint();
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_QUERYBOOK_H__5C053D4B_0947_457F_9EEA_DF2DCDFDC7A8__INCLUDED_)
