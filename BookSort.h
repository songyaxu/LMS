#if !defined(AFX_BOOKSORT_H__2E3BDA0B_7B44_441A_B17B_325900011C2C__INCLUDED_)
#define AFX_BOOKSORT_H__2E3BDA0B_7B44_441A_B17B_325900011C2C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BookSort.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CBookSort dialog

class CBookSort : public CDialog
{
// Construction
public:
	CString str1;
	CDatabase m_database;
	CBookSort(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CBookSort)
	enum { IDD = IDD_DIALOG_BOOKSORT };
	CTreeCtrl	m_ctlTree;
	CString	m_str;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBookSort)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	CImageList m_imageList;
	// Generated message map functions
	//{{AFX_MSG(CBookSort)
	virtual BOOL OnInitDialog();
	afx_msg void OnCancelMode();
	afx_msg void OnEndlabeleditTree1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnEdit();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnPaint();
	afx_msg void OnCaptureChanged(CWnd *pWnd);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BOOKSORT_H__2E3BDA0B_7B44_441A_B17B_325900011C2C__INCLUDED_)
