#if !defined(AFX_QUERYREASON_H__CE247CAE_6DC1_4665_8AA7_924D6D16F950__INCLUDED_)
#define AFX_QUERYREASON_H__CE247CAE_6DC1_4665_8AA7_924D6D16F950__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// QUERYREASON.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CQUERYREASON dialog

struct _strSQL
{
	CString str[50];
	int count;
};
class CQUERYREASON : public CDialog
{
// Construction
public:
	_strSQL strSQL;
	CString Distinguish(int nIndex1,int nIndex,int radio,CString str);
	CQUERYREASON(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CQUERYREASON)
	enum { IDD = IDD_DIALOG_QUERYREADER };
	CListBox	m_list;
	CComboBox	m_condition;
	CComboBox	m_item;
	int		m_radio;
	CString	m_value;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CQUERYREASON)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CQUERYREASON)
	virtual BOOL OnInitDialog();
	afx_msg void OnAddnew();
	afx_msg void OnAddto();
	afx_msg void OnPaint();
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_QUERYREASON_H__CE247CAE_6DC1_4665_8AA7_924D6D16F950__INCLUDED_)
