#if !defined(AFX_DEPTMANAGE_H__C694EC36_E315_4820_9100_453DD6DF5ED0__INCLUDED_)
#define AFX_DEPTMANAGE_H__C694EC36_E315_4820_9100_453DD6DF5ED0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DeptManage.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDeptManage dialog

class CDeptManage : public CDialog
{
// Construction
public:
	CDatabase m_database;
	CString str1;
	CDeptManage(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDeptManage)
	enum { IDD = IDD_DIALOG_DEMPTMANAGE };
	CListCtrl	m_ctrList;
	CTreeCtrl	m_ctlTree;
	CString	m_data;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDeptManage)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	CImageList m_imageList;
	// Generated message map functions
	//{{AFX_MSG(CDeptManage)
	virtual BOOL OnInitDialog();
	afx_msg void OnCancelMode();
	afx_msg void OnPaint();
	afx_msg void OnEndlabeleditTree1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnButton1();
	afx_msg void OnRclickTree1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnAdd();
	afx_msg void OnDelete();
	afx_msg void OnEditClass();
	afx_msg void OnAddNewClass();
	afx_msg void OnDeleteClass();
	afx_msg void OnGetdispinfoList1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnBeginlabeleditList1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCaptureChanged(CWnd *pWnd);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg int OnCharToItem(UINT nChar, CListBox* pListBox, UINT nIndex);
	afx_msg void OnClose();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DEPTMANAGE_H__C694EC36_E315_4820_9100_453DD6DF5ED0__INCLUDED_)
