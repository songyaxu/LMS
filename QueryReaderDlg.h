#if !defined(AFX_QUERYREADERDLG_H__2DCEE558_4050_4917_96A5_D2AC3B85C8EB__INCLUDED_)
#define AFX_QUERYREADERDLG_H__2DCEE558_4050_4917_96A5_D2AC3B85C8EB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// QueryReaderDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CQueryReaderDlg dialog

class CQueryReaderDlg : public CDialog
{
// Construction
public:
	CQueryReaderDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CQueryReaderDlg)
	enum { IDD = IDD_QUERYREADERREASON };
	CComboBox	m_item;
	CComboBox	m_condition;
	int		m_radio;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CQueryReaderDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CQueryReaderDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_QUERYREADERDLG_H__2DCEE558_4050_4917_96A5_D2AC3B85C8EB__INCLUDED_)
