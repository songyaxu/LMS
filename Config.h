#if !defined(AFX_CONFIG_H__D9DDB101_843D_40A5_AB6D_82E7A4F2CF71__INCLUDED_)
#define AFX_CONFIG_H__D9DDB101_843D_40A5_AB6D_82E7A4F2CF71__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Config.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CConfig recordset

class CConfig : public CRecordset
{
public:
	CConfig(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CConfig)

// Field/Param Data
	//{{AFX_FIELD(CConfig, CRecordset)
	long	m_Cid;
	CString	m_Cname;
	long	m_MaxNum;
	long	m_Time;
	long	m_Punish;
	long	m_SameNum;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CConfig)
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

#endif // !defined(AFX_CONFIG_H__D9DDB101_843D_40A5_AB6D_82E7A4F2CF71__INCLUDED_)
