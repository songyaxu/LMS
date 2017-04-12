#if !defined(AFX_NEWBOOK_H__D9567B4A_7EDD_48AC_A2D1_7573F7471D56__INCLUDED_)
#define AFX_NEWBOOK_H__D9567B4A_7EDD_48AC_A2D1_7573F7471D56__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// NewBook.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CNewBook dialog

class CNewBook : public CDialog
{
// Construction
public:
	CString FilePath;
	CDatabase m_database;
	CNewBook(CWnd* pParent = NULL);   // standard constructor
// Dialog Data
	//{{AFX_DATA(CNewBook)
	enum { IDD = IDD_DIALOG_NEWBOOK };
	CComboBox	m_one;
	CComboBox	m_two;
	CString	m_isbn;
	CString	m_name;
	int		m_num;
	double	m_price;
	CString	m_pleace;
	CString	m_publish;
	CString	m_remarks;
	CString	m_time;
	CString	m_version;
	CString	m_writer;
	CString	m_contens;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNewBook)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CNewBook)
	afx_msg void OnOpen();
	afx_msg void OnPaint();
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	afx_msg void OnCancelMode();
	afx_msg void OnDropdownTwo();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:

protected:
	int m_nScale;	//缩放比例
	LPPICTURE	m_lPciture;//图像对象
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NEWBOOK_H__D9567B4A_7EDD_48AC_A2D1_7573F7471D56__INCLUDED_)
