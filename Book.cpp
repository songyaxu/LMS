// Book.cpp : implementation file
//

#include "stdafx.h"
#include "LMS.h"
#include "Book.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBook

IMPLEMENT_DYNAMIC(CBook, CRecordset)

CBook::CBook(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CBook)
	m_Bid = 0;
	m_ISBN = _T("");
	m_Bname = _T("");
	m_Bpublish = _T("");
	m_Beditor = _T("");
	m_Bcontents = _T("");
	m_Bplace = _T("");
	m_Bprice = 0.0;
	m_Bnum = 0;
	m_Bstore = 0;
	m_twoNo = 0;
	m_Bremarks = _T("");
	m_BpublishTime = _T("");
	m_BprintTime = _T("");
	m_Bcover = _T("");
	m_nFields = 15;
	//}}AFX_FIELD_INIT
	m_nDefaultType = dynaset;
}


CString CBook::GetDefaultConnect()
{
	return _T("ODBC;DSN=图书管理系统");
}

CString CBook::GetDefaultSQL()
{
	return _T("[dbo].[Book]");
}

void CBook::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CBook)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Long(pFX, _T("[Bid]"), m_Bid);
	RFX_Text(pFX, _T("[ISBN]"), m_ISBN);
	RFX_Text(pFX, _T("[Bname]"), m_Bname);
	RFX_Text(pFX, _T("[Bpublish]"), m_Bpublish);
	RFX_Text(pFX, _T("[Beditor]"), m_Beditor);
	RFX_Text(pFX, _T("[Bcontents]"), m_Bcontents);
	RFX_Text(pFX, _T("[Bplace]"), m_Bplace);
	RFX_Double(pFX, _T("[Bprice]"), m_Bprice);
	RFX_Long(pFX, _T("[Bnum]"), m_Bnum);
	RFX_Long(pFX, _T("[Bstore]"), m_Bstore);
	RFX_Long(pFX, _T("[twoNo]"), m_twoNo);
	RFX_Text(pFX, _T("[Bremarks]"), m_Bremarks);
	RFX_Text(pFX, _T("[BpublishTime]"), m_BpublishTime);
	RFX_Text(pFX, _T("[BprintTime]"), m_BprintTime);
	RFX_Text(pFX, _T("[Bcover]"), m_Bcover);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CBook diagnostics

#ifdef _DEBUG
void CBook::AssertValid() const
{
	CRecordset::AssertValid();
}

void CBook::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
