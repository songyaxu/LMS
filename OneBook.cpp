// OneBook.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "OneBook.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// COneBook

IMPLEMENT_DYNAMIC(COneBook, CRecordset)

COneBook::COneBook(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(COneBook)
	m_oneNo = 0;
	m_oneName = _T("");
	m_nFields = 2;
	//}}AFX_FIELD_INIT
	m_nDefaultType = dynaset;
}


CString COneBook::GetDefaultConnect()
{
	return _T("ODBC;DSN=图书管理系统");
}

CString COneBook::GetDefaultSQL()
{
	return _T("[dbo].[OneBook]");
}

void COneBook::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(COneBook)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Long(pFX, _T("[oneNo]"), m_oneNo);
	RFX_Text(pFX, _T("[oneName]"), m_oneName);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// COneBook diagnostics

#ifdef _DEBUG
void COneBook::AssertValid() const
{
	CRecordset::AssertValid();
}

void COneBook::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
