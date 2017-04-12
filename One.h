// One.h: interface for the COne class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ONE_H__5AAE5FF5_6EC0_41AF_8C5F_B0A53565BF6C__INCLUDED_)
#define AFX_ONE_H__5AAE5FF5_6EC0_41AF_8C5F_B0A53565BF6C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
class COne  
{
public:
	struct Info
	{
		int SameNum;
		int Punish;
		int Day;
		int MaxNum;
	};
	Info data;
	COne();
	virtual ~COne();
};

#endif // !defined(AFX_ONE_H__5AAE5FF5_6EC0_41AF_8C5F_B0A53565BF6C__INCLUDED_)
