#if !defined(AFX_PUNISH_H__6922271A_9C54_4D46_81EC_7BE819D4FEC8__INCLUDED_)
#define AFX_PUNISH_H__6922271A_9C54_4D46_81EC_7BE819D4FEC8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Punish.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CPunish recordset

class CPunish : public CRecordset
{
public:
	CPunish(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CPunish)

// Field/Param Data
	//{{AFX_FIELD(CPunish, CRecordset)
	long	m_Pno;
	CString	m_Uno;
	CString	m_Uname;
	CString	m_ISBN;
	CString	m_Bname;
	CString	m_Reason;
	double	m_Fee;
	long	m_BorrId;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPunish)
	public:
	virtual CString GetDefaultConnect();    // Default connection string
	virtual CString GetDefaultSQL();    // Default SQL for Recordset
	virtual void DoFieldExchange(CFieldExchange* pFX);  // RFX support
	//}}AFX_VIRTUAL

// Implementation
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PUNISH_H__6922271A_9C54_4D46_81EC_7BE819D4FEC8__INCLUDED_)
