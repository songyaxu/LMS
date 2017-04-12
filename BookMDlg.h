#if !defined(AFX_BOOKMDLG_H__C23702F1_41B5_41F7_AD73_DC6BC95369AB__INCLUDED_)
#define AFX_BOOKMDLG_H__C23702F1_41B5_41F7_AD73_DC6BC95369AB__INCLUDED_

#include "BtnST.h"	// Added by ClassView
#include "Book.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BookMDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CBookMDlg dialog
class CBookMDlg : public CDialog
{
// Construction
public:
	void OnWordPrint(CString strTitle);
	void OnExcelPrint(CString strTitle);
	CBook m_pBook;
	CString GetValues(int nIndex);
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
	CButtonST m_btn9;
	void OnImportExcel(CString filePathName);
	CBookMDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CBookMDlg)
	enum { IDD = IDD_DIALOG_BOOKM };
	CComboBox	m_combo;
	CListCtrl	m_ctrList;
	CString	m_editstr;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBookMDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CBookMDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnAddbook();
	afx_msg void OnClose();
	afx_msg void OnSearch();
	afx_msg void OnExcelimport();
	afx_msg void OnQueryreason();
	afx_msg void OnPrint();
	afx_msg void OnImport();
	afx_msg void OnModify();
	afx_msg void OnDblclkList(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnQuery();
	afx_msg void OnDelete();
	afx_msg void OnBOOKmanage();
	afx_msg void OnPaint();
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BOOKMDLG_H__C23702F1_41B5_41F7_AD73_DC6BC95369AB__INCLUDED_)
