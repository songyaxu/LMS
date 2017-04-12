#if !defined(AFX_BOOKBOOK_H__369D0A30_E1F0_491E_9DCC_95A6AD1853F6__INCLUDED_)
#define AFX_BOOKBOOK_H__369D0A30_E1F0_491E_9DCC_95A6AD1853F6__INCLUDED_

#include "Book.h"	// Added by ClassView
#include "Reader.h"	// Added by ClassView
#include "Renewal.h"
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Bookbook.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CBookbook dialog

class CBookbook : public CDialog
{
// Construction
public:
	bool Yn;
	CReader m_pReader;
	CBook m_pBook;
	CRenewal m_pRenewal;
	CDatabase m_database;
	CBookbook(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CBookbook)
	enum { IDD = IDD_DIALOG_BOOKBOOK };
	CListCtrl	m_book;
	CListCtrl	m_reader;
	CListCtrl	m_borrow;
	CString	m_no;
	CString	m_name;
	CString	m_isbn;
	CString	m_bookname;
	CString	m_no1;
	CString	m_name1;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBookbook)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CBookbook)
	virtual BOOL OnInitDialog();
	afx_msg void OnCancelMode();
	afx_msg void OnButton1();
	afx_msg void OnButton4();
	afx_msg void OnClickList4(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnClickList1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnButton2();
	afx_msg void OnButton5();
	afx_msg void OnButton3();
	afx_msg void OnPaint();
	afx_msg void OnCaptureChanged(CWnd *pWnd);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BOOKBOOK_H__369D0A30_E1F0_491E_9DCC_95A6AD1853F6__INCLUDED_)
