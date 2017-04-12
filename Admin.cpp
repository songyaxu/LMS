// Admin.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "Admin.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAdmin

IMPLEMENT_DYNAMIC(CAdmin, CRecordset)

CAdmin::CAdmin(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CAdmin)
	m_Aid = 0;
	m_Aname = _T("");
	m_Apwd = _T("");
	m_Atype = 0;
	m_Aremarks = _T("");
	m_Alasttime=_T("");
	m_nFields = 6;
	//}}AFX_FIELD_INIT
	m_nDefaultType = dynaset;
}


CString CAdmin::GetDefaultConnect()
{
	return _T("ODBC;DSN=图书管理系统");
}

CString CAdmin::GetDefaultSQL()
{
	return _T("[dbo].[Admin]");
}

void CAdmin::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CAdmin)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Long(pFX, _T("[Aid]"), m_Aid);
	RFX_Text(pFX, _T("[Aname]"), m_Aname);
	RFX_Text(pFX, _T("[Apwd]"), m_Apwd);
	RFX_Long(pFX, _T("[Atype]"), m_Atype);
	RFX_Text(pFX, _T("[Alasttime]"), m_Alasttime);
	RFX_Text(pFX, _T("[Aremarks]"), m_Aremarks);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CAdmin diagnostics

#ifdef _DEBUG
void CAdmin::AssertValid() const
{
	CRecordset::AssertValid();
}

void CAdmin::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
