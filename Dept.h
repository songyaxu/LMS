#if !defined(AFX_DEPT_H__A51487C7_C63E_43DD_BD5C_EDD6785CCC34__INCLUDED_)
#define AFX_DEPT_H__A51487C7_C63E_43DD_BD5C_EDD6785CCC34__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Dept.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDept recordset

class CDept : public CRecordset
{
public:
	CDept(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CDept)

// Field/Param Data
	//{{AFX_FIELD(CDept, CRecordset)
	long	m_Did;
	CString	m_DeptNo;
	CString	m_DeptName;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDept)
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

#endif // !defined(AFX_DEPT_H__A51487C7_C63E_43DD_BD5C_EDD6785CCC34__INCLUDED_)
