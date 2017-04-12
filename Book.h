#if !defined(AFX_BOOK_H__4C90D81C_11C4_41D3_8EEF_CBDD3ED10FD8__INCLUDED_)
#define AFX_BOOK_H__4C90D81C_11C4_41D3_8EEF_CBDD3ED10FD8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Book.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CBook recordset

class CBook : public CRecordset
{
public:
	CBook(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CBook)

// Field/Param Data
	//{{AFX_FIELD(CBook, CRecordset)
	long	m_Bid;
	CString	m_ISBN;
	CString	m_Bname;
	CString	m_Bpublish;
	CString	m_Beditor;
	CString	m_Bcontents;
	CString	m_Bplace;
	double	m_Bprice;
	long	m_Bnum;
	long	m_Bstore;
	long	m_twoNo;
	CString	m_Bremarks;
	CString	m_BpublishTime;
	CString	m_BprintTime;
	CString	m_Bcover;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBook)
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

#endif // !defined(AFX_BOOK_H__4C90D81C_11C4_41D3_8EEF_CBDD3ED10FD8__INCLUDED_)
