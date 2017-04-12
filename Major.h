#if !defined(AFX_MAJOR_H__83F58644_4709_417F_AB84_2745861BEE58__INCLUDED_)
#define AFX_MAJOR_H__83F58644_4709_417F_AB84_2745861BEE58__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Major.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CMajor recordset

class CMajor : public CRecordset
{
public:
	CMajor(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CMajor)

// Field/Param Data
	//{{AFX_FIELD(CMajor, CRecordset)
	long	m_Mid;
	CString	m_MajorNo;
	CString	m_MajorName;
	CString	m_DeptNo;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMajor)
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

#endif // !defined(AFX_MAJOR_H__83F58644_4709_417F_AB84_2745861BEE58__INCLUDED_)
