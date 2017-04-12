// TwoBook.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "TwoBook.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTwoBook

IMPLEMENT_DYNAMIC(CTwoBook, CRecordset)

CTwoBook::CTwoBook(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CTwoBook)
	m_twoNo = 0;
	m_twoName = _T("");
	m_oneNo = 0;
	m_nFields = 3;
	//}}AFX_FIELD_INIT
	m_nDefaultType = dynaset;
}


CString CTwoBook::GetDefaultConnect()
{
	return _T("ODBC;DSN=图书管理系统");
}

CString CTwoBook::GetDefaultSQL()
{
	return _T("[dbo].[TwoBook]");
}

void CTwoBook::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CTwoBook)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Long(pFX, _T("[twoNo]"), m_twoNo);
	RFX_Text(pFX, _T("[twoName]"), m_twoName);
	RFX_Long(pFX, _T("[oneNo]"), m_oneNo);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CTwoBook diagnostics

#ifdef _DEBUG
void CTwoBook::AssertValid() const
{
	CRecordset::AssertValid();
}

void CTwoBook::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
