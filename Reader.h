#if !defined(AFX_READER_H__66F0A825_DB2C_4B21_B476_A42AF59A37BC__INCLUDED_)
#define AFX_READER_H__66F0A825_DB2C_4B21_B476_A42AF59A37BC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Reader.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CReader recordset

class CReader : public CRecordset
{
public:
	CReader(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CReader)

// Field/Param Data
	//{{AFX_FIELD(CReader, CRecordset)
	CString	m_Uno;
	CString	m_Uname;
	CString	m_Ujob;
	CString	m_Usex;
	long	m_Uage;
	CString	m_Ubirthday;
	CString	m_DeptNo;
	CString	m_MajorNo;
	CString	m_ClassNo;
	CString	m_Uphone;
	CString	m_Uemail;
	CString	m_Uremarks;
	CString	m_Upwd;
	long	m_Ustatus;
	CString	m_Ulasttime;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CReader)
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

#endif // !defined(AFX_READER_H__66F0A825_DB2C_4B21_B476_A42AF59A37BC__INCLUDED_)
