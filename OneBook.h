#if !defined(AFX_ONEBOOK_H__0B401307_AB6F_4F5E_AEB9_7723744A9EB1__INCLUDED_)
#define AFX_ONEBOOK_H__0B401307_AB6F_4F5E_AEB9_7723744A9EB1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// OneBook.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// COneBook recordset

class COneBook : public CRecordset
{
public:
	COneBook(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(COneBook)

// Field/Param Data
	//{{AFX_FIELD(COneBook, CRecordset)
	long	m_oneNo;
	CString	m_oneName;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COneBook)
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

#endif // !defined(AFX_ONEBOOK_H__0B401307_AB6F_4F5E_AEB9_7723744A9EB1__INCLUDED_)
