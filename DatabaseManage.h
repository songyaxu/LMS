#if !defined(AFX_DATABASEMANAGE_H__7B2B5204_FF1A_4A9E_9D65_B20313EEF76D__INCLUDED_)
#define AFX_DATABASEMANAGE_H__7B2B5204_FF1A_4A9E_9D65_B20313EEF76D__INCLUDED_

#include "Admin.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DatabaseManage.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDatabaseManage dialog

class CDatabaseManage : public CDialog
{
// Construction
public:
	CAdmin m_pAdmin;
	CDatabase m_database;
	CDatabaseManage(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDatabaseManage)
	enum { IDD = IDD_DIALOG_DATABASEMANAGE };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDatabaseManage)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDatabaseManage)
	afx_msg void OnAdd();
	afx_msg void OnDatacopy();
	virtual BOOL OnInitDialog();
	afx_msg void OnCancelMode();
	afx_msg void OnDatadiffcopy();
	afx_msg void OnDatalogcopy();
	afx_msg void OnnIndexRebuild();
	afx_msg void OnPaint();
	afx_msg void OnCaptureChanged(CWnd *pWnd);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DATABASEMANAGE_H__7B2B5204_FF1A_4A9E_9D65_B20313EEF76D__INCLUDED_)
