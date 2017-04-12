#if !defined(AFX_RADERM_H__48C92714_BECA_416C_8486_70FE4D86911C__INCLUDED_)
#define AFX_RADERM_H__48C92714_BECA_416C_8486_70FE4D86911C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// RADERM.h : header file
//
#include "BtnST.h"
#include "Reader.h"

/////////////////////////////////////////////////////////////////////////////
// CRADERM dialog

class CRADERM : public CDialog
{
// Construction
public:
	CString GetValues(int nIndex);
	void OnWordPrint(CString FilePathName);
	void OnExcelPrint(CString FilePathName);
	void OnExcelImport(CString FilePathName);
	CReader m_pReader;
	CDatabase m_database;
	CButtonST m_btn;
	CButtonST m_btn1;
	CButtonST m_btn2;
	CButtonST m_btn3;
	CButtonST m_btn4;
	CButtonST m_btn5;
	CButtonST m_btn6;
	CButtonST m_btn7;
	CButtonST m_btn8;
	CRADERM(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CRADERM)
	enum { IDD = IDD_DIALOG_RADER };
	CComboBox	m_combo;
	CListCtrl	m_ctrList;
	CString	m_keyword;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRADERM)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CRADERM)
	virtual BOOL OnInitDialog();
	afx_msg void OnClose();
	afx_msg void OnQuery();
	afx_msg void OnAddreader();
	afx_msg void OnExport();
	afx_msg void OnPrint();
	afx_msg void OnButton1();
	afx_msg void OnModify();
	afx_msg void OnDblclkList1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnDelete();
	afx_msg void OnRclickList1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnPaint();
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RADERM_H__48C92714_BECA_416C_8486_70FE4D86911C__INCLUDED_)
