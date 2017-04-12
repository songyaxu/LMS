#if !defined(AFX_BORROWBOOK_H__2426DC7F_440B_4A12_ADC6_60DBEF64EA78__INCLUDED_)
#define AFX_BORROWBOOK_H__2426DC7F_440B_4A12_ADC6_60DBEF64EA78__INCLUDED_

#include "Book.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BorrowBook.h : header file
//
#include "BtnST.h"
#include "Reader.h"	// Added by ClassView
#include "Borrow.h"	// Added by ClassView
#include "Config.h"	// Added by ClassView
#include "Renewal.h"	// Added by ClassView
/////////////////////////////////////////////////////////////////////////////
// CBorrowBook dialog

class CBorrowBook : public CDialog
{
// Construction
public:
	CRenewal m_pRenewal;
	CConfig m_pConfig;
	CBorrow m_pBorrow;
	CReader m_pReader;
	CBook m_pBook;
	CButtonST m_btn;
	CButtonST m_btn1;
	CBorrowBook(CWnd* pParent = NULL);   // standard constructor
	CDatabase m_database;
// Dialog Data
	//{{AFX_DATA(CBorrowBook)
	enum { IDD = IDD_DIALOG_BORROWBOOK };
	CListCtrl	m_borrow;
	CListCtrl	m_reader1;
	CListCtrl	m_book1;
	CComboBox	m_reader;
	CComboBox	m_book;
	CString	m_reason1;
	CString	m_reason2;
	CString	m_isbn;
	CString	m_bookname;
	CString	m_no;
	CString	m_name;
	int		m_num;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBorrowBook)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CBorrowBook)
	virtual BOOL OnInitDialog();
	afx_msg void OnCancelMode();
	afx_msg void OnQuerybook();
	afx_msg void OnQueryreader();
	afx_msg void OnClickList2(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnClickList1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnBorrowbook();
	afx_msg void OnPaint();
	afx_msg void OnCaptureChanged(CWnd *pWnd);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BORROWBOOK_H__2426DC7F_440B_4A12_ADC6_60DBEF64EA78__INCLUDED_)
