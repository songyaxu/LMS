// Borrow.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "Borrow.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBorrow

IMPLEMENT_DYNAMIC(CBorrow, CRecordset)

CBorrow::CBorrow(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CBorrow)

	m_BorrId = 0;
	m_Uno = _T("");
	m_Uname = _T("");
	m_ISBN = _T("");
	m_Bname = _T("");
	m_BorrNum = 0;
	m_BorrTime = _T("");
	m_ReturnTime = _T("");
	m_Tstatus = 0;
	m_nFields = 9;
	//}}AFX_FIELD_INIT
	m_nDefaultType = dynaset;
}


CString CBorrow::GetDefaultConnect()
{
	return _T("ODBC;DSN=图书管理系统");
}

CString CBorrow::GetDefaultSQL()
{
	return _T("[dbo].[Borrow]");
}

void CBorrow::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CBorrow)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Long(pFX, _T("[BorrId]"), m_BorrId);
	RFX_Text(pFX, _T("[Uno]"), m_Uno);
	RFX_Text(pFX, _T("[Uname]"), m_Uname);
	RFX_Text(pFX, _T("[ISBN]"), m_ISBN);
	RFX_Text(pFX, _T("[Bname]"), m_Bname);
	RFX_Long(pFX, _T("[BorrNum]"), m_BorrNum);
	RFX_Text(pFX, _T("[BorrTime]"), m_BorrTime);
	RFX_Text(pFX, _T("[ReturnTime]"), m_ReturnTime);
	RFX_Long(pFX, _T("[Tstatus]"), m_Tstatus);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CBorrow diagnostics

#ifdef _DEBUG
void CBorrow::AssertValid() const
{
	CRecordset::AssertValid();
}

void CBorrow::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
