// RestDay.cpp: implementation of the CRestDay class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "lms.h"
#include "RestDay.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CRestDay::CRestDay()
{

}

CRestDay::~CRestDay()
{

}
void CRestDay::Findstr(CString str,int &y,int &m,int &d)
{
	if(str.Find("-")!=-1)
	{
		sscanf(str,"%d-%d-%d",&y,&m,&d);
	}
	if(str.Find("/")!=-1)
	{
		sscanf(str,"%d/%d/%d",&y,&m,&d);
	}
	if(str.Find("年")!=-1)
	{
		sscanf(str,"%d年%d月%d日",&y,&m,&d);
	}
}
int CRestDay::GetMDay(int y,int y1,int m,int d)
{
    int n1=0;
    for(int i=y;i<y1;i++)
    {
        if(y==i)
        {
            if((y%4==0)&&(y%100!=0)||(y%400==0))
            {
                switch(m)
                {
                    case 1: n1=366-d; break;
                    case 2: n1=335-d;  break;
                    case 3: n1=306-d;  break;
                    case 4: n1=275-d; break;
                    case 5: n1=245-d; break;
                    case 6: n1=214-d; break;
                    case 7: n1=184-d; break;
                    case 8: n1=153-d; break;
                    case 9: n1=122-d; break;
                    case 10: n1=92-d; break;
                    case 11: n1=61-d; break;
                    case 12: n1=30-d;
              }
            }
            else
            {
                switch(m)
                {
                    case 1: n1=365-d; break;
                    case 2: n1=334-d;  break;
                    case 3: n1=306-d;  break;
                    case 4: n1=275-d; break;
                    case 5: n1=245-d; break;
                    case 6: n1=214-d; break;
                    case 7: n1=184-d; break;
                    case 8: n1=153-d; break;
                    case 9: n1=122-d; break;
                    case 10: n1=92-d; break;
                    case 11: n1=61-d; break;
                    case 12: n1=30-d;
              }
            }
        }
        else
        {
            if((y%4==0)&&(y%100!=0)||(y%400==0))
                n1+=366;
            else
                n1+=365;
        }
    }
    return n1;
}
int  CRestDay::GetYDay(int y,int m,int d)
{
    int n1;
    if((y%4==0)&&(y%100!=0)||(y%400==0))
    {  switch(m)
      {
         case 1: n1=d; break;
         case 2: n1=31+d;  break;
         case 3: n1=d+60;  break;
         case 4: n1=d+91; break;
         case 5:    n1=d+121; break;
         case 6:    n1=d+152; break;
         case 7:    n1=d+182; break;
         case 8:    n1=d+213; break;
         case 9:    n1=d+244; break;
         case 10: n1=d+274; break;
         case 11: n1=d+305; break;
         case 12: n1=d+335;
      }
    }
    else
    {  switch(m)
      {
         case 1: n1=d; break;
         case 2: n1=31+d; break;
         case 3: n1=d+59; break;
         case 4: n1=d+90; break;
         case 5:    n1=d+120; break;
         case 6:    n1=d+151; break;
         case 7:    n1=d+181; break;
         case 8:    n1=d+212; break;
         case 9:    n1=d+243; break;
         case 10: n1=d+273; break;
         case 11: n1=d+304; break;
         case 12: n1=d+334;
      }
    }
    return n1;
}

int CRestDay::GetDay(CString str1,CString str)
{
	int y,m,d,y1,m1,d1;
	int p=0;
	Findstr(str,y,m,d);
	Findstr(str1,y1,m1,d1);
    int day=0;
    if(y1>y)
    {
        day=GetMDay(y,y1,m,d)+GetYDay(y1,m1,d1);
    }
    else
    {
        day=GetYDay(y1,m1,d1)-GetYDay(y,m,d);
    }
    return day;
}
CString CRestDay::GetBorrowTime(CString str,int day)
{
	int y,m,d;
	Findstr(str,y,m,d);
	for(;day!=0;)
	{
		if(m==1)
		{
			d+=day;
			if(d>31)
			{
				d=0;
				day-=31-d;
				m++;
			}
			else
			day=0;
		}
		if(m==2)
		{
			if((y%4==0)&&(y%100!=0)||(y%400==0))
			{
				d+=day;
				if(d>29)
				{
					d=0;
					day-=29-d;
					m++;
				}
				else
	        		day=0;
			}
			else
			{
				d+=day;
				if(d>28)
				{
					d=0;
					day-=28-d;
					m++;
				}
				else
	        		day=0;
			}
		}
		if(m==3)
		{
			d+=day;
			if(d>31)
			{
				d=0;
				day-=31-d;
				m++;
			}
			else
	        	day=0;
		}
		if(m==4)
		{
			d+=day;
			if(d>30)
			{
				d=0;
				day-=30-d;
				m++;
			}
			else
	        		day=0;
		}
		if(m==5)
		{
			d+=day;
			if(d>31)
			{
				d=0;
				day-=31-d;
				m++;
			}
			else
	        		day=0;
		}
		if(m==6)
		{
			d+=day;
			if(d>30)
			{
				d=0;
				day-=30-d;
				m++;
			}
			else
	        		day=0;
		}
		if(m==7)
		{
			d+=day;
			if(d>31)
			{
				d=0;
				day-=31-d;
				m++;
			}
			else
	        	day=0;
		}
		if(m==8)
		{
			d+=day;
			if(d>31)
			{
				d=0;
				day-=31-d;
				m++;
			}
			else
	        	day=0;
		}
		if(m==9)
		{
			d+=day;
			if(d>30)
			{
				d=0;
				day-=30-d;
				m++;
			}
			else
	        	day=0;
		}
		if(m==10)
		{
			d+=day;
			if(d>31)
			{
				d=0;
				day-=31-d;
				m++;
			}
			else
	        	day=0;
		}
		if(m==11)
		{
			d+=day;
			if(d>30)
			{
				d=0;
				day-=30-d;
				m++;
			}
			else
	        	day=0;
		}
		if(m==12)
		{
			d+=day;
			if(d>31)
			{
				d=0;
				day-=31-d;
				m=1;
				y++;
			}
			else
	        	day=0;
		}
	}
	CString time;
	time.Format("%d-%d-%d",y,m,d);
	return time;
}
