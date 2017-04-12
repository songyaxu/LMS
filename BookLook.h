#if !defined(AFX_BOOKLOOK_H__0FDC5DC7_90C9_408C_90D2_2C0A80D63512__INCLUDED_)
#define AFX_BOOKLOOK_H__0FDC5DC7_90C9_408C_90D2_2C0A80D63512__INCLUDED_

#include "Book.h"	// Added by ClassView
#include "TwoBook.h"	// Added by ClassView
#include "OneBook.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BookLook.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CBookLook dialog

class CBookLook : public CDialog
{
// Construction
public:
	CString FilePath;
	COneBook m_pOnebook;
	CTwoBook m_pTwobook;
	CBook m_pBook;
	CDatabase m_database;
	CBookLook(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CBookLook)
	enum { IDD = IDD_DIALOG_Look };
	CComboBox	m_two;
	CComboBox	m_one;
	CString	m_isbn;
	CString	m_name;
	int		m_num;
	CString	m_content;
	CString	m_version;
	CString	m_pleace;
	CString	m_publish;
	CString	m_remark;
	CString	m_time;
	CString	m_editor;
	double	m_price;
	long	m_store;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBookLook)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CBookLook)
	virtual BOOL OnInitDialog();
	afx_msg void OnCancelMode();
	afx_msg void OnPaint();
	afx_msg void OnCaptureChanged(CWnd *pWnd);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BOOKLOOK_H__0FDC5DC7_90C9_408C_90D2_2C0A80D63512__INCLUDED_)
