// Class.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "Class.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CClass

IMPLEMENT_DYNAMIC(CClass, CRecordset)

CClass::CClass(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CClass)
	m_Cid = 0;
	m_ClassNo = _T("");
	m_ClassName = _T("");
	m_MajorNo = _T("");
	m_nFields = 4;
	//}}AFX_FIELD_INIT
	m_nDefaultType = dynaset;
}


CString CClass::GetDefaultConnect()
{
	return _T("ODBC;DSN=图书管理系统");
}

CString CClass::GetDefaultSQL()
{
	return _T("[dbo].[Class]");
}

void CClass::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CClass)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Long(pFX, _T("[Cid]"), m_Cid);
	RFX_Text(pFX, _T("[ClassNo]"), m_ClassNo);
	RFX_Text(pFX, _T("[ClassName]"), m_ClassName);
	RFX_Text(pFX, _T("[MajorNo]"), m_MajorNo);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CClass diagnostics

#ifdef _DEBUG
void CClass::AssertValid() const
{
	CRecordset::AssertValid();
}

void CClass::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
