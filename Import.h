#if !defined(AFX_IMPORT_H__C2023545_56CE_4221_ACA8_0488EA2F57EA__INCLUDED_)
#define AFX_IMPORT_H__C2023545_56CE_4221_ACA8_0488EA2F57EA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Import.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CImport dialog

class CImport : public CDialog
{
// Construction
public:
	bool Yn;
	CImport(CWnd* pParent = NULL);   // standard constructor								
// Dialog Data
	//{{AFX_DATA(CImport)
	enum { IDD = IDD_DIALOG_EXPORT };
	int		m_radio;
	CString	m_strTitle;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CImport)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CImport)
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	afx_msg void OnCancelMode();
	afx_msg void OnPaint();
	afx_msg void OnCaptureChanged(CWnd *pWnd);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IMPORT_H__C2023545_56CE_4221_ACA8_0488EA2F57EA__INCLUDED_)
