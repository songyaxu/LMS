#if !defined(AFX_RETURNBOOK_H__9B5F60E8_C9A8_4A97_8A57_6386E439A43C__INCLUDED_)
#define AFX_RETURNBOOK_H__9B5F60E8_C9A8_4A97_8A57_6386E439A43C__INCLUDED_

#include "Reader.h"	// Added by ClassView
#include "Borrow.h"	// Added by ClassView
#include "Punish.h"	// Added by ClassView
#include "Book.h"	// Added by ClassView
#include "One.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ReturnBook.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CReturnBook dialog

class CReturnBook : public CDialog
{
// Construction
public:
	CString temp;
	COne p;
	CBook m_pBook;
	CPunish m_pPunish;
	CBorrow m_pBorrow;
	CReader m_pReader;
	CDatabase m_database;
	CReturnBook(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CReturnBook)
	enum { IDD = IDD_DIALOG_RETURNBOOK };
	CListCtrl	m_borrow;
	CString	m_no;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CReturnBook)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CReturnBook)
	afx_msg void OnReturn();
	afx_msg void OnQuery();
	virtual BOOL OnInitDialog();
	afx_msg void OnCancelMode();
	afx_msg void OnPaint();
	afx_msg void OnCaptureChanged(CWnd *pWnd);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RETURNBOOK_H__9B5F60E8_C9A8_4A97_8A57_6386E439A43C__INCLUDED_)
