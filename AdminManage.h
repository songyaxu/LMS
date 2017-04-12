#if !defined(AFX_ADMINMANAGE_H__0EF07CA9_0363_4272_8DD8_BABB5DACCA1A__INCLUDED_)
#define AFX_ADMINMANAGE_H__0EF07CA9_0363_4272_8DD8_BABB5DACCA1A__INCLUDED_

#include "Admin.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AdminManage.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CAdminManage dialog

class CAdminManage : public CDialog
{
// Construction
public:
	CAdmin m_pAdmin;
	CDatabase m_database;
	CAdminManage(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CAdminManage)
	enum { IDD = IDD_DIALOG_ADMINMANAGE };
	CListCtrl	m_ctrList;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAdminManage)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CAdminManage)
	virtual BOOL OnInitDialog();
	afx_msg void OnCancelMode();
	afx_msg void OnDblclkList1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnAddnew();
	afx_msg void OnDelete();
	afx_msg void OnPaint();
	afx_msg void OnCaptureChanged(CWnd *pWnd);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADMINMANAGE_H__0EF07CA9_0363_4272_8DD8_BABB5DACCA1A__INCLUDED_)
