// Reader.cpp : implementation file
//

#include "stdafx.h"
#include "LMS.h"
#include "Reader.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CReader

IMPLEMENT_DYNAMIC(CReader, CRecordset)

CReader::CReader(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CReader)
	m_Uno = _T("");
	m_Uname = _T("");
	m_Ujob = _T("");
	m_Usex = _T("");
	m_Uage = 0;
	m_Ubirthday = _T("");
	m_DeptNo = _T("");
	m_MajorNo = _T("");
	m_ClassNo = _T("");
	m_Uphone = _T("");
	m_Uemail = _T("");
	m_Uremarks = _T("");
	m_Upwd = _T("");
	m_Ustatus = 0;
	m_Ulasttime = _T("");
	m_nFields = 15;
	//}}AFX_FIELD_INIT
	m_nDefaultType = dynaset;
}


CString CReader::GetDefaultConnect()
{
	return _T("ODBC;DSN=图书管理系统");
}

CString CReader::GetDefaultSQL()
{
	return _T("[dbo].[UserInfo]");
}

void CReader::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CReader)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[Uno]"), m_Uno);
	RFX_Text(pFX, _T("[Uname]"), m_Uname);
	RFX_Text(pFX, _T("[Ujob]"), m_Ujob);
	RFX_Text(pFX, _T("[Usex]"), m_Usex);
	RFX_Long(pFX, _T("[Uage]"), m_Uage);
	RFX_Text(pFX, _T("[Ubirthday]"), m_Ubirthday);
	RFX_Text(pFX, _T("[DeptNo]"), m_DeptNo);
	RFX_Text(pFX, _T("[MajorNo]"), m_MajorNo);
	RFX_Text(pFX, _T("[ClassNo]"), m_ClassNo);
	RFX_Text(pFX, _T("[Uphone]"), m_Uphone);
	RFX_Text(pFX, _T("[Uemail]"), m_Uemail);
	RFX_Text(pFX, _T("[Uremarks]"), m_Uremarks);
	RFX_Text(pFX, _T("[Upwd]"), m_Upwd);
	RFX_Long(pFX, _T("[Ustatus]"), m_Ustatus);
	RFX_Text(pFX, _T("[Ulasttime]"), m_Ulasttime);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CReader diagnostics

#ifdef _DEBUG
void CReader::AssertValid() const
{
	CRecordset::AssertValid();
}

void CReader::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
