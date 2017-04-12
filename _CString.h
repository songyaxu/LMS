// _CString.h: interface for the _CString class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX__CSTRING_H__95DC954B_B432_4511_8A04_CD9829C1A74C__INCLUDED_)
#define AFX__CSTRING_H__95DC954B_B432_4511_8A04_CD9829C1A74C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class _CString  
{
public:
	CString str;
	_CString *Next;
	int GetCount();
	void Insert(CString str);
	bool Find(CString str);
	_CString();
	virtual ~_CString();

};

#endif // !defined(AFX__CSTRING_H__95DC954B_B432_4511_8A04_CD9829C1A74C__INCLUDED_)
