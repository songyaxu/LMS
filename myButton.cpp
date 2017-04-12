// myButton.cpp : implementation file
//

#include "stdafx.h"
#include "LMS.h"
#include "myButton.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CmyButton

CmyButton::CmyButton()
{
}

CmyButton::~CmyButton()
{
}


BEGIN_MESSAGE_MAP(CmyButton, CButton)
	//{{AFX_MSG_MAP(CmyButton)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CmyButton message handlers
BOOL CmyButton::Attach(const UINT nID, CWnd* pParent)
{
	//GetDlgItem(nID)->ModifyStyle(0,BS_OWNERDRAW,0);
	if (!SubclassDlgItem(nID, pParent))
		return FALSE;
	return TRUE;
}
void CmyButton::SetDownColor(COLORREF color)
{
	m_DownColor = color;
}
void CmyButton::SetUpColor(COLORREF color)
{
	m_UpColor = color;
}

void CmyButton::DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct)
{
	// TODO: Add your code to draw the specified item
	CDC dc;
	dc.Attach(lpDrawItemStruct->hDC);//得到绘制的设备环境CDC
	VERIFY(lpDrawItemStruct->CtlType==ODT_BUTTON);

	const int bufSize = 512;
	TCHAR buffer[bufSize];
	GetWindowText(buffer, bufSize);
	int size=strlen(buffer);   //得到长度
	DrawText(lpDrawItemStruct->hDC,buffer,size,&lpDrawItemStruct->rcItem,DT_CENTER|DT_VCENTER|DT_SINGLELINE|DT_TABSTOP);   //绘制文字
	SetBkMode(lpDrawItemStruct->hDC,TRANSPARENT);   //透明

	 if (lpDrawItemStruct->itemState &ODS_SELECTED)  //当按下按钮时的处理
	 {//
		//重绘整个控制
		CBrush brush(m_DownColor);  
		dc.FillRect(&(lpDrawItemStruct->rcItem),&brush);//
		//因为这里进行了重绘,所以文字也要重绘
		DrawText(lpDrawItemStruct->hDC,buffer,size,&lpDrawItemStruct->rcItem,DT_CENTER|DT_VCENTER|DT_SINGLELINE|DT_TABSTOP);   
		SetBkMode(lpDrawItemStruct->hDC,TRANSPARENT);      
	 }
	 else                       //当按钮不操作或者弹起时
	 {
		CBrush brush(m_UpColor);     
		dc.FillRect(&(lpDrawItemStruct->rcItem),&brush);//
		//同上,进行重绘文字
		DrawText(lpDrawItemStruct->hDC,buffer,size,&lpDrawItemStruct->rcItem,DT_CENTER|DT_VCENTER|DT_SINGLELINE|DT_TABSTOP);    
		SetBkMode(lpDrawItemStruct->hDC,TRANSPARENT);
	 }
	 if ((lpDrawItemStruct->itemState &ODS_SELECTED)&&(lpDrawItemStruct->itemAction &(ODA_SELECT| ODA_DRAWENTIRE)))
	 {   //选中了本控件,高亮边框
		COLORREF fc=RGB(255-GetRValue(m_UpColor),255-GetGValue(m_UpColor), 255-             GetBValue(m_UpColor));//
		CBrush brush(fc);//
		dc.FrameRect(&(lpDrawItemStruct->rcItem),&brush);//
	 }
	 if (!(lpDrawItemStruct->itemState & ODS_SELECTED) &&(lpDrawItemStruct->itemAction & ODA_SELECT))
	 {
		//控制的选中状态结束,去掉边框
		CBrush brush(m_UpColor);
		dc.FrameRect(&lpDrawItemStruct->rcItem,&brush);//
	 }
	dc.Detach();//
}