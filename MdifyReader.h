#if !defined(AFX_MDIFYREADER_H__A83AFF62_F6B2_497E_92CD_F4B9FBB1A205__INCLUDED_)
#define AFX_MDIFYREADER_H__A83AFF62_F6B2_497E_92CD_F4B9FBB1A205__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MdifyReader.h : header file
//
#include "Major.h"
#include "Dept.h"
#include "Class.h"	// Added by ClassView
/////////////////////////////////////////////////////////////////////////////
// CMdifyReader dialog

class CMdifyReader : public CDialog
{
// Construction
public:
	CClass m_pClass;
	CDatabase m_database;
	CMajor m_pMajor;
	CDept m_pDept;
	CMdifyReader(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CMdifyReader)
	enum { IDD = IDD_DIALOG_MODIFYREADER };
	CEdit	m_e1;
	CDateTimeCtrl	m_date;
	CComboBox	m_class;
	CComboBox	m_dept;
	CComboBox	m_major;
	CComboBox	m_sex;
	CComboBox	m_type;
	CString	m_name;
	CString	m_no;
	CString	m_phone;
	CString	m_email;
	int		m_age;
	CString	m_status;
	CString	m_remark;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMdifyReader)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CMdifyReader)
	virtual BOOL OnInitDialog();
	afx_msg void OnCancelMode();
	afx_msg void OnDropdownCombo1();
	afx_msg void OnDropdownCombo6();
	afx_msg void OnDropdownCombo5();
	afx_msg void OnDropdownCombo7();
	afx_msg void OnConform();
	afx_msg void OnPaint();
	afx_msg void OnCaptureChanged(CWnd *pWnd);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MDIFYREADER_H__A83AFF62_F6B2_497E_92CD_F4B9FBB1A205__INCLUDED_)
