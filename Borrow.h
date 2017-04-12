#if !defined(AFX_BORROW_H__E08F4E55_090A_4354_BE1F_0564EAD2FC77__INCLUDED_)
#define AFX_BORROW_H__E08F4E55_090A_4354_BE1F_0564EAD2FC77__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Borrow.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CBorrow recordset

class CBorrow : public CRecordset
{
public:
	CBorrow(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CBorrow)

// Field/Param Data
	//{{AFX_FIELD(CBorrow, CRecordset)
	long	m_BorrId;
	CString	m_Uno;
	CString	m_Uname;
	CString	m_ISBN;
	CString	m_Bname;
	long	m_BorrNum;
	CString	m_BorrTime;
	CString	m_ReturnTime;
	long	m_Tstatus;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBorrow)
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

#endif // !defined(AFX_BORROW_H__E08F4E55_090A_4354_BE1F_0564EAD2FC77__INCLUDED_)
