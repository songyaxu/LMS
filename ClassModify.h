#if !defined(AFX_CLASSMODIFY_H__60C01CA2_63DB_44FF_B6E2_6EC7DF54F56C__INCLUDED_)
#define AFX_CLASSMODIFY_H__60C01CA2_63DB_44FF_B6E2_6EC7DF54F56C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ClassModify.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CClassModify dialog

class CClassModify : public CDialog
{
// Construction
public:
	CClassModify(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CClassModify)
	enum { IDD = IDD_DIALOG_CLASSMODIFY };
	CString	m_classno;
	CString	m_classname;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CClassModify)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CClassModify)
	virtual void OnOK();
	afx_msg void OnPaint();
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CLASSMODIFY_H__60C01CA2_63DB_44FF_B6E2_6EC7DF54F56C__INCLUDED_)
