#if !defined(AFX_DELAYBOOK_H__B720B27E_52F5_44B2_98AE_ACE7E9607A9F__INCLUDED_)
#define AFX_DELAYBOOK_H__B720B27E_52F5_44B2_98AE_ACE7E9607A9F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DelayBook.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDelayBook dialog

class CDelayBook : public CDialog
{
// Construction
public:
	CDatabase m_database;
	CDelayBook(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDelayBook)
	enum { IDD = IDD_DIALOG_RENEWAL };
	CListCtrl	m_book;
	CString	m_reason;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDelayBook)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDelayBook)
	afx_msg void OnConform();
	virtual BOOL OnInitDialog();
	afx_msg void OnCancelMode();
	afx_msg void OnQuery();
	afx_msg void OnPaint();
	afx_msg void OnCaptureChanged(CWnd *pWnd);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DELAYBOOK_H__B720B27E_52F5_44B2_98AE_ACE7E9607A9F__INCLUDED_)
