#if !defined(AFX_DELETEREADER_H__157263AC_1FAE_4B8E_A882_985CD999748F__INCLUDED_)
#define AFX_DELETEREADER_H__157263AC_1FAE_4B8E_A882_985CD999748F__INCLUDED_

#include "Reader.h"	// Added by ClassView
#include "Class.h"	// Added by ClassView
#include "Dept.h"	// Added by ClassView
#include "Major.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DeleteReader.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDeleteReader dialog

class CDeleteReader : public CDialog
{
// Construction
public:
	CMajor m_pMajor;
	CDept m_pDept;
	CClass m_pClass;
	CString Adjust(int x);
	CDatabase m_database;
	CReader m_pReader;
	CDeleteReader(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDeleteReader)
	enum { IDD = IDD_DIALOG_DELETEREADER };
	CListCtrl	m_ctrList;
	CComboBox	m_item;
	CString	m_reason;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDeleteReader)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDeleteReader)
	virtual BOOL OnInitDialog();
	afx_msg void OnQuery();
	afx_msg void OnDelete();
	afx_msg void OnPaint();
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DELETEREADER_H__157263AC_1FAE_4B8E_A882_985CD999748F__INCLUDED_)
