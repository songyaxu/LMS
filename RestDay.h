// RestDay.h: interface for the CRestDay class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_RESTDAY_H__2167039B_5953_4C79_8ECD_B6EE3A16A1DD__INCLUDED_)
#define AFX_RESTDAY_H__2167039B_5953_4C79_8ECD_B6EE3A16A1DD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CRestDay  
{
public:
	int GetMDay(int y,int y1,int m,int d);
	GetYDay(int y,int m,int d);
	int GetDay(CString str,CString str1);
	CRestDay();
	void Findstr(CString str,int &y,int &m,int &d);
	CString GetBorrowTime(CString str,int day);
	virtual ~CRestDay();

};

#endif // !defined(AFX_RESTDAY_H__2167039B_5953_4C79_8ECD_B6EE3A16A1DD__INCLUDED_)
