// Config.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "Config.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CConfig

IMPLEMENT_DYNAMIC(CConfig, CRecordset)

CConfig::CConfig(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CConfig)
	m_Cid = 0;
	m_Cname = _T("");
	m_MaxNum = 0;
	m_Time = 0;
	m_Punish = 0;
	m_SameNum = 0;
	m_nFields = 6;
	//}}AFX_FIELD_INIT
	m_nDefaultType = dynaset;
}


CString CConfig::GetDefaultConnect()
{
	return _T("ODBC;DSN=图书管理系统");
}

CString CConfig::GetDefaultSQL()
{
	return _T("[dbo].[Config]");
}

void CConfig::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CConfig)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Long(pFX, _T("[Cid]"), m_Cid);
	RFX_Text(pFX, _T("[Cname]"), m_Cname);
	RFX_Long(pFX, _T("[MaxNum]"), m_MaxNum);
	RFX_Long(pFX, _T("[Time]"), m_Time);
	RFX_Long(pFX, _T("[Punish]"), m_Punish);
	RFX_Long(pFX, _T("[SameNum]"), m_SameNum);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CConfig diagnostics

#ifdef _DEBUG
void CConfig::AssertValid() const
{
	CRecordset::AssertValid();
}

void CConfig::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
