#if !defined(AFX_RENEWAL_H__86E1D186_C1F0_441E_BAC5_328484CE562B__INCLUDED_)
#define AFX_RENEWAL_H__86E1D186_C1F0_441E_BAC5_328484CE562B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Renewal.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CRenewal recordset

class CRenewal : public CRecordset
{
public:
	CRenewal(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CRenewal)

// Field/Param Data
	//{{AFX_FIELD(CRenewal, CRecordset)
	long	m_Rno;
	CString	m_Uno;
	CString	m_Uname;
	CString	m_ISBN;
	CString	m_Bname;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRenewal)
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

#endif // !defined(AFX_RENEWAL_H__86E1D186_C1F0_441E_BAC5_328484CE562B__INCLUDED_)
