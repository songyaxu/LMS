#if !defined(AFX_ADMIN_H__F3E3B6CC_93D6_4B07_A3FD_C8A1A990DF8A__INCLUDED_)
#define AFX_ADMIN_H__F3E3B6CC_93D6_4B07_A3FD_C8A1A990DF8A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Admin.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CAdmin recordset

class CAdmin : public CRecordset
{
public:
	CAdmin(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CAdmin)

// Field/Param Data
	//{{AFX_FIELD(CAdmin, CRecordset)
	long	m_Aid;
	CString	m_Aname;
	CString	m_Apwd;
	long	m_Atype;
	CString	m_Alasttime;
	CString	m_Aremarks;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAdmin)
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

#endif // !defined(AFX_ADMIN_H__F3E3B6CC_93D6_4B07_A3FD_C8A1A990DF8A__INCLUDED_)
