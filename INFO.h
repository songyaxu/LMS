#if !defined(AFX_INFO_H__69E014A6_A888_4C26_9974_62C746F4288E__INCLUDED_)
#define AFX_INFO_H__69E014A6_A888_4C26_9974_62C746F4288E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// INFO.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CINFO dialog

class CINFO : public CDialog
{
// Construction
public:
	CINFO(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CINFO)
	enum { IDD = IDD_DIALOG_INFO };
	CComboBox	m_class;
	CComboBox	m_major;
	CComboBox	m_dept;
	CComboBox	m_date;
	CComboBox	m_sex;
	CComboBox	m_type;
	CString	m_name;
	CString	m_no;
	CString	m_phone;
	CString	m_email;
	int		m_age;
	CString	m_beizhu;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CINFO)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CINFO)
	virtual BOOL OnInitDialog();
	afx_msg void OnModifypassword();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INFO_H__69E014A6_A888_4C26_9974_62C746F4288E__INCLUDED_)
