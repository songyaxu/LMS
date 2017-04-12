#if !defined(AFX_TWOBOOK_H__6F2CF26E_A249_4CEE_906B_6C59FD5BC447__INCLUDED_)
#define AFX_TWOBOOK_H__6F2CF26E_A249_4CEE_906B_6C59FD5BC447__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TwoBook.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CTwoBook recordset

class CTwoBook : public CRecordset
{
public:
	CTwoBook(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CTwoBook)

// Field/Param Data
	//{{AFX_FIELD(CTwoBook, CRecordset)
	long	m_twoNo;
	CString	m_twoName;
	long	m_oneNo;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTwoBook)
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

#endif // !defined(AFX_TWOBOOK_H__6F2CF26E_A249_4CEE_906B_6C59FD5BC447__INCLUDED_)
