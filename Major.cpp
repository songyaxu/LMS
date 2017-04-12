// Major.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "Major.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMajor

IMPLEMENT_DYNAMIC(CMajor, CRecordset)

CMajor::CMajor(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CMajor)
	m_Mid = 0;
	m_MajorNo = _T("");
	m_MajorName = _T("");
	m_DeptNo = _T("");
	m_nFields = 4;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}


CString CMajor::GetDefaultConnect()
{
	return _T("ODBC;DSN=图书管理系统");
}

CString CMajor::GetDefaultSQL()
{
	return _T("[dbo].[Major]");
}

void CMajor::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CMajor)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Long(pFX, _T("[Mid]"), m_Mid);
	RFX_Text(pFX, _T("[MajorNo]"), m_MajorNo);
	RFX_Text(pFX, _T("[MajorName]"), m_MajorName);
	RFX_Text(pFX, _T("[DeptNo]"), m_DeptNo);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CMajor diagnostics

#ifdef _DEBUG
void CMajor::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMajor::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
