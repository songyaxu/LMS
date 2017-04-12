#if !defined(AFX_PUNISHRECORD_H__E36BBF6F_6802_4B6D_9C6E_B457B8E7D35E__INCLUDED_)
#define AFX_PUNISHRECORD_H__E36BBF6F_6802_4B6D_9C6E_B457B8E7D35E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// PunishRecord.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CPunishRecord dialog

class CPunishRecord : public CDialog
{
// Construction
public:
	CDatabase m_database;
	CPunishRecord(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CPunishRecord)
	enum { IDD = IDD_DIALOG_PUNISHRECORD };
	CListCtrl	m_ctrList;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPunishRecord)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CPunishRecord)
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	afx_msg void OnPaint();
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PUNISHRECORD_H__E36BBF6F_6802_4B6D_9C6E_B457B8E7D35E__INCLUDED_)
