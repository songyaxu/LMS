#if !defined(AFX_MODIFYPASSWORD_H__73D58CE1_C9D8_4CA4_BD53_930FA29F0C37__INCLUDED_)
#define AFX_MODIFYPASSWORD_H__73D58CE1_C9D8_4CA4_BD53_930FA29F0C37__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ModifyPassword.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CModifyPassword dialog

class CModifyPassword : public CDialog
{
// Construction
public:
	CDatabase m_database;
	CModifyPassword(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CModifyPassword)
	enum { IDD = IDD_DIALOG_MODIFYPASSWORD };
	CString	m_oldpwd;
	CString	m_newpwd;
	CString	m_conformpwd;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CModifyPassword)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CModifyPassword)
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MODIFYPASSWORD_H__73D58CE1_C9D8_4CA4_BD53_930FA29F0C37__INCLUDED_)
