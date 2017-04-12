#if !defined(AFX_BORROWRECORD_H__B80BD233_A7BD_448F_B22C_8D676CF1F3A6__INCLUDED_)
#define AFX_BORROWRECORD_H__B80BD233_A7BD_448F_B22C_8D676CF1F3A6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BorrowRecord.h : header file
//
#include "Borrow.h"
#include "One.h"	// Added by ClassView
/////////////////////////////////////////////////////////////////////////////
// CBorrowRecord dialog

class CBorrowRecord : public CDialog
{
// Construction
public:
	COne p;
	CBorrow m_pBorrow;
	CDatabase m_database;
	CBorrowRecord(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CBorrowRecord)
	enum { IDD = IDD_DIALOG_BORROWRECORD };
	CListCtrl	m_ctrList;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBorrowRecord)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CBorrowRecord)
	virtual BOOL OnInitDialog();
	afx_msg void OnCancelMode();
	virtual void OnOK();
	afx_msg void OnPaint();
	afx_msg void OnCaptureChanged(CWnd *pWnd);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BORROWRECORD_H__B80BD233_A7BD_448F_B22C_8D676CF1F3A6__INCLUDED_)
