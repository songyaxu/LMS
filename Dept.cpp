// Dept.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "Dept.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDept

IMPLEMENT_DYNAMIC(CDept, CRecordset)

CDept::CDept(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CDept)
	m_Did = 0;
	m_DeptNo = _T("");
	m_DeptName = _T("");
	m_nFields = 3;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}


CString CDept::GetDefaultConnect()
{
	return _T("ODBC;DSN=图书管理系统");
}

CString CDept::GetDefaultSQL()
{
	return _T("[dbo].[Dept]");
}

void CDept::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CDept)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Long(pFX, _T("[Did]"), m_Did);
	RFX_Text(pFX, _T("[DeptNo]"), m_DeptNo);
	RFX_Text(pFX, _T("[DeptName]"), m_DeptName);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CDept diagnostics

#ifdef _DEBUG
void CDept::AssertValid() const
{
	CRecordset::AssertValid();
}

void CDept::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
