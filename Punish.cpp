// Punish.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "Punish.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPunish

IMPLEMENT_DYNAMIC(CPunish, CRecordset)

CPunish::CPunish(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CPunish)
	m_Pno = 0;
	m_Uno = _T("");
	m_Uname = _T("");
	m_ISBN = _T("");
	m_Bname = _T("");
	m_Reason = _T("");
	m_Fee = 0.0;
	m_BorrId = 0;
	m_nFields = 8;
	//}}AFX_FIELD_INIT
	m_nDefaultType = dynaset;
}


CString CPunish::GetDefaultConnect()
{
	return _T("ODBC;DSN=图书管理系统");
}

CString CPunish::GetDefaultSQL()
{
	return _T("[dbo].[Punish]");
}

void CPunish::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CPunish)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Long(pFX, _T("[Pno]"), m_Pno);
	RFX_Text(pFX, _T("[Uno]"), m_Uno);
	RFX_Text(pFX, _T("[Uname]"), m_Uname);
	RFX_Text(pFX, _T("[ISBN]"), m_ISBN);
	RFX_Text(pFX, _T("[Bname]"), m_Bname);
	RFX_Text(pFX, _T("[Reason]"), m_Reason);
	RFX_Double(pFX, _T("[Fee]"), m_Fee);
	RFX_Long(pFX, _T("[BorrId]"), m_BorrId);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CPunish diagnostics

#ifdef _DEBUG
void CPunish::AssertValid() const
{
	CRecordset::AssertValid();
}

void CPunish::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
