#if !defined(AFX_NINDEX_H__E1525376_F7B5_4B42_9A11_9B81B42DAC69__INCLUDED_)
#define AFX_NINDEX_H__E1525376_F7B5_4B42_9A11_9B81B42DAC69__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Nindex.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CNindex dialog

class CNindex : public CDialog
{
// Construction
public:
	CDatabase m_database;
	CNindex(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CNindex)
	enum { IDD = IDD_DIALOG_NINDEX };
	int		m_radio;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNindex)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CNindex)
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NINDEX_H__E1525376_F7B5_4B42_9A11_9B81B42DAC69__INCLUDED_)
