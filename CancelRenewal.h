#if !defined(AFX_CANCELRENEWAL_H__DCE57310_FC0B_4AF1_BA57_DBE487E71852__INCLUDED_)
#define AFX_CANCELRENEWAL_H__DCE57310_FC0B_4AF1_BA57_DBE487E71852__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// CancelRenewal.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCancelRenewal dialog

class CCancelRenewal : public CDialog
{
// Construction
public:
	CString m_userno;
	CDatabase m_database;
	CCancelRenewal(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CCancelRenewal)
	enum { IDD = IDD_DIALOG_CANCELRENEWAL };
	CListCtrl	m_ctrList;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCancelRenewal)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CCancelRenewal)
	virtual BOOL OnInitDialog();
	afx_msg void OnButton1();
	afx_msg void OnPaint();
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CANCELRENEWAL_H__DCE57310_FC0B_4AF1_BA57_DBE487E71852__INCLUDED_)
