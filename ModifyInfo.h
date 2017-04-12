#if !defined(AFX_MODIFYINFO_H__D2703EC3_1211_486E_8999_B08280A0DC4C__INCLUDED_)
#define AFX_MODIFYINFO_H__D2703EC3_1211_486E_8999_B08280A0DC4C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ModifyInfo.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CModifyInfo dialog

class CModifyInfo : public CDialog
{
// Construction
public:
	CDatabase m_database;
	CModifyInfo(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CModifyInfo)
	enum { IDD = IDD_DIALOG_MODIFYINFO };
	CComboBox	m_sex;
	CComboBox	m_class;
	CComboBox	m_major;
	CComboBox	m_dept;
	CString	m_name;
	CString	m_no;
	CString	m_phone;
	CString	m_email;
	int		m_age;
	CString	m_states;
	CString	m_remark;
	CString	m_type;
	CString	m_date;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CModifyInfo)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CModifyInfo)
	virtual BOOL OnInitDialog();
	afx_msg void OnModifypwd();
	virtual void OnOK();
	afx_msg void OnPaint();
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MODIFYINFO_H__D2703EC3_1211_486E_8999_B08280A0DC4C__INCLUDED_)
