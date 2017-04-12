#if !defined(AFX_CLASS_H__073A93B9_9A7C_4D18_893F_324F93047AA7__INCLUDED_)
#define AFX_CLASS_H__073A93B9_9A7C_4D18_893F_324F93047AA7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Class.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CClass recordset

class CClass : public CRecordset
{
public:
	CClass(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CClass)

// Field/Param Data
	//{{AFX_FIELD(CClass, CRecordset)
	long	m_Cid;
	CString	m_ClassNo;
	CString	m_ClassName;
	CString	m_MajorNo;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CClass)
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

#endif // !defined(AFX_CLASS_H__073A93B9_9A7C_4D18_893F_324F93047AA7__INCLUDED_)
