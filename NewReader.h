#if !defined(AFX_NEWREADER_H__76C74A24_FAF3_47AD_A837_1C140ADC1670__INCLUDED_)
#define AFX_NEWREADER_H__76C74A24_FAF3_47AD_A837_1C140ADC1670__INCLUDED_

#include "Reader.h"	// Added by ClassView
#include "Dept.h"
#include "Class.h"
#include "Major.h"
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// NewReader.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CNewReader dialog

class CNewReader : public CDialog
{
// Construction
public:
	int tag;
	CDatabase m_database;
	CDept m_pDept;
	CMajor m_pMajor;
	CClass m_pClass;
	CNewReader(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CNewReader)
	enum { IDD = IDD_DIALOG_NEWREADER };
	CDateTimeCtrl	m_date;
	CComboBox	m_dept;
	CEdit	m_states;
	CComboBox	m_major;
	CComboBox	m_class;
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
	//{{AFX_VIRTUAL(CNewReader)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CNewReader)
	virtual BOOL OnInitDialog();
	afx_msg void OnDropdownCombo5();
	afx_msg void OnDropdownCombo6();
	virtual void OnOK();
	afx_msg void OnPaint();
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NEWREADER_H__76C74A24_FAF3_47AD_A837_1C140ADC1670__INCLUDED_)
