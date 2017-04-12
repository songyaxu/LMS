#if !defined(AFX_ModifyBook_H__37CAE41B_02F7_4913_92A7_164B1042256D__INCLUDED_)
#define AFX_ModifyBook_H__37CAE41B_02F7_4913_92A7_164B1042256D__INCLUDED_

#include "Book.h"	// Added by ClassView
#include "OneBook.h"	// Added by ClassView
#include "TwoBook.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ModifyBook.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CModifyBook dialog

class CModifyBook : public CDialog
{
// Construction
public:
	CString FilePath;
	CTwoBook m_pTwobook;
	COneBook m_pOnebook;
	CBook m_pBook;
	CString Adjust(int x);
	CDatabase m_database;
	CModifyBook(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CModifyBook)
	enum { IDD = IDD_DIALOG_MODIFYBOOK };
	CComboBox	m_one;
	CComboBox	m_two;
	CString	m_isbn;
	CString	m_name;
	int		m_num;
	CString	m_publish;
	CString	m_remark;
	CString	m_time;
	CString	m_pleace;
	CString	m_content;
	int		m_store;
	CString	m_version;
	CString	m_editor;
	double	m_price;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CModifyBook)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CModifyBook)
	afx_msg void OnQuery();
	virtual BOOL OnInitDialog();
	afx_msg void OnCancelMode();
	afx_msg void OnDropdownTwo();
	afx_msg void OnDropdownOne();
	virtual void OnOK();
	afx_msg void OnConform();
	afx_msg void OnOpen();
	afx_msg void OnPaint();
	afx_msg void OnCaptureChanged(CWnd *pWnd);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ModifyBook_H__37CAE41B_02F7_4913_92A7_164B1042256D__INCLUDED_)
