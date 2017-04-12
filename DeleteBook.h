#if !defined(AFX_DELETEBOOK_H__1C4E5E5C_0A83_4AE1_AF4C_7ED9D9919BFF__INCLUDED_)
#define AFX_DELETEBOOK_H__1C4E5E5C_0A83_4AE1_AF4C_7ED9D9919BFF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DeleteBook.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDeleteBook dialog

class CDeleteBook : public CDialog
{
// Construction
public:
	CString Adjust(int x);
	CDatabase m_database;
	CDeleteBook(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDeleteBook)
	enum { IDD = IDD_DIALOG_DELETEBOOK };
	CListCtrl	m_ctrList;
	CComboBox	m_item;
	CComboBox	m_two;
	CComboBox	m_one;
	CString	m_reason;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDeleteBook)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDeleteBook)
	virtual BOOL OnInitDialog();
	afx_msg void OnCancelMode();
	afx_msg void OnQuery();
	afx_msg void OnDelete();
	afx_msg void OnDropdownCombo1();
	afx_msg void OnDropdownCombo2();
	afx_msg void OnPaint();
	afx_msg void OnCaptureChanged(CWnd *pWnd);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DELETEBOOK_H__1C4E5E5C_0A83_4AE1_AF4C_7ED9D9919BFF__INCLUDED_)
