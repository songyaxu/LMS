#if !defined(AFX_CONFIGMANAGE_H__F235A3AB_6342_4C0A_AABE_FA8A548E5867__INCLUDED_)
#define AFX_CONFIGMANAGE_H__F235A3AB_6342_4C0A_AABE_FA8A548E5867__INCLUDED_

#include "Config.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ConfigManage.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CConfigManage dialog

class CConfigManage : public CDialog
{
// Construction
public:
	CConfig m_pConfig;
	CDatabase m_database;
	CConfigManage(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CConfigManage)
	enum { IDD = IDD_DIALOG_BORROWMANAGE };
	CListCtrl	m_ctrList;
	CString	m_name;
	int		m_maxnum;
	int		m_samenum;
	int		m_fee;
	int		m_time;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CConfigManage)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CConfigManage)
	virtual BOOL OnInitDialog();
	afx_msg void OnCancelMode();
	afx_msg void OnClickList1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnModify();
	afx_msg void OnPaint();
	afx_msg void OnCaptureChanged(CWnd *pWnd);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CONFIGMANAGE_H__F235A3AB_6342_4C0A_AABE_FA8A548E5867__INCLUDED_)
