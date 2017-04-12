#if !defined(AFX_LOGIN_H__BC640047_DADF_41B7_8ED6_4E73F4D9089D__INCLUDED_)
#define AFX_LOGIN_H__BC640047_DADF_41B7_8ED6_4E73F4D9089D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// LOGIN.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CLOGIN dialog

class CLOGIN : public CDialog
{
// Construction
public:
	int m_state;
	int m_count;
	CLOGIN(CWnd* pParent = NULL);   // standard constructor
	CDatabase m_database;
	CFont m_font1;
	CBrush m_brush;
	CFont m_font;
	CRecordset m_pRecord;
// Dialog Data
	//{{AFX_DATA(CLOGIN)
	enum { IDD = IDD_DIALOG_LOGIN };
	CStatic	m_s2;
	CStatic	m_s3;
	CStatic	m_s1;
	CEdit	m_e2;
	CEdit	m_e1;
	CString	m_username;
	CString	m_userpassword;
	int		m_radio;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLOGIN)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CLOGIN)
	virtual BOOL OnInitDialog();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnPaint();
	afx_msg void OnCancel1();
	afx_msg void OnOk1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LOGIN_H__BC640047_DADF_41B7_8ED6_4E73F4D9089D__INCLUDED_)
