// Renewal.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "Renewal.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CRenewal

IMPLEMENT_DYNAMIC(CRenewal, CRecordset)

CRenewal::CRenewal(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CRenewal)
	m_Rno = 0;
	m_Uno = _T("");
	m_Uname = _T("");
	m_ISBN = _T("");
	m_Bname = _T("");
	m_nFields = 5;
	//}}AFX_FIELD_INIT
	m_nDefaultType = dynaset;
}


CString CRenewal::GetDefaultConnect()
{
	return _T("ODBC;DSN=图书管理系统");
}

CString CRenewal::GetDefaultSQL()
{
	return _T("[dbo].[Renewal]");
}

void CRenewal::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CRenewal)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Long(pFX, _T("[Rno]"), m_Rno);
	RFX_Text(pFX, _T("[Uno]"), m_Uno);
	RFX_Text(pFX, _T("[Uname]"), m_Uname);
	RFX_Text(pFX, _T("[ISBN]"), m_ISBN);
	RFX_Text(pFX, _T("[Bname]"), m_Bname);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CRenewal diagnostics

#ifdef _DEBUG
void CRenewal::AssertValid() const
{
	CRecordset::AssertValid();
}

void CRenewal::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
