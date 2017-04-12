// Machine generated IDispatch wrapper class(es) created with ClassWizard

#include "stdafx.h"
#include "msword.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif



/////////////////////////////////////////////////////////////////////////////
// Application properties

/////////////////////////////////////////////////////////////////////////////
// Application operations

LPDISPATCH Application::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Application::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString Application::GetName()
{
	CString result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetDocuments()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetWindows()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetActiveDocument()
{
	LPDISPATCH result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetActiveWindow()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetSelection()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetWordBasic()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetRecentFiles()
{
	LPDISPATCH result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetNormalTemplate()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetSystem()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetAutoCorrect()
{
	LPDISPATCH result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetFontNames()
{
	LPDISPATCH result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetLandscapeFontNames()
{
	LPDISPATCH result;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetPortraitFontNames()
{
	LPDISPATCH result;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetLanguages()
{
	LPDISPATCH result;
	InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetBrowser()
{
	LPDISPATCH result;
	InvokeHelper(0x10, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetFileConverters()
{
	LPDISPATCH result;
	InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetMailingLabel()
{
	LPDISPATCH result;
	InvokeHelper(0x12, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetDialogs()
{
	LPDISPATCH result;
	InvokeHelper(0x13, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetCaptionLabels()
{
	LPDISPATCH result;
	InvokeHelper(0x14, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetAutoCaptions()
{
	LPDISPATCH result;
	InvokeHelper(0x15, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetAddIns()
{
	LPDISPATCH result;
	InvokeHelper(0x16, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL Application::GetVisible()
{
	BOOL result;
	InvokeHelper(0x17, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Application::SetVisible(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x17, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString Application::GetVersion()
{
	CString result;
	InvokeHelper(0x18, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Application::GetScreenUpdating()
{
	BOOL result;
	InvokeHelper(0x1a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Application::SetScreenUpdating(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Application::GetPrintPreview()
{
	BOOL result;
	InvokeHelper(0x1b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Application::SetPrintPreview(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH Application::GetTasks()
{
	LPDISPATCH result;
	InvokeHelper(0x1c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL Application::GetSpecialMode()
{
	BOOL result;
	InvokeHelper(0x1e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

long Application::GetUsableWidth()
{
	long result;
	InvokeHelper(0x21, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long Application::GetUsableHeight()
{
	long result;
	InvokeHelper(0x22, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL Application::GetMathCoprocessorAvailable()
{
	BOOL result;
	InvokeHelper(0x24, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Application::GetMouseAvailable()
{
	BOOL result;
	InvokeHelper(0x25, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

VARIANT Application::GetInternational(long Index)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2e, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms,
		Index);
	return result;
}

CString Application::GetBuild()
{
	CString result;
	InvokeHelper(0x2f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Application::GetCapsLock()
{
	BOOL result;
	InvokeHelper(0x30, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Application::GetNumLock()
{
	BOOL result;
	InvokeHelper(0x31, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString Application::GetUserName_()
{
	CString result;
	InvokeHelper(0x34, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Application::SetUserName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x34, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString Application::GetUserInitials()
{
	CString result;
	InvokeHelper(0x35, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Application::SetUserInitials(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x35, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString Application::GetUserAddress()
{
	CString result;
	InvokeHelper(0x36, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Application::SetUserAddress(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x36, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH Application::GetMacroContainer()
{
	LPDISPATCH result;
	InvokeHelper(0x37, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL Application::GetDisplayRecentFiles()
{
	BOOL result;
	InvokeHelper(0x38, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Application::SetDisplayRecentFiles(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x38, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH Application::GetCommandBars()
{
	LPDISPATCH result;
	InvokeHelper(0x39, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetSynonymInfo(LPCTSTR Word, VARIANT* LanguageID)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_PVARIANT;
	InvokeHelper(0x3b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		Word, LanguageID);
	return result;
}

LPDISPATCH Application::GetVbe()
{
	LPDISPATCH result;
	InvokeHelper(0x3d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString Application::GetDefaultSaveFormat()
{
	CString result;
	InvokeHelper(0x40, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Application::SetDefaultSaveFormat(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x40, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH Application::GetListGalleries()
{
	LPDISPATCH result;
	InvokeHelper(0x41, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString Application::GetActivePrinter()
{
	CString result;
	InvokeHelper(0x42, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Application::SetActivePrinter(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x42, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH Application::GetTemplates()
{
	LPDISPATCH result;
	InvokeHelper(0x43, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetCustomizationContext()
{
	LPDISPATCH result;
	InvokeHelper(0x44, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Application::SetCustomizationContext(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Application::GetKeyBindings()
{
	LPDISPATCH result;
	InvokeHelper(0x45, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetKeysBoundTo(long KeyCategory, LPCTSTR Command, VARIANT* CommandParameter)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_PVARIANT;
	InvokeHelper(0x46, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		KeyCategory, Command, CommandParameter);
	return result;
}

LPDISPATCH Application::GetFindKey(long KeyCode, VARIANT* KeyCode2)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_PVARIANT;
	InvokeHelper(0x47, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		KeyCode, KeyCode2);
	return result;
}

CString Application::GetCaption()
{
	CString result;
	InvokeHelper(0x50, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Application::SetCaption(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x50, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString Application::GetPath()
{
	CString result;
	InvokeHelper(0x51, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL Application::GetDisplayScrollBars()
{
	BOOL result;
	InvokeHelper(0x52, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Application::SetDisplayScrollBars(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x52, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString Application::GetStartupPath()
{
	CString result;
	InvokeHelper(0x53, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Application::SetStartupPath(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x53, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long Application::GetBackgroundSavingStatus()
{
	long result;
	InvokeHelper(0x55, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long Application::GetBackgroundPrintingStatus()
{
	long result;
	InvokeHelper(0x56, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long Application::GetLeft()
{
	long result;
	InvokeHelper(0x57, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Application::SetLeft(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x57, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Application::GetTop()
{
	long result;
	InvokeHelper(0x58, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Application::SetTop(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x58, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Application::GetWidth()
{
	long result;
	InvokeHelper(0x59, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Application::SetWidth(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x59, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Application::GetHeight()
{
	long result;
	InvokeHelper(0x5a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Application::SetHeight(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Application::GetWindowState()
{
	long result;
	InvokeHelper(0x5b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Application::SetWindowState(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Application::GetDisplayAutoCompleteTips()
{
	BOOL result;
	InvokeHelper(0x5c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Application::SetDisplayAutoCompleteTips(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x5c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH Application::GetOptions()
{
	LPDISPATCH result;
	InvokeHelper(0x5d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Application::GetDisplayAlerts()
{
	long result;
	InvokeHelper(0x5e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Application::SetDisplayAlerts(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Application::GetCustomDictionaries()
{
	LPDISPATCH result;
	InvokeHelper(0x5f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString Application::GetPathSeparator()
{
	CString result;
	InvokeHelper(0x60, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Application::SetStatusBar(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x61, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL Application::GetMAPIAvailable()
{
	BOOL result;
	InvokeHelper(0x62, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Application::GetDisplayScreenTips()
{
	BOOL result;
	InvokeHelper(0x63, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Application::SetDisplayScreenTips(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x63, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Application::GetEnableCancelKey()
{
	long result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Application::SetEnableCancelKey(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x64, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Application::GetUserControl()
{
	BOOL result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

long Application::GetMailSystem()
{
	long result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString Application::GetDefaultTableSeparator()
{
	CString result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Application::SetDefaultTableSeparator(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x69, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL Application::GetShowVisualBasicEditor()
{
	BOOL result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Application::SetShowVisualBasicEditor(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString Application::GetBrowseExtraFileTypes()
{
	CString result;
	InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Application::SetBrowseExtraFileTypes(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x6c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL Application::GetIsObjectValid(LPDISPATCH Object)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x6d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, parms,
		Object);
	return result;
}

LPDISPATCH Application::GetHangulHanjaDictionaries()
{
	LPDISPATCH result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetMailMessage()
{
	LPDISPATCH result;
	InvokeHelper(0x15c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL Application::GetFocusInMailHeader()
{
	BOOL result;
	InvokeHelper(0x182, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Application::Quit(VARIANT* SaveChanges, VARIANT* OriginalFormat, VARIANT* RouteDocument)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x451, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 SaveChanges, OriginalFormat, RouteDocument);
}

void Application::ScreenRefresh()
{
	InvokeHelper(0x12d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Application::LookupNameProperties(LPCTSTR Name)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x12f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Name);
}

void Application::SubstituteFont(LPCTSTR UnavailableFont, LPCTSTR SubstituteFont)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x130, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 UnavailableFont, SubstituteFont);
}

BOOL Application::Repeat(VARIANT* Times)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x131, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		Times);
	return result;
}

void Application::DDEExecute(long Channel, LPCTSTR Command)
{
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x136, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Channel, Command);
}

long Application::DDEInitiate(LPCTSTR App, LPCTSTR Topic)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x137, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		App, Topic);
	return result;
}

void Application::DDEPoke(long Channel, LPCTSTR Item, LPCTSTR Data)
{
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_BSTR;
	InvokeHelper(0x138, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Channel, Item, Data);
}

CString Application::DDERequest(long Channel, LPCTSTR Item)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x139, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		Channel, Item);
	return result;
}

void Application::DDETerminate(long Channel)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x13a, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Channel);
}

void Application::DDETerminateAll()
{
	InvokeHelper(0x13b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long Application::BuildKeyCode(long Arg1, VARIANT* Arg2, VARIANT* Arg3, VARIANT* Arg4)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x13c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Arg1, Arg2, Arg3, Arg4);
	return result;
}

CString Application::KeyString(long KeyCode, VARIANT* KeyCode2)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_PVARIANT;
	InvokeHelper(0x13d, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		KeyCode, KeyCode2);
	return result;
}

void Application::OrganizerCopy(LPCTSTR Source, LPCTSTR Destination, LPCTSTR Name, long Object)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BSTR VTS_I4;
	InvokeHelper(0x13e, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Source, Destination, Name, Object);
}

void Application::OrganizerDelete(LPCTSTR Source, LPCTSTR Name, long Object)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_I4;
	InvokeHelper(0x13f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Source, Name, Object);
}

void Application::OrganizerRename(LPCTSTR Source, LPCTSTR Name, LPCTSTR NewName, long Object)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BSTR VTS_I4;
	InvokeHelper(0x140, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Source, Name, NewName, Object);
}

CString Application::GetAddress(VARIANT* Name, VARIANT* AddressProperties, VARIANT* UseAutoText, VARIANT* DisplaySelectDialog, VARIANT* SelectDialog, VARIANT* CheckNamesDialog, VARIANT* RecentAddressesChoice, VARIANT* UpdateRecentAddresses)
{
	CString result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x142, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		Name, AddressProperties, UseAutoText, DisplaySelectDialog, SelectDialog, CheckNamesDialog, RecentAddressesChoice, UpdateRecentAddresses);
	return result;
}

BOOL Application::CheckGrammar(LPCTSTR String)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x143, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		String);
	return result;
}

BOOL Application::CheckSpelling(LPCTSTR Word, VARIANT* CustomDictionary, VARIANT* IgnoreUppercase, VARIANT* MainDictionary, VARIANT* CustomDictionary2, VARIANT* CustomDictionary3, VARIANT* CustomDictionary4, VARIANT* CustomDictionary5, 
		VARIANT* CustomDictionary6, VARIANT* CustomDictionary7, VARIANT* CustomDictionary8, VARIANT* CustomDictionary9, VARIANT* CustomDictionary10)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x144, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		Word, CustomDictionary, IgnoreUppercase, MainDictionary, CustomDictionary2, CustomDictionary3, CustomDictionary4, CustomDictionary5, CustomDictionary6, CustomDictionary7, CustomDictionary8, CustomDictionary9, CustomDictionary10);
	return result;
}

void Application::ResetIgnoreAll()
{
	InvokeHelper(0x146, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH Application::GetSpellingSuggestions(LPCTSTR Word, VARIANT* CustomDictionary, VARIANT* IgnoreUppercase, VARIANT* MainDictionary, VARIANT* SuggestionMode, VARIANT* CustomDictionary2, VARIANT* CustomDictionary3, VARIANT* CustomDictionary4, 
		VARIANT* CustomDictionary5, VARIANT* CustomDictionary6, VARIANT* CustomDictionary7, VARIANT* CustomDictionary8, VARIANT* CustomDictionary9, VARIANT* CustomDictionary10)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x147, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Word, CustomDictionary, IgnoreUppercase, MainDictionary, SuggestionMode, CustomDictionary2, CustomDictionary3, CustomDictionary4, CustomDictionary5, CustomDictionary6, CustomDictionary7, CustomDictionary8, CustomDictionary9, 
		CustomDictionary10);
	return result;
}

void Application::GoBack()
{
	InvokeHelper(0x148, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Application::Help(VARIANT* HelpType)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x149, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 HelpType);
}

void Application::AutomaticChange()
{
	InvokeHelper(0x14a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Application::ShowMe()
{
	InvokeHelper(0x14b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Application::HelpTool()
{
	InvokeHelper(0x14c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH Application::NewWindow()
{
	LPDISPATCH result;
	InvokeHelper(0x159, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Application::ListCommands(BOOL ListAllCommands)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x15a, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ListAllCommands);
}

void Application::ShowClipboard()
{
	InvokeHelper(0x15d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Application::OnTime(VARIANT* When, LPCTSTR Name, VARIANT* Tolerance)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_BSTR VTS_PVARIANT;
	InvokeHelper(0x15e, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 When, Name, Tolerance);
}

void Application::NextLetter()
{
	InvokeHelper(0x15f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

CString Application::CleanString(LPCTSTR String)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x162, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		String);
	return result;
}

void Application::ChangeFileOpenDirectory(LPCTSTR Path)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x165, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Path);
}

void Application::GoForward()
{
	InvokeHelper(0x167, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Application::Move(long Left, long Top)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x168, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Left, Top);
}

void Application::Resize(long Width, long Height)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x169, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Width, Height);
}

float Application::InchesToPoints(float Inches)
{
	float result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x172, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		Inches);
	return result;
}

float Application::CentimetersToPoints(float Centimeters)
{
	float result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x173, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		Centimeters);
	return result;
}

float Application::MillimetersToPoints(float Millimeters)
{
	float result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x174, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		Millimeters);
	return result;
}

float Application::PicasToPoints(float Picas)
{
	float result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x175, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		Picas);
	return result;
}

float Application::LinesToPoints(float Lines)
{
	float result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x176, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		Lines);
	return result;
}

float Application::PointsToInches(float Points)
{
	float result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x17c, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		Points);
	return result;
}

float Application::PointsToCentimeters(float Points)
{
	float result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x17d, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		Points);
	return result;
}

float Application::PointsToMillimeters(float Points)
{
	float result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x17e, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		Points);
	return result;
}

float Application::PointsToPicas(float Points)
{
	float result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x17f, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		Points);
	return result;
}

float Application::PointsToLines(float Points)
{
	float result;
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x180, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		Points);
	return result;
}

void Application::Activate()
{
	InvokeHelper(0x181, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

float Application::PointsToPixels(float Points, VARIANT* fVertical)
{
	float result;
	static BYTE parms[] =
		VTS_R4 VTS_PVARIANT;
	InvokeHelper(0x183, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		Points, fVertical);
	return result;
}

float Application::PixelsToPoints(float Pixels, VARIANT* fVertical)
{
	float result;
	static BYTE parms[] =
		VTS_R4 VTS_PVARIANT;
	InvokeHelper(0x184, DISPATCH_METHOD, VT_R4, (void*)&result, parms,
		Pixels, fVertical);
	return result;
}

void Application::KeyboardLatin()
{
	InvokeHelper(0x190, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Application::KeyboardBidi()
{
	InvokeHelper(0x191, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Application::ToggleKeyboard()
{
	InvokeHelper(0x192, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long Application::Keyboard(long LangId)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1be, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		LangId);
	return result;
}

CString Application::ProductCode()
{
	CString result;
	InvokeHelper(0x194, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::DefaultWebOptions()
{
	LPDISPATCH result;
	InvokeHelper(0x195, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Application::SetDefaultTheme(LPCTSTR Name, long DocumentType)
{
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x19e, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Name, DocumentType);
}

CString Application::GetDefaultTheme(long DocumentType)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1a0, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		DocumentType);
	return result;
}

LPDISPATCH Application::GetEmailOptions()
{
	LPDISPATCH result;
	InvokeHelper(0x185, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Application::GetLanguage()
{
	long result;
	InvokeHelper(0x187, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetCOMAddIns()
{
	LPDISPATCH result;
	InvokeHelper(0x6f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL Application::GetCheckLanguage()
{
	BOOL result;
	InvokeHelper(0x70, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Application::SetCheckLanguage(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x70, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH Application::GetLanguageSettings()
{
	LPDISPATCH result;
	InvokeHelper(0x193, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Application::GetFeatureInstall()
{
	long result;
	InvokeHelper(0x1bf, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Application::SetFeatureInstall(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1bf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

VARIANT Application::Run(LPCTSTR MacroName, VARIANT* varg1, VARIANT* varg2, VARIANT* varg3, VARIANT* varg4, VARIANT* varg5, VARIANT* varg6, VARIANT* varg7, VARIANT* varg8, VARIANT* varg9, VARIANT* varg10, VARIANT* varg11, VARIANT* varg12, VARIANT* varg13, 
		VARIANT* varg14, VARIANT* varg15, VARIANT* varg16, VARIANT* varg17, VARIANT* varg18, VARIANT* varg19, VARIANT* varg20, VARIANT* varg21, VARIANT* varg22, VARIANT* varg23, VARIANT* varg24, VARIANT* varg25, VARIANT* varg26, VARIANT* varg27, 
		VARIANT* varg28, VARIANT* varg29, VARIANT* varg30)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT 
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1bd, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		MacroName, varg1, varg2, varg3, varg4, varg5, varg6, varg7, varg8, varg9, varg10, varg11, varg12, varg13, varg14, varg15, varg16, varg17, varg18, varg19, varg20, varg21, varg22, varg23, varg24, varg25, varg26, varg27, varg28, varg29, 
		varg30);
	return result;
}

void Application::PrintOut(VARIANT* Background, VARIANT* Append, VARIANT* _Range, VARIANT* OutputFileName, VARIANT* From, VARIANT* To, VARIANT* Item, VARIANT* Copies, VARIANT* Pages, VARIANT* PageType, VARIANT* PrintToFile, VARIANT* Collate, 
		VARIANT* FileName, VARIANT* ActivePrinterMacGX, VARIANT* ManualDuplexPrint, VARIANT* PrintZoomColumn, VARIANT* PrintZoomRow, VARIANT* PrintZoomPaperWidth, VARIANT* PrintZoomPaperHeight)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT 
		VTS_PVARIANT;
	InvokeHelper(0x1c0, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Background, Append, _Range, OutputFileName, From, To, Item, Copies, Pages, PageType, PrintToFile, Collate, FileName, ActivePrinterMacGX, ManualDuplexPrint, PrintZoomColumn, PrintZoomRow, PrintZoomPaperWidth, PrintZoomPaperHeight);
}

long Application::GetAutomationSecurity()
{
	long result;
	InvokeHelper(0x1c1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Application::SetAutomationSecurity(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1c1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Application::GetFileDialog(long FileDialogType)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1c2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		FileDialogType);
	return result;
}

CString Application::GetEmailTemplate()
{
	CString result;
	InvokeHelper(0x1c3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Application::SetEmailTemplate(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x1c3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH Application::GetNewDocument()
{
	LPDISPATCH result;
	InvokeHelper(0x1c6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL Application::GetShowStartupDialog()
{
	BOOL result;
	InvokeHelper(0x1c7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Application::SetShowStartupDialog(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1c7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH Application::GetAutoCorrectEmail()
{
	LPDISPATCH result;
	InvokeHelper(0x1c8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetTaskPanes()
{
	LPDISPATCH result;
	InvokeHelper(0x1c9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL Application::GetDefaultLegalBlackline()
{
	BOOL result;
	InvokeHelper(0x1cb, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Application::SetDefaultLegalBlackline(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1cb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH Application::GetXMLNamespaces()
{
	LPDISPATCH result;
	InvokeHelper(0x1cf, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Application::PutFocusInMailHeader()
{
	InvokeHelper(0x1d0, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL Application::GetArbitraryXMLSupportAvailable()
{
	BOOL result;
	InvokeHelper(0x1d1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Application::LoadMasterList(LPCTSTR FileName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x1d5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName);
}

LPDISPATCH Application::CompareDocuments(LPDISPATCH OriginalDocument, LPDISPATCH RevisedDocument, long Destination, long Granularity, BOOL CompareFormatting, BOOL CompareCaseChanges, BOOL CompareWhitespace, BOOL CompareTables, BOOL CompareHeaders, 
		BOOL CompareFootnotes, BOOL CompareTextboxes, BOOL CompareFields, BOOL CompareComments, BOOL CompareMoves, LPCTSTR RevisedAuthor, BOOL IgnoreAllComparisonWarnings)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_DISPATCH VTS_I4 VTS_I4 VTS_BOOL VTS_BOOL VTS_BOOL VTS_BOOL VTS_BOOL VTS_BOOL VTS_BOOL VTS_BOOL VTS_BOOL VTS_BOOL VTS_BSTR VTS_BOOL;
	InvokeHelper(0x1d6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		OriginalDocument, RevisedDocument, Destination, Granularity, CompareFormatting, CompareCaseChanges, CompareWhitespace, CompareTables, CompareHeaders, CompareFootnotes, CompareTextboxes, CompareFields, CompareComments, CompareMoves, 
		RevisedAuthor, IgnoreAllComparisonWarnings);
	return result;
}

LPDISPATCH Application::MergeDocuments(LPDISPATCH OriginalDocument, LPDISPATCH RevisedDocument, long Destination, long Granularity, BOOL CompareFormatting, BOOL CompareCaseChanges, BOOL CompareWhitespace, BOOL CompareTables, BOOL CompareHeaders, 
		BOOL CompareFootnotes, BOOL CompareTextboxes, BOOL CompareFields, BOOL CompareComments, BOOL CompareMoves, LPCTSTR OriginalAuthor, LPCTSTR RevisedAuthor, long FormatFrom)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_DISPATCH VTS_I4 VTS_I4 VTS_BOOL VTS_BOOL VTS_BOOL VTS_BOOL VTS_BOOL VTS_BOOL VTS_BOOL VTS_BOOL VTS_BOOL VTS_BOOL VTS_BSTR VTS_BSTR VTS_I4;
	InvokeHelper(0x1d7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		OriginalDocument, RevisedDocument, Destination, Granularity, CompareFormatting, CompareCaseChanges, CompareWhitespace, CompareTables, CompareHeaders, CompareFootnotes, CompareTextboxes, CompareFields, CompareComments, CompareMoves, 
		OriginalAuthor, RevisedAuthor, FormatFrom);
	return result;
}

LPDISPATCH Application::GetBibliography()
{
	LPDISPATCH result;
	InvokeHelper(0x1d8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL Application::GetShowStylePreviews()
{
	BOOL result;
	InvokeHelper(0x1d9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Application::SetShowStylePreviews(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1d9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Application::GetRestrictLinkedStyles()
{
	BOOL result;
	InvokeHelper(0x1da, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Application::SetRestrictLinkedStyles(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1da, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH Application::GetOMathAutoCorrect()
{
	LPDISPATCH result;
	InvokeHelper(0x1db, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL Application::GetDisplayDocumentInformationPanel()
{
	BOOL result;
	InvokeHelper(0x1dc, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Application::SetDisplayDocumentInformationPanel(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1dc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH Application::GetAssistance()
{
	LPDISPATCH result;
	InvokeHelper(0x1dd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL Application::GetOpenAttachmentsInFullScreen()
{
	BOOL result;
	InvokeHelper(0x1de, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Application::SetOpenAttachmentsInFullScreen(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1de, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Application::GetActiveEncryptionSession()
{
	long result;
	InvokeHelper(0x1df, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL Application::GetDontResetInsertionPointProperties()
{
	BOOL result;
	InvokeHelper(0x1e0, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Application::SetDontResetInsertionPointProperties(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1e0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH Application::GetSmartArtLayouts()
{
	LPDISPATCH result;
	InvokeHelper(0x1e1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetSmartArtQuickStyles()
{
	LPDISPATCH result;
	InvokeHelper(0x1e2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetSmartArtColors()
{
	LPDISPATCH result;
	InvokeHelper(0x1e3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetUndoRecord()
{
	LPDISPATCH result;
	InvokeHelper(0x1e6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetPickerDialog()
{
	LPDISPATCH result;
	InvokeHelper(0x1e9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetProtectedViewWindows()
{
	LPDISPATCH result;
	InvokeHelper(0x1ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Application::GetActiveProtectedViewWindow()
{
	LPDISPATCH result;
	InvokeHelper(0x1eb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL Application::GetIsSandboxed()
{
	BOOL result;
	InvokeHelper(0x1ec, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

long Application::GetFileValidation()
{
	long result;
	InvokeHelper(0x1ed, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Application::SetFileValidation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1ed, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Application::GetChartDataPointTrack()
{
	BOOL result;
	InvokeHelper(0x1ee, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Application::SetChartDataPointTrack(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1ee, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Application::GetShowAnimation()
{
	BOOL result;
	InvokeHelper(0x1ef, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Application::SetShowAnimation(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1ef, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// Documents properties

/////////////////////////////////////////////////////////////////////////////
// Documents operations

LPUNKNOWN Documents::Get_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

long Documents::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Documents::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Documents::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Documents::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Documents::Item(VARIANT* Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

void Documents::Close(VARIANT* SaveChanges, VARIANT* OriginalFormat, VARIANT* RouteDocument)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x451, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 SaveChanges, OriginalFormat, RouteDocument);
}

void Documents::Save(VARIANT* NoPrompt, VARIANT* OriginalFormat)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 NoPrompt, OriginalFormat);
}

LPDISPATCH Documents::Add(VARIANT* Template, VARIANT* NewTemplate, VARIANT* DocumentType, VARIANT* Visible)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Template, NewTemplate, DocumentType, Visible);
	return result;
}

void Documents::CheckOut(LPCTSTR FileName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName);
}

BOOL Documents::CanCheckOut(LPCTSTR FileName)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		FileName);
	return result;
}

LPDISPATCH Documents::Open(VARIANT* FileName, VARIANT* ConfirmConversions, VARIANT* ReadOnly, VARIANT* AddToRecentFiles, VARIANT* PasswordDocument, VARIANT* PasswordTemplate, VARIANT* Revert, VARIANT* WritePasswordDocument, 
		VARIANT* WritePasswordTemplate, VARIANT* Format, VARIANT* Encoding, VARIANT* Visible, VARIANT* OpenAndRepair, VARIANT* DocumentDirection, VARIANT* NoEncodingDialog, VARIANT* XMLTransform)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		FileName, ConfirmConversions, ReadOnly, AddToRecentFiles, PasswordDocument, PasswordTemplate, Revert, WritePasswordDocument, WritePasswordTemplate, Format, Encoding, Visible, OpenAndRepair, DocumentDirection, NoEncodingDialog, 
		XMLTransform);
	return result;
}

LPDISPATCH Documents::OpenNoRepairDialog(VARIANT* FileName, VARIANT* ConfirmConversions, VARIANT* ReadOnly, VARIANT* AddToRecentFiles, VARIANT* PasswordDocument, VARIANT* PasswordTemplate, VARIANT* Revert, VARIANT* WritePasswordDocument, 
		VARIANT* WritePasswordTemplate, VARIANT* Format, VARIANT* Encoding, VARIANT* Visible, VARIANT* OpenAndRepair, VARIANT* DocumentDirection, VARIANT* NoEncodingDialog, VARIANT* XMLTransform)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		FileName, ConfirmConversions, ReadOnly, AddToRecentFiles, PasswordDocument, PasswordTemplate, Revert, WritePasswordDocument, WritePasswordTemplate, Format, Encoding, Visible, OpenAndRepair, DocumentDirection, NoEncodingDialog, 
		XMLTransform);
	return result;
}

LPDISPATCH Documents::AddBlogDocument(LPCTSTR ProviderID, LPCTSTR PostURL, LPCTSTR BlogName, LPCTSTR PostID)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR;
	InvokeHelper(0x15, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		ProviderID, PostURL, BlogName, PostID);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// _Document properties

/////////////////////////////////////////////////////////////////////////////
// _Document operations

CString _Document::GetName()
{
	CString result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Document::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetBuiltInDocumentProperties()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetCustomDocumentProperties()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString _Document::GetPath()
{
	CString result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetBookmarks()
{
	LPDISPATCH result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetTables()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetFootnotes()
{
	LPDISPATCH result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetEndnotes()
{
	LPDISPATCH result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetComments()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Document::GetType()
{
	long result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetAutoHyphenation()
{
	BOOL result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetAutoHyphenation(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetHyphenateCaps()
{
	BOOL result;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetHyphenateCaps(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _Document::GetHyphenationZone()
{
	long result;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetHyphenationZone(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Document::GetConsecutiveHyphensLimit()
{
	long result;
	InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetConsecutiveHyphensLimit(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xe, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Document::GetSections()
{
	LPDISPATCH result;
	InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetParagraphs()
{
	LPDISPATCH result;
	InvokeHelper(0x10, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetWords()
{
	LPDISPATCH result;
	InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetSentences()
{
	LPDISPATCH result;
	InvokeHelper(0x12, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetCharacters()
{
	LPDISPATCH result;
	InvokeHelper(0x13, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetFields()
{
	LPDISPATCH result;
	InvokeHelper(0x14, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetFormFields()
{
	LPDISPATCH result;
	InvokeHelper(0x15, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetStyles()
{
	LPDISPATCH result;
	InvokeHelper(0x16, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetFrames()
{
	LPDISPATCH result;
	InvokeHelper(0x17, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetTablesOfFigures()
{
	LPDISPATCH result;
	InvokeHelper(0x19, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetVariables()
{
	LPDISPATCH result;
	InvokeHelper(0x1a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetMailMerge()
{
	LPDISPATCH result;
	InvokeHelper(0x1b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetEnvelope()
{
	LPDISPATCH result;
	InvokeHelper(0x1c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString _Document::GetFullName()
{
	CString result;
	InvokeHelper(0x1d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetRevisions()
{
	LPDISPATCH result;
	InvokeHelper(0x1e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetTablesOfContents()
{
	LPDISPATCH result;
	InvokeHelper(0x1f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetTablesOfAuthorities()
{
	LPDISPATCH result;
	InvokeHelper(0x20, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetPageSetup()
{
	LPDISPATCH result;
	InvokeHelper(0x44d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Document::SetPageSetup(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _Document::GetWindows()
{
	LPDISPATCH result;
	InvokeHelper(0x22, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetTablesOfAuthoritiesCategories()
{
	LPDISPATCH result;
	InvokeHelper(0x26, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetIndexes()
{
	LPDISPATCH result;
	InvokeHelper(0x27, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetSaved()
{
	BOOL result;
	InvokeHelper(0x28, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetSaved(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x28, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Document::GetContent()
{
	LPDISPATCH result;
	InvokeHelper(0x29, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetActiveWindow()
{
	LPDISPATCH result;
	InvokeHelper(0x2a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Document::GetKind()
{
	long result;
	InvokeHelper(0x2b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetKind(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _Document::GetReadOnly()
{
	BOOL result;
	InvokeHelper(0x2c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetSubdocuments()
{
	LPDISPATCH result;
	InvokeHelper(0x2d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetIsMasterDocument()
{
	BOOL result;
	InvokeHelper(0x2e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

float _Document::GetDefaultTabStop()
{
	float result;
	InvokeHelper(0x30, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Document::SetDefaultTabStop(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x30, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL _Document::GetEmbedTrueTypeFonts()
{
	BOOL result;
	InvokeHelper(0x32, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetEmbedTrueTypeFonts(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x32, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetSaveFormsData()
{
	BOOL result;
	InvokeHelper(0x33, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetSaveFormsData(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x33, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetReadOnlyRecommended()
{
	BOOL result;
	InvokeHelper(0x34, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetReadOnlyRecommended(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x34, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetSaveSubsetFonts()
{
	BOOL result;
	InvokeHelper(0x35, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetSaveSubsetFonts(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x35, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetCompatibility(long Type)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x37, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, parms,
		Type);
	return result;
}

void _Document::SetCompatibility(long Type, BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_I4 VTS_BOOL;
	InvokeHelper(0x37, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 Type, bNewValue);
}

LPDISPATCH _Document::GetStory_Ranges()
{
	LPDISPATCH result;
	InvokeHelper(0x38, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetCommandBars()
{
	LPDISPATCH result;
	InvokeHelper(0x39, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetIsSubdocument()
{
	BOOL result;
	InvokeHelper(0x3a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

long _Document::GetSaveFormat()
{
	long result;
	InvokeHelper(0x3b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long _Document::GetProtectionType()
{
	long result;
	InvokeHelper(0x3c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetHyperlinks()
{
	LPDISPATCH result;
	InvokeHelper(0x3d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetShapes()
{
	LPDISPATCH result;
	InvokeHelper(0x3e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetListTemplates()
{
	LPDISPATCH result;
	InvokeHelper(0x3f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetLists()
{
	LPDISPATCH result;
	InvokeHelper(0x40, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetUpdateStylesOnOpen()
{
	BOOL result;
	InvokeHelper(0x42, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetUpdateStylesOnOpen(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x42, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

VARIANT _Document::GetAttachedTemplate()
{
	VARIANT result;
	InvokeHelper(0x43, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void _Document::SetAttachedTemplate(VARIANT* newValue)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x43, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _Document::GetInlineShapes()
{
	LPDISPATCH result;
	InvokeHelper(0x44, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetBackground()
{
	LPDISPATCH result;
	InvokeHelper(0x45, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Document::SetBackground(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x45, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL _Document::GetGrammarChecked()
{
	BOOL result;
	InvokeHelper(0x46, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetGrammarChecked(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x46, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetSpellingChecked()
{
	BOOL result;
	InvokeHelper(0x47, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetSpellingChecked(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x47, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetShowGrammaticalErrors()
{
	BOOL result;
	InvokeHelper(0x48, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetShowGrammaticalErrors(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x48, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetShowSpellingErrors()
{
	BOOL result;
	InvokeHelper(0x49, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetShowSpellingErrors(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x49, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetPrintPostScriptOverText()
{
	BOOL result;
	InvokeHelper(0x50, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetPrintPostScriptOverText(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x50, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Document::GetContainer()
{
	LPDISPATCH result;
	InvokeHelper(0x52, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetPrintFormsData()
{
	BOOL result;
	InvokeHelper(0x53, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetPrintFormsData(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x53, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Document::GetListParagraphs()
{
	LPDISPATCH result;
	InvokeHelper(0x54, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Document::SetPassword(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x55, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

void _Document::SetWritePassword(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x56, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL _Document::GetHasPassword()
{
	BOOL result;
	InvokeHelper(0x57, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetWriteReserved()
{
	BOOL result;
	InvokeHelper(0x58, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString _Document::GetActiveWritingStyle(VARIANT* LanguageID)
{
	CString result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x5a, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms,
		LanguageID);
	return result;
}

void _Document::SetActiveWritingStyle(VARIANT* LanguageID, LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_BSTR;
	InvokeHelper(0x5a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 LanguageID, lpszNewValue);
}

BOOL _Document::GetUserControl()
{
	BOOL result;
	InvokeHelper(0x5c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetUserControl(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x5c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Document::GetReadabilityStatistics()
{
	LPDISPATCH result;
	InvokeHelper(0x60, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetGrammaticalErrors()
{
	LPDISPATCH result;
	InvokeHelper(0x61, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetSpellingErrors()
{
	LPDISPATCH result;
	InvokeHelper(0x62, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetVBProject()
{
	LPDISPATCH result;
	InvokeHelper(0x63, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetFormsDesign()
{
	BOOL result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString _Document::Get_CodeName()
{
	CString result;
	InvokeHelper(0x80010000, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Document::Set_CodeName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x80010000, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString _Document::GetCodeName()
{
	CString result;
	InvokeHelper(0x106, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetSnapToGrid()
{
	BOOL result;
	InvokeHelper(0x12c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetSnapToGrid(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x12c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetSnapToShapes()
{
	BOOL result;
	InvokeHelper(0x12d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetSnapToShapes(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x12d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

float _Document::GetGridDistanceHorizontal()
{
	float result;
	InvokeHelper(0x12e, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Document::SetGridDistanceHorizontal(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x12e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float _Document::GetGridDistanceVertical()
{
	float result;
	InvokeHelper(0x12f, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Document::SetGridDistanceVertical(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x12f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float _Document::GetGridOriginHorizontal()
{
	float result;
	InvokeHelper(0x130, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Document::SetGridOriginHorizontal(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x130, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float _Document::GetGridOriginVertical()
{
	float result;
	InvokeHelper(0x131, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Document::SetGridOriginVertical(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x131, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long _Document::GetGridSpaceBetweenHorizontalLines()
{
	long result;
	InvokeHelper(0x132, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetGridSpaceBetweenHorizontalLines(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x132, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Document::GetGridSpaceBetweenVerticalLines()
{
	long result;
	InvokeHelper(0x133, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetGridSpaceBetweenVerticalLines(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x133, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _Document::GetGridOriginFromMargin()
{
	BOOL result;
	InvokeHelper(0x134, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetGridOriginFromMargin(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x134, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetKerningByAlgorithm()
{
	BOOL result;
	InvokeHelper(0x135, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetKerningByAlgorithm(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x135, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _Document::GetJustificationMode()
{
	long result;
	InvokeHelper(0x136, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetJustificationMode(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x136, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Document::GetFarEastLineBreakLevel()
{
	long result;
	InvokeHelper(0x137, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetFarEastLineBreakLevel(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x137, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString _Document::GetNoLineBreakBefore()
{
	CString result;
	InvokeHelper(0x138, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Document::SetNoLineBreakBefore(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x138, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString _Document::GetNoLineBreakAfter()
{
	CString result;
	InvokeHelper(0x139, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Document::SetNoLineBreakAfter(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x139, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL _Document::GetTrackRevisions()
{
	BOOL result;
	InvokeHelper(0x13a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetTrackRevisions(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x13a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetPrintRevisions()
{
	BOOL result;
	InvokeHelper(0x13b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetPrintRevisions(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x13b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void _Document::Close(VARIANT* SaveChanges, VARIANT* OriginalFormat, VARIANT* RouteDocument)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x451, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 SaveChanges, OriginalFormat, RouteDocument);
}

void _Document::Repaginate()
{
	InvokeHelper(0x67, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::FitToPages()
{
	InvokeHelper(0x68, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::ManualHyphenation()
{
	InvokeHelper(0x69, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::Select()
{
	InvokeHelper(0xffff, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::DataForm()
{
	InvokeHelper(0x6a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::Save()
{
	InvokeHelper(0x6c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::SendMail()
{
	InvokeHelper(0x6e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Document::_Range(VARIANT* Start, VARIANT* End)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x7d0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Start, End);
	return result;
}

void _Document::RunAutoMacro(long Which)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x70, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Which);
}

void _Document::Activate()
{
	InvokeHelper(0x71, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::PrintPreview()
{
	InvokeHelper(0x72, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Document::GoTo(VARIANT* What, VARIANT* Which, VARIANT* Count, VARIANT* Name)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x73, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		What, Which, Count, Name);
	return result;
}

BOOL _Document::Undo(VARIANT* Times)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x74, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		Times);
	return result;
}

BOOL _Document::Redo(VARIANT* Times)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x75, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		Times);
	return result;
}

long _Document::ComputeStatistics(long Statistic, VARIANT* IncludeFootnotesAndEndnotes)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_PVARIANT;
	InvokeHelper(0x76, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Statistic, IncludeFootnotesAndEndnotes);
	return result;
}

void _Document::MakeCompatibilityDefault()
{
	InvokeHelper(0x77, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::Unprotect(VARIANT* Password)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x79, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Password);
}

void _Document::RunLetterWizard(VARIANT* LetterContent, VARIANT* WizardMode)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x7b, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 LetterContent, WizardMode);
}

LPDISPATCH _Document::GetLetterContent()
{
	LPDISPATCH result;
	InvokeHelper(0x7c, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Document::SetLetterContent(VARIANT* LetterContent)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x7d, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 LetterContent);
}

void _Document::CopyStylesFromTemplate(LPCTSTR Template)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7e, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Template);
}

void _Document::UpdateStyles()
{
	InvokeHelper(0x7f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::CheckGrammar()
{
	InvokeHelper(0x83, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::CheckSpelling(VARIANT* CustomDictionary, VARIANT* IgnoreUppercase, VARIANT* AlwaysSuggest, VARIANT* CustomDictionary2, VARIANT* CustomDictionary3, VARIANT* CustomDictionary4, VARIANT* CustomDictionary5, VARIANT* CustomDictionary6, 
		VARIANT* CustomDictionary7, VARIANT* CustomDictionary8, VARIANT* CustomDictionary9, VARIANT* CustomDictionary10)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x84, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 CustomDictionary, IgnoreUppercase, AlwaysSuggest, CustomDictionary2, CustomDictionary3, CustomDictionary4, CustomDictionary5, CustomDictionary6, CustomDictionary7, CustomDictionary8, CustomDictionary9, CustomDictionary10);
}

void _Document::FollowHyperlink(VARIANT* Address, VARIANT* SubAddress, VARIANT* NewWindow, VARIANT* AddHistory, VARIANT* ExtraInfo, VARIANT* Method, VARIANT* HeaderInfo)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x87, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Address, SubAddress, NewWindow, AddHistory, ExtraInfo, Method, HeaderInfo);
}

void _Document::AddToFavorites()
{
	InvokeHelper(0x88, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::Reload()
{
	InvokeHelper(0x89, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::RemoveNumbers(VARIANT* NumberType)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x8c, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 NumberType);
}

void _Document::ConvertNumbersToText(VARIANT* NumberType)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x8d, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 NumberType);
}

long _Document::CountNumberedItems(VARIANT* NumberType, VARIANT* Level)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x8e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		NumberType, Level);
	return result;
}

void _Document::Post()
{
	InvokeHelper(0x8f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::ToggleFormsDesign()
{
	InvokeHelper(0x90, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

VARIANT _Document::GetCrossReferenceItems(VARIANT* ReferenceType)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x93, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		ReferenceType);
	return result;
}

void _Document::AutoFormat()
{
	InvokeHelper(0x94, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::ViewCode()
{
	InvokeHelper(0x95, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::ViewPropertyBrowser()
{
	InvokeHelper(0x96, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::UndoClear()
{
	InvokeHelper(0xfe, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::PresentIt()
{
	InvokeHelper(0xff, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::SendFax(LPCTSTR Address, VARIANT* Subject)
{
	static BYTE parms[] =
		VTS_BSTR VTS_PVARIANT;
	InvokeHelper(0x100, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Address, Subject);
}

void _Document::ClosePrintPreview()
{
	InvokeHelper(0x102, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::CheckConsistency()
{
	InvokeHelper(0x103, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Document::CreateLetterContent(LPCTSTR DateFormat, BOOL IncludeHeaderFooter, LPCTSTR PageDesign, long LetterStyle, BOOL Letterhead, long LetterheadLocation, float LetterheadSize, LPCTSTR RecipientName, LPCTSTR RecipientAddress, 
		LPCTSTR Salutation, long SalutationType, LPCTSTR RecipientReference, LPCTSTR MailingInstructions, LPCTSTR AttentionLine, LPCTSTR Subject, LPCTSTR CCList, LPCTSTR ReturnAddress, LPCTSTR SenderName, LPCTSTR Closing, LPCTSTR SenderCompany, 
		LPCTSTR SenderJobTitle, LPCTSTR SenderInitials, long EnclosureNumber, VARIANT* InfoBlock, VARIANT* RecipientCode, VARIANT* RecipientGender, VARIANT* ReturnAddressShortForm, VARIANT* SenderCity, VARIANT* SenderCode, VARIANT* SenderGender, 
		VARIANT* SenderReference)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BSTR VTS_I4 VTS_BOOL VTS_I4 VTS_R4 VTS_BSTR VTS_BSTR VTS_BSTR VTS_I4 VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR VTS_I4 VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT 
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x104, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		DateFormat, IncludeHeaderFooter, PageDesign, LetterStyle, Letterhead, LetterheadLocation, LetterheadSize, RecipientName, RecipientAddress, Salutation, SalutationType, RecipientReference, MailingInstructions, AttentionLine, Subject, 
		CCList, ReturnAddress, SenderName, Closing, SenderCompany, SenderJobTitle, SenderInitials, EnclosureNumber, InfoBlock, RecipientCode, RecipientGender, ReturnAddressShortForm, SenderCity, SenderCode, SenderGender, SenderReference);
	return result;
}

void _Document::AcceptAllRevisions()
{
	InvokeHelper(0x13d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::RejectAllRevisions()
{
	InvokeHelper(0x13e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::DetectLanguage()
{
	InvokeHelper(0x97, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::ApplyTheme(LPCTSTR Name)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x142, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Name);
}

void _Document::RemoveTheme()
{
	InvokeHelper(0x143, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::WebPagePreview()
{
	InvokeHelper(0x145, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::ReloadAs(long Encoding)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x14b, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Encoding);
}

CString _Document::GetActiveTheme()
{
	CString result;
	InvokeHelper(0x21c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString _Document::GetActiveThemeDisplayName()
{
	CString result;
	InvokeHelper(0x21d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetEmail()
{
	LPDISPATCH result;
	InvokeHelper(0x13f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetScripts()
{
	LPDISPATCH result;
	InvokeHelper(0x140, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetLanguageDetected()
{
	BOOL result;
	InvokeHelper(0x141, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetLanguageDetected(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x141, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _Document::GetFarEastLineBreakLanguage()
{
	long result;
	InvokeHelper(0x146, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetFarEastLineBreakLanguage(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x146, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Document::GetFrameset()
{
	LPDISPATCH result;
	InvokeHelper(0x147, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT _Document::GetClickAndTypeParagraphStyle()
{
	VARIANT result;
	InvokeHelper(0x148, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void _Document::SetClickAndTypeParagraphStyle(VARIANT* newValue)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x148, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _Document::GetWebOptions()
{
	LPDISPATCH result;
	InvokeHelper(0x14a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Document::GetOpenEncoding()
{
	long result;
	InvokeHelper(0x14c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long _Document::GetSaveEncoding()
{
	long result;
	InvokeHelper(0x14d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetSaveEncoding(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x14d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _Document::GetOptimizeForWord97()
{
	BOOL result;
	InvokeHelper(0x14e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetOptimizeForWord97(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x14e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetVBASigned()
{
	BOOL result;
	InvokeHelper(0x14f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::ConvertVietDoc(long CodePageOrigin)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1bf, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 CodePageOrigin);
}

void _Document::PrintOut(VARIANT* Background, VARIANT* Append, VARIANT* _Range, VARIANT* OutputFileName, VARIANT* From, VARIANT* To, VARIANT* Item, VARIANT* Copies, VARIANT* Pages, VARIANT* PageType, VARIANT* PrintToFile, VARIANT* Collate, 
		VARIANT* ActivePrinterMacGX, VARIANT* ManualDuplexPrint, VARIANT* PrintZoomColumn, VARIANT* PrintZoomRow, VARIANT* PrintZoomPaperWidth, VARIANT* PrintZoomPaperHeight)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1be, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Background, Append, _Range, OutputFileName, From, To, Item, Copies, Pages, PageType, PrintToFile, Collate, ActivePrinterMacGX, ManualDuplexPrint, PrintZoomColumn, PrintZoomRow, PrintZoomPaperWidth, PrintZoomPaperHeight);
}

LPDISPATCH _Document::GetMailEnvelope()
{
	LPDISPATCH result;
	InvokeHelper(0x150, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetDisableFeatures()
{
	BOOL result;
	InvokeHelper(0x151, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetDisableFeatures(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x151, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetDoNotEmbedSystemFonts()
{
	BOOL result;
	InvokeHelper(0x152, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetDoNotEmbedSystemFonts(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x152, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Document::GetSignatures()
{
	LPDISPATCH result;
	InvokeHelper(0x153, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString _Document::GetDefaultTargetFrame()
{
	CString result;
	InvokeHelper(0x154, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Document::SetDefaultTargetFrame(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x154, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH _Document::GetHTMLDivisions()
{
	LPDISPATCH result;
	InvokeHelper(0x156, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Document::GetDisableFeaturesIntroducedAfter()
{
	long result;
	InvokeHelper(0x157, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetDisableFeaturesIntroducedAfter(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x157, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _Document::GetRemovePersonalInformation()
{
	BOOL result;
	InvokeHelper(0x158, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetRemovePersonalInformation(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x158, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void _Document::CheckIn(BOOL SaveChanges, VARIANT* Comments, BOOL MakePublic)
{
	static BYTE parms[] =
		VTS_BOOL VTS_PVARIANT VTS_BOOL;
	InvokeHelper(0x15d, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 SaveChanges, Comments, MakePublic);
}

BOOL _Document::CanCheckin()
{
	BOOL result;
	InvokeHelper(0x15f, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::Merge(LPCTSTR FileName, VARIANT* MergeTarget, VARIANT* DetectFormatChanges, VARIANT* UseFormattingFrom, VARIANT* AddToRecentFiles)
{
	static BYTE parms[] =
		VTS_BSTR VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x16a, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName, MergeTarget, DetectFormatChanges, UseFormattingFrom, AddToRecentFiles);
}

long _Document::GetTextEncoding()
{
	long result;
	InvokeHelper(0x165, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetTextEncoding(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x165, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Document::GetTextLineEnding()
{
	long result;
	InvokeHelper(0x166, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetTextLineEnding(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x166, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void _Document::SendForReview(VARIANT* Recipients, VARIANT* Subject, VARIANT* ShowMessage, VARIANT* IncludeAttachment)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x161, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Recipients, Subject, ShowMessage, IncludeAttachment);
}

void _Document::ReplyWithChanges(VARIANT* ShowMessage)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x162, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ShowMessage);
}

void _Document::EndReview()
{
	InvokeHelper(0x164, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Document::GetStyleSheets()
{
	LPDISPATCH result;
	InvokeHelper(0x168, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT _Document::GetDefaultTableStyle()
{
	VARIANT result;
	InvokeHelper(0x16d, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString _Document::GetPasswordEncryptionProvider()
{
	CString result;
	InvokeHelper(0x16f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString _Document::GetPasswordEncryptionAlgorithm()
{
	CString result;
	InvokeHelper(0x170, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

long _Document::GetPasswordEncryptionKeyLength()
{
	long result;
	InvokeHelper(0x171, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetPasswordEncryptionFileProperties()
{
	BOOL result;
	InvokeHelper(0x172, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetPasswordEncryptionOptions(LPCTSTR PasswordEncryptionProvider, LPCTSTR PasswordEncryptionAlgorithm, long PasswordEncryptionKeyLength, VARIANT* PasswordEncryptionFileProperties)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_I4 VTS_PVARIANT;
	InvokeHelper(0x169, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 PasswordEncryptionProvider, PasswordEncryptionAlgorithm, PasswordEncryptionKeyLength, PasswordEncryptionFileProperties);
}

void _Document::SetDefaultTableStyle(VARIANT* Style, BOOL SetInTemplate)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_BOOL;
	InvokeHelper(0x16e, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Style, SetInTemplate);
}

void _Document::DeleteAllComments()
{
	InvokeHelper(0x173, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::AcceptAllRevisionsShown()
{
	InvokeHelper(0x174, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::RejectAllRevisionsShown()
{
	InvokeHelper(0x175, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::DeleteAllCommentsShown()
{
	InvokeHelper(0x176, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::ResetFormFields()
{
	InvokeHelper(0x177, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL _Document::GetEmbedLinguisticData()
{
	BOOL result;
	InvokeHelper(0x179, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetEmbedLinguisticData(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x179, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetFormattingShowFont()
{
	BOOL result;
	InvokeHelper(0x1c0, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetFormattingShowFont(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1c0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetFormattingShowClear()
{
	BOOL result;
	InvokeHelper(0x1c1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetFormattingShowClear(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1c1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetFormattingShowParagraph()
{
	BOOL result;
	InvokeHelper(0x1c2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetFormattingShowParagraph(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1c2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetFormattingShowNumbering()
{
	BOOL result;
	InvokeHelper(0x1c3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetFormattingShowNumbering(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1c3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _Document::GetFormattingShowFilter()
{
	long result;
	InvokeHelper(0x1c4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetFormattingShowFilter(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1c4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Document::GetPermission()
{
	LPDISPATCH result;
	InvokeHelper(0x1c5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetXMLSchemaReferences()
{
	LPDISPATCH result;
	InvokeHelper(0x1cd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetSmartDocument()
{
	LPDISPATCH result;
	InvokeHelper(0x1ce, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetSync()
{
	LPDISPATCH result;
	InvokeHelper(0x1d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetEnforceStyle()
{
	BOOL result;
	InvokeHelper(0x1d7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetEnforceStyle(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1d7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetAutoFormatOverride()
{
	BOOL result;
	InvokeHelper(0x1d8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetAutoFormatOverride(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1d8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetXMLShowAdvancedErrors()
{
	BOOL result;
	InvokeHelper(0x1de, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetXMLShowAdvancedErrors(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1de, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetXMLUseXSLTWhenSaving()
{
	BOOL result;
	InvokeHelper(0x1da, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetXMLUseXSLTWhenSaving(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1da, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString _Document::GetXMLSaveThroughXSLT()
{
	CString result;
	InvokeHelper(0x1db, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Document::SetXMLSaveThroughXSLT(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x1db, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH _Document::GetDocumentLibraryVersions()
{
	LPDISPATCH result;
	InvokeHelper(0x1dc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetReadingModeLayoutFrozen()
{
	BOOL result;
	InvokeHelper(0x1e1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetReadingModeLayoutFrozen(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1e1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetRemoveDateAndTime()
{
	BOOL result;
	InvokeHelper(0x1e4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetRemoveDateAndTime(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1e4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void _Document::SendFaxOverInternet(VARIANT* Recipients, VARIANT* Subject, VARIANT* ShowMessage)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1d0, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Recipients, Subject, ShowMessage);
}

void _Document::TransformDocument(LPCTSTR Path, BOOL DataOnly)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL;
	InvokeHelper(0x1f4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Path, DataOnly);
}

void _Document::Protect(long Type, VARIANT* NoReset, VARIANT* Password, VARIANT* UseIRM, VARIANT* EnforceStyleLock)
{
	static BYTE parms[] =
		VTS_I4 VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1d3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Type, NoReset, Password, UseIRM, EnforceStyleLock);
}

void _Document::SelectAllEditable_Ranges(VARIANT* EditorID)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x1d4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 EditorID);
}

void _Document::DeleteAllEditable_Ranges(VARIANT* EditorID)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x1d5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 EditorID);
}

void _Document::DeleteAllInkAnnotations()
{
	InvokeHelper(0x1df, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::Compare(LPCTSTR Name, VARIANT* AuthorName, VARIANT* CompareTarget, VARIANT* DetectFormatChanges, VARIANT* IgnoreAllComparisonWarnings, VARIANT* AddToRecentFiles, VARIANT* RemovePersonalInformation, VARIANT* RemoveDateAndTime)
{
	static BYTE parms[] =
		VTS_BSTR VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1e5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Name, AuthorName, CompareTarget, DetectFormatChanges, IgnoreAllComparisonWarnings, AddToRecentFiles, RemovePersonalInformation, RemoveDateAndTime);
}

void _Document::RemoveLockedStyles()
{
	InvokeHelper(0x1e7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Document::SelectSingleNode(LPCTSTR XPath, LPCTSTR PrefixMapping, BOOL FastSearchSkippingTextNodes)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BOOL;
	InvokeHelper(0x1e8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		XPath, PrefixMapping, FastSearchSkippingTextNodes);
	return result;
}

LPDISPATCH _Document::SelectNodes(LPCTSTR XPath, LPCTSTR PrefixMapping, BOOL FastSearchSkippingTextNodes)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BOOL;
	InvokeHelper(0x1e9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		XPath, PrefixMapping, FastSearchSkippingTextNodes);
	return result;
}

long _Document::GetReadingLayoutSizeX()
{
	long result;
	InvokeHelper(0x1eb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetReadingLayoutSizeX(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1eb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Document::GetReadingLayoutSizeY()
{
	long result;
	InvokeHelper(0x1ec, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetReadingLayoutSizeY(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1ec, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Document::GetStyleSortMethod()
{
	long result;
	InvokeHelper(0x1ed, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetStyleSortMethod(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1ed, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Document::GetContentTypeProperties()
{
	LPDISPATCH result;
	InvokeHelper(0x1f0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetTrackMoves()
{
	BOOL result;
	InvokeHelper(0x1f3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetTrackMoves(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1f3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetTrackFormatting()
{
	BOOL result;
	InvokeHelper(0x1f6, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetTrackFormatting(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1f6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Document::GetOMaths()
{
	LPDISPATCH result;
	InvokeHelper(0x1f8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Document::RemoveDocumentInformation(long RemoveDocInfoType)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1ef, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 RemoveDocInfoType);
}

void _Document::CheckInWithVersion(BOOL SaveChanges, VARIANT* Comments, BOOL MakePublic, VARIANT* VersionType)
{
	static BYTE parms[] =
		VTS_BOOL VTS_PVARIANT VTS_BOOL VTS_PVARIANT;
	InvokeHelper(0x1f5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 SaveChanges, Comments, MakePublic, VersionType);
}

LPDISPATCH _Document::GetServerPolicy()
{
	LPDISPATCH result;
	InvokeHelper(0x1fb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetContentControls()
{
	LPDISPATCH result;
	InvokeHelper(0x1fc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetDocumentInspectors()
{
	LPDISPATCH result;
	InvokeHelper(0x1fe, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Document::LockServerFile()
{
	InvokeHelper(0x1fd, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Document::GetWorkflowTasks()
{
	LPDISPATCH result;
	InvokeHelper(0x1ff, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetWorkflowTemplates()
{
	LPDISPATCH result;
	InvokeHelper(0x200, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetBibliography()
{
	LPDISPATCH result;
	InvokeHelper(0x204, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetLockTheme()
{
	BOOL result;
	InvokeHelper(0x205, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetLockTheme(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x205, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetLockQuickStyleSet()
{
	BOOL result;
	InvokeHelper(0x206, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetLockQuickStyleSet(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x206, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString _Document::GetOriginalDocumentTitle()
{
	CString result;
	InvokeHelper(0x207, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString _Document::GetRevisedDocumentTitle()
{
	CString result;
	InvokeHelper(0x208, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetCustomXMLParts()
{
	LPDISPATCH result;
	InvokeHelper(0x209, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetFormattingShowNextLevel()
{
	BOOL result;
	InvokeHelper(0x20a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetFormattingShowNextLevel(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x20a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetFormattingShowUserStyleName()
{
	BOOL result;
	InvokeHelper(0x20b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetFormattingShowUserStyleName(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x20b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void _Document::SaveAsQuickStyleSet(LPCTSTR FileName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x20c, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName);
}

LPDISPATCH _Document::GetResearch()
{
	LPDISPATCH result;
	InvokeHelper(0x20e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetFinal()
{
	BOOL result;
	InvokeHelper(0x20f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetFinal(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x20f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _Document::GetOMathBreakBin()
{
	long result;
	InvokeHelper(0x210, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetOMathBreakBin(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x210, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Document::GetOMathBreakSub()
{
	long result;
	InvokeHelper(0x211, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetOMathBreakSub(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x211, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Document::GetOMathJc()
{
	long result;
	InvokeHelper(0x212, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SetOMathJc(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x212, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float _Document::GetOMathLeftMargin()
{
	float result;
	InvokeHelper(0x213, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Document::SetOMathLeftMargin(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x213, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float _Document::GetOMathRightMargin()
{
	float result;
	InvokeHelper(0x214, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Document::SetOMathRightMargin(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x214, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float _Document::GetOMathWrap()
{
	float result;
	InvokeHelper(0x217, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Document::SetOMathWrap(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x217, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL _Document::GetOMathIntSubSupLim()
{
	BOOL result;
	InvokeHelper(0x218, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetOMathIntSubSupLim(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x218, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetOMathNarySupSubLim()
{
	BOOL result;
	InvokeHelper(0x219, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetOMathNarySupSubLim(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x219, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetOMathSmallFrac()
{
	BOOL result;
	InvokeHelper(0x21b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetOMathSmallFrac(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x21b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString _Document::GetWordOpenXML()
{
	CString result;
	InvokeHelper(0x21e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::GetDocumentTheme()
{
	LPDISPATCH result;
	InvokeHelper(0x221, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Document::ApplyDocumentTheme(LPCTSTR FileName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x222, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName);
}

BOOL _Document::GetHasVBProject()
{
	BOOL result;
	InvokeHelper(0x224, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Document::SelectLinkedControls(LPDISPATCH Node)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x225, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Node);
	return result;
}

LPDISPATCH _Document::SelectUnlinkedControls(LPDISPATCH Stream)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x226, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Stream);
	return result;
}

LPDISPATCH _Document::SelectContentControlsByTitle(LPCTSTR Title)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x227, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Title);
	return result;
}

void _Document::ExportAsFixedFormat(LPCTSTR OutputFileName, long ExportFormat, BOOL OpenAfterExport, long OptimizeFor, long _Range, long From, long To, long Item, BOOL IncludeDocProps, BOOL KeepIRM, long CreateBookmarks, BOOL DocStructureTags, 
		BOOL BitmapMissingFonts, BOOL UseISO19005_1, VARIANT* FixedFormatExtClassPtr)
{
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_BOOL VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_BOOL VTS_BOOL VTS_I4 VTS_BOOL VTS_BOOL VTS_BOOL VTS_PVARIANT;
	InvokeHelper(0x228, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 OutputFileName, ExportFormat, OpenAfterExport, OptimizeFor, _Range, From, To, Item, IncludeDocProps, KeepIRM, CreateBookmarks, DocStructureTags, BitmapMissingFonts, UseISO19005_1, FixedFormatExtClassPtr);
}

void _Document::FreezeLayout()
{
	InvokeHelper(0x229, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

CString _Document::GetOMathFontName()
{
	CString result;
	InvokeHelper(0x22b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Document::SetOMathFontName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x22b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

void _Document::DowngradeDocument()
{
	InvokeHelper(0x22e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

CString _Document::GetEncryptionProvider()
{
	CString result;
	InvokeHelper(0x22f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Document::SetEncryptionProvider(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x22f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL _Document::GetUseMathDefaults()
{
	BOOL result;
	InvokeHelper(0x230, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetUseMathDefaults(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x230, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _Document::GetCurrentRsid()
{
	long result;
	InvokeHelper(0x233, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::Convert()
{
	InvokeHelper(0x231, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Document::SelectContentControlsByTag(LPCTSTR Tag)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x232, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Tag);
	return result;
}

void _Document::ConvertAutoHyphens()
{
	InvokeHelper(0x28a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Document::ApplyQuickStyleSet2(VARIANT* Style)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x236, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Style);
}

long _Document::GetCompatibilityMode()
{
	long result;
	InvokeHelper(0x237, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Document::SaveAs2(VARIANT* FileName, VARIANT* FileFormat, VARIANT* LockComments, VARIANT* Password, VARIANT* AddToRecentFiles, VARIANT* WritePassword, VARIANT* ReadOnlyRecommended, VARIANT* EmbedTrueTypeFonts, VARIANT* SaveNativePictureFormat, 
		VARIANT* SaveFormsData, VARIANT* SaveAsAOCELetter, VARIANT* Encoding, VARIANT* InsertLineBreaks, VARIANT* AllowSubstitutions, VARIANT* LineEnding, VARIANT* AddBiDiMarks, VARIANT* CompatibilityMode)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x238, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName, FileFormat, LockComments, Password, AddToRecentFiles, WritePassword, ReadOnlyRecommended, EmbedTrueTypeFonts, SaveNativePictureFormat, SaveFormsData, SaveAsAOCELetter, Encoding, InsertLineBreaks, AllowSubstitutions, LineEnding, 
		AddBiDiMarks, CompatibilityMode);
}

LPDISPATCH _Document::GetCoAuthoring()
{
	LPDISPATCH result;
	InvokeHelper(0x258, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Document::SetCompatibilityMode(long Mode)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x23b, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Mode);
}

LPDISPATCH _Document::GetBroadcast()
{
	LPDISPATCH result;
	InvokeHelper(0x262, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Document::ReturnToLastReadPosition()
{
	long result;
	InvokeHelper(0x23c, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL _Document::GetChartDataPointTrack()
{
	BOOL result;
	InvokeHelper(0x26a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Document::SetChartDataPointTrack(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x26a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Document::GetIsInAutosave()
{
	BOOL result;
	InvokeHelper(0x26b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// _Range properties

/////////////////////////////////////////////////////////////////////////////
// _Range operations

CString _Range::GetText()
{
	CString result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Range::SetText(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH _Range::GetFormattedText()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Range::SetFormattedText(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long _Range::GetStart()
{
	long result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Range::SetStart(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Range::GetEnd()
{
	long result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Range::SetEnd(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Range::GetFont()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Range::SetFont(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _Range::GetDuplicate()
{
	LPDISPATCH result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Range::GetStoryType()
{
	long result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetTables()
{
	LPDISPATCH result;
	InvokeHelper(0x32, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetWords()
{
	LPDISPATCH result;
	InvokeHelper(0x33, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetSentences()
{
	LPDISPATCH result;
	InvokeHelper(0x34, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetCharacters()
{
	LPDISPATCH result;
	InvokeHelper(0x35, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetFootnotes()
{
	LPDISPATCH result;
	InvokeHelper(0x36, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetEndnotes()
{
	LPDISPATCH result;
	InvokeHelper(0x37, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetComments()
{
	LPDISPATCH result;
	InvokeHelper(0x38, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetCells()
{
	LPDISPATCH result;
	InvokeHelper(0x39, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetSections()
{
	LPDISPATCH result;
	InvokeHelper(0x3a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetParagraphs()
{
	LPDISPATCH result;
	InvokeHelper(0x3b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetBorders()
{
	LPDISPATCH result;
	InvokeHelper(0x44c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Range::SetBorders(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _Range::GetShading()
{
	LPDISPATCH result;
	InvokeHelper(0x3d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetTextRetrievalMode()
{
	LPDISPATCH result;
	InvokeHelper(0x3e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Range::SetTextRetrievalMode(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _Range::GetFields()
{
	LPDISPATCH result;
	InvokeHelper(0x40, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetFormFields()
{
	LPDISPATCH result;
	InvokeHelper(0x41, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetFrames()
{
	LPDISPATCH result;
	InvokeHelper(0x42, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetParagraphFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x44e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Range::SetParagraphFormat(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _Range::GetListFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x44, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetBookmarks()
{
	LPDISPATCH result;
	InvokeHelper(0x4b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Range::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Range::GetBold()
{
	long result;
	InvokeHelper(0x82, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Range::SetBold(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x82, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Range::GetItalic()
{
	long result;
	InvokeHelper(0x83, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Range::SetItalic(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x83, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Range::GetUnderline()
{
	long result;
	InvokeHelper(0x8b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Range::SetUnderline(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Range::GetEmphasisMark()
{
	long result;
	InvokeHelper(0x8c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Range::SetEmphasisMark(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _Range::GetDisableCharacterSpaceGrid()
{
	BOOL result;
	InvokeHelper(0x8d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Range::SetDisableCharacterSpaceGrid(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x8d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Range::GetRevisions()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT _Range::GetStyle()
{
	VARIANT result;
	InvokeHelper(0x97, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void _Range::SetStyle(VARIANT* newValue)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x97, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long _Range::GetStoryLength()
{
	long result;
	InvokeHelper(0x98, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long _Range::GetLanguageID()
{
	long result;
	InvokeHelper(0x99, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Range::SetLanguageID(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x99, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Range::GetSynonymInfo()
{
	LPDISPATCH result;
	InvokeHelper(0x9b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetHyperlinks()
{
	LPDISPATCH result;
	InvokeHelper(0x9c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetListParagraphs()
{
	LPDISPATCH result;
	InvokeHelper(0x9d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetSubdocuments()
{
	LPDISPATCH result;
	InvokeHelper(0x9f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Range::GetGrammarChecked()
{
	BOOL result;
	InvokeHelper(0x104, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Range::SetGrammarChecked(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x104, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Range::GetSpellingChecked()
{
	BOOL result;
	InvokeHelper(0x105, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Range::SetSpellingChecked(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x105, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _Range::GetHighlightColorIndex()
{
	long result;
	InvokeHelper(0x12d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Range::SetHighlightColorIndex(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x12d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Range::GetColumns()
{
	LPDISPATCH result;
	InvokeHelper(0x12e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetRows()
{
	LPDISPATCH result;
	InvokeHelper(0x12f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Range::GetIsEndOfRowMark()
{
	BOOL result;
	InvokeHelper(0x133, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

long _Range::GetBookmarkID()
{
	long result;
	InvokeHelper(0x134, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long _Range::GetPreviousBookmarkID()
{
	long result;
	InvokeHelper(0x135, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetFind()
{
	LPDISPATCH result;
	InvokeHelper(0x106, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetPageSetup()
{
	LPDISPATCH result;
	InvokeHelper(0x44d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Range::SetPageSetup(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _Range::GetShape_Range()
{
	LPDISPATCH result;
	InvokeHelper(0x137, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Range::GetCase()
{
	long result;
	InvokeHelper(0x138, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Range::SetCase(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x138, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

VARIANT _Range::GetInformation(long Type)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x139, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms,
		Type);
	return result;
}

LPDISPATCH _Range::GetReadabilityStatistics()
{
	LPDISPATCH result;
	InvokeHelper(0x13a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetGrammaticalErrors()
{
	LPDISPATCH result;
	InvokeHelper(0x13b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetSpellingErrors()
{
	LPDISPATCH result;
	InvokeHelper(0x13c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Range::GetOrientation()
{
	long result;
	InvokeHelper(0x13d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Range::SetOrientation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x13d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Range::GetInlineShapes()
{
	LPDISPATCH result;
	InvokeHelper(0x13f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetNextStory_Range()
{
	LPDISPATCH result;
	InvokeHelper(0x140, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Range::GetLanguageIDFarEast()
{
	long result;
	InvokeHelper(0x141, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Range::SetLanguageIDFarEast(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x141, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Range::GetLanguageIDOther()
{
	long result;
	InvokeHelper(0x142, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Range::SetLanguageIDOther(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x142, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void _Range::Select()
{
	InvokeHelper(0xffff, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Range::Set_Range(long Start, long End)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x64, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Start, End);
}

void _Range::Collapse(VARIANT* Direction)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x65, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Direction);
}

void _Range::InsertBefore(LPCTSTR Text)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x66, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Text);
}

void _Range::InsertAfter(LPCTSTR Text)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x68, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Text);
}

LPDISPATCH _Range::Next(VARIANT* Unit, VARIANT* Count)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x69, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Unit, Count);
	return result;
}

LPDISPATCH _Range::Previous(VARIANT* Unit, VARIANT* Count)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6a, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Unit, Count);
	return result;
}

long _Range::StartOf(VARIANT* Unit, VARIANT* Extend)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Extend);
	return result;
}

long _Range::EndOf(VARIANT* Unit, VARIANT* Extend)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Extend);
	return result;
}

long _Range::Move(VARIANT* Unit, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6d, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Count);
	return result;
}

long _Range::MoveStart(VARIANT* Unit, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Count);
	return result;
}

long _Range::MoveEnd(VARIANT* Unit, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Count);
	return result;
}

long _Range::MoveWhile(VARIANT* Cset, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x70, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Cset, Count);
	return result;
}

long _Range::MoveStartWhile(VARIANT* Cset, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x71, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Cset, Count);
	return result;
}

long _Range::MoveEndWhile(VARIANT* Cset, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x72, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Cset, Count);
	return result;
}

long _Range::MoveUntil(VARIANT* Cset, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x73, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Cset, Count);
	return result;
}

long _Range::MoveStartUntil(VARIANT* Cset, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x74, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Cset, Count);
	return result;
}

long _Range::MoveEndUntil(VARIANT* Cset, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x75, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Cset, Count);
	return result;
}

void _Range::Cut()
{
	InvokeHelper(0x77, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Range::Copy()
{
	InvokeHelper(0x78, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Range::Paste()
{
	InvokeHelper(0x79, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Range::InsertBreak(VARIANT* Type)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x7a, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Type);
}

void _Range::InsertFile(LPCTSTR FileName, VARIANT* _Range, VARIANT* ConfirmConversions, VARIANT* Link, VARIANT* Attachment)
{
	static BYTE parms[] =
		VTS_BSTR VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x7b, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName, _Range, ConfirmConversions, Link, Attachment);
}

BOOL _Range::InStory(LPDISPATCH _Range)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7d, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		_Range);
	return result;
}

BOOL _Range::In_Range(LPDISPATCH _Range)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7e, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		_Range);
	return result;
}

long _Range::Delete(VARIANT* Unit, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x7f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Count);
	return result;
}

void _Range::WholeStory()
{
	InvokeHelper(0x80, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long _Range::Expand(VARIANT* Unit)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x81, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit);
	return result;
}

void _Range::InsertParagraph()
{
	InvokeHelper(0xa0, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Range::InsertParagraphAfter()
{
	InvokeHelper(0xa1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Range::InsertSymbol(long CharacterNumber, VARIANT* Font, VARIANT* Unicode, VARIANT* Bias)
{
	static BYTE parms[] =
		VTS_I4 VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xa4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 CharacterNumber, Font, Unicode, Bias);
}

void _Range::CopyAsPicture()
{
	InvokeHelper(0xa7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Range::SortAscending()
{
	InvokeHelper(0xa9, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Range::SortDescending()
{
	InvokeHelper(0xaa, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL _Range::IsEqual(LPDISPATCH _Range)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xab, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		_Range);
	return result;
}

float _Range::Calculate()
{
	float result;
	InvokeHelper(0xac, DISPATCH_METHOD, VT_R4, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GoTo(VARIANT* What, VARIANT* Which, VARIANT* Count, VARIANT* Name)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xad, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		What, Which, Count, Name);
	return result;
}

LPDISPATCH _Range::GoToNext(long What)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xae, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		What);
	return result;
}

LPDISPATCH _Range::GoToPrevious(long What)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xaf, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		What);
	return result;
}

void _Range::PasteSpecial(VARIANT* IconIndex, VARIANT* Link, VARIANT* Placement, VARIANT* DisplayAsIcon, VARIANT* DataType, VARIANT* IconFileName, VARIANT* IconLabel)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xb0, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 IconIndex, Link, Placement, DisplayAsIcon, DataType, IconFileName, IconLabel);
}

void _Range::LookupNameProperties()
{
	InvokeHelper(0xb1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long _Range::ComputeStatistics(long Statistic)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb2, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Statistic);
	return result;
}

void _Range::Relocate(long Direction)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Direction);
}

void _Range::CheckSynonyms()
{
	InvokeHelper(0xb4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Range::InsertAutoText()
{
	InvokeHelper(0xb7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Range::InsertDatabase(VARIANT* Format, VARIANT* Style, VARIANT* LinkToSource, VARIANT* Connection, VARIANT* SQLStatement, VARIANT* SQLStatement1, VARIANT* PasswordDocument, VARIANT* PasswordTemplate, VARIANT* WritePasswordDocument, 
		VARIANT* WritePasswordTemplate, VARIANT* DataSource, VARIANT* From, VARIANT* To, VARIANT* IncludeFields)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xc2, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Format, Style, LinkToSource, Connection, SQLStatement, SQLStatement1, PasswordDocument, PasswordTemplate, WritePasswordDocument, WritePasswordTemplate, DataSource, From, To, IncludeFields);
}

void _Range::AutoFormat()
{
	InvokeHelper(0xc3, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Range::CheckGrammar()
{
	InvokeHelper(0xcc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Range::CheckSpelling(VARIANT* CustomDictionary, VARIANT* IgnoreUppercase, VARIANT* AlwaysSuggest, VARIANT* CustomDictionary2, VARIANT* CustomDictionary3, VARIANT* CustomDictionary4, VARIANT* CustomDictionary5, VARIANT* CustomDictionary6, 
		VARIANT* CustomDictionary7, VARIANT* CustomDictionary8, VARIANT* CustomDictionary9, VARIANT* CustomDictionary10)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xcd, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 CustomDictionary, IgnoreUppercase, AlwaysSuggest, CustomDictionary2, CustomDictionary3, CustomDictionary4, CustomDictionary5, CustomDictionary6, CustomDictionary7, CustomDictionary8, CustomDictionary9, CustomDictionary10);
}

LPDISPATCH _Range::GetSpellingSuggestions(VARIANT* CustomDictionary, VARIANT* IgnoreUppercase, VARIANT* MainDictionary, VARIANT* SuggestionMode, VARIANT* CustomDictionary2, VARIANT* CustomDictionary3, VARIANT* CustomDictionary4, 
		VARIANT* CustomDictionary5, VARIANT* CustomDictionary6, VARIANT* CustomDictionary7, VARIANT* CustomDictionary8, VARIANT* CustomDictionary9, VARIANT* CustomDictionary10)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xd1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		CustomDictionary, IgnoreUppercase, MainDictionary, SuggestionMode, CustomDictionary2, CustomDictionary3, CustomDictionary4, CustomDictionary5, CustomDictionary6, CustomDictionary7, CustomDictionary8, CustomDictionary9, CustomDictionary10);
	return result;
}

void _Range::InsertParagraphBefore()
{
	InvokeHelper(0xd4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Range::NextSubdocument()
{
	InvokeHelper(0xdb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Range::PreviousSubdocument()
{
	InvokeHelper(0xdc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Range::ConvertHangulAndHanja(VARIANT* ConversionsMode, VARIANT* FastConversion, VARIANT* CheckHangulEnding, VARIANT* EnableRecentOrdering, VARIANT* CustomDictionary)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xdd, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ConversionsMode, FastConversion, CheckHangulEnding, EnableRecentOrdering, CustomDictionary);
}

void _Range::PasteAsNestedTable()
{
	InvokeHelper(0xde, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Range::ModifyEnclosure(VARIANT* Style, VARIANT* Symbol, VARIANT* EnclosedText)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xdf, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Style, Symbol, EnclosedText);
}

void _Range::PhoneticGuide(LPCTSTR Text, long Alignment, long Raise, long FontSize, LPCTSTR FontName)
{
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4 VTS_I4 VTS_BSTR;
	InvokeHelper(0xe0, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Text, Alignment, Raise, FontSize, FontName);
}

void _Range::InsertDateTime(VARIANT* DateTimeFormat, VARIANT* InsertAsField, VARIANT* InsertAsFullWidth, VARIANT* DateLanguage, VARIANT* CalendarType)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1bc, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 DateTimeFormat, InsertAsField, InsertAsFullWidth, DateLanguage, CalendarType);
}

void _Range::Sort(VARIANT* ExcludeHeader, VARIANT* FieldNumber, VARIANT* SortFieldType, VARIANT* SortOrder, VARIANT* FieldNumber2, VARIANT* SortFieldType2, VARIANT* SortOrder2, VARIANT* FieldNumber3, VARIANT* SortFieldType3, VARIANT* SortOrder3, 
		VARIANT* SortColumn, VARIANT* Separator, VARIANT* CaseSensitive, VARIANT* BidiSort, VARIANT* IgnoreThe, VARIANT* IgnoreKashida, VARIANT* IgnoreDiacritics, VARIANT* IgnoreHe, VARIANT* LanguageID)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT 
		VTS_PVARIANT;
	InvokeHelper(0x1e4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ExcludeHeader, FieldNumber, SortFieldType, SortOrder, FieldNumber2, SortFieldType2, SortOrder2, FieldNumber3, SortFieldType3, SortOrder3, SortColumn, Separator, CaseSensitive, BidiSort, IgnoreThe, IgnoreKashida, IgnoreDiacritics, 
		IgnoreHe, LanguageID);
}

void _Range::DetectLanguage()
{
	InvokeHelper(0xcb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Range::ConvertToTable(VARIANT* Separator, VARIANT* NumRows, VARIANT* NumColumns, VARIANT* InitialColumnWidth, VARIANT* Format, VARIANT* ApplyBorders, VARIANT* ApplyShading, VARIANT* ApplyFont, VARIANT* ApplyColor, 
		VARIANT* ApplyHeadingRows, VARIANT* ApplyLastRow, VARIANT* ApplyFirstColumn, VARIANT* ApplyLastColumn, VARIANT* AutoFit, VARIANT* AutoFitBehavior, VARIANT* DefaultTableBehavior)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1f2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Separator, NumRows, NumColumns, InitialColumnWidth, Format, ApplyBorders, ApplyShading, ApplyFont, ApplyColor, ApplyHeadingRows, ApplyLastRow, ApplyFirstColumn, ApplyLastColumn, AutoFit, AutoFitBehavior, DefaultTableBehavior);
	return result;
}

void _Range::TCSCConverter(long WdTCSCConverterDirection, BOOL CommonTerms, BOOL UseVariants)
{
	static BYTE parms[] =
		VTS_I4 VTS_BOOL VTS_BOOL;
	InvokeHelper(0x1f3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 WdTCSCConverterDirection, CommonTerms, UseVariants);
}

BOOL _Range::GetLanguageDetected()
{
	BOOL result;
	InvokeHelper(0x107, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Range::SetLanguageDetected(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x107, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

float _Range::GetFitTextWidth()
{
	float result;
	InvokeHelper(0x108, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Range::SetFitTextWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x108, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long _Range::GetHorizontalInVertical()
{
	long result;
	InvokeHelper(0x109, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Range::SetHorizontalInVertical(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x109, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Range::GetTwoLinesInOne()
{
	long result;
	InvokeHelper(0x10a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Range::SetTwoLinesInOne(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x10a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _Range::GetCombineCharacters()
{
	BOOL result;
	InvokeHelper(0x10b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Range::SetCombineCharacters(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x10b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _Range::GetNoProofing()
{
	long result;
	InvokeHelper(0x143, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Range::SetNoProofing(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x143, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Range::GetTopLevelTables()
{
	LPDISPATCH result;
	InvokeHelper(0x144, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetScripts()
{
	LPDISPATCH result;
	InvokeHelper(0x145, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Range::GetCharacterWidth()
{
	long result;
	InvokeHelper(0x146, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Range::SetCharacterWidth(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x146, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Range::GetKana()
{
	long result;
	InvokeHelper(0x147, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Range::SetKana(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x147, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Range::GetBoldBi()
{
	long result;
	InvokeHelper(0x190, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Range::SetBoldBi(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x190, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Range::GetItalicBi()
{
	long result;
	InvokeHelper(0x191, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Range::SetItalicBi(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x191, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString _Range::GetId()
{
	CString result;
	InvokeHelper(0x195, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Range::SetId(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x195, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH _Range::GetHTMLDivisions()
{
	LPDISPATCH result;
	InvokeHelper(0x196, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Range::GetShowAll()
{
	BOOL result;
	InvokeHelper(0x198, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Range::SetShowAll(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x198, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Range::GetDocument()
{
	LPDISPATCH result;
	InvokeHelper(0x199, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetFootnoteOptions()
{
	LPDISPATCH result;
	InvokeHelper(0x19a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetEndnoteOptions()
{
	LPDISPATCH result;
	InvokeHelper(0x19b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Range::PasteAndFormat(long Type)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x19c, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Type);
}

void _Range::PasteExcelTable(BOOL LinkedToExcel, BOOL WordFormatting, BOOL RTF)
{
	static BYTE parms[] =
		VTS_BOOL VTS_BOOL VTS_BOOL;
	InvokeHelper(0x19d, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 LinkedToExcel, WordFormatting, RTF);
}

void _Range::PasteAppendTable()
{
	InvokeHelper(0x19e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Range::GetEditors()
{
	LPDISPATCH result;
	InvokeHelper(0x157, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString _Range::GetXml(BOOL DataOnly)
{
	CString result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x158, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms,
		DataOnly);
	return result;
}

VARIANT _Range::GetEnhMetaFileBits()
{
	VARIANT result;
	InvokeHelper(0x159, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GoToEditable_Range(VARIANT* EditorID)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x19f, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		EditorID);
	return result;
}

void _Range::InsertXML(LPCTSTR XML, VARIANT* Transform)
{
	static BYTE parms[] =
		VTS_BSTR VTS_PVARIANT;
	InvokeHelper(0x1a0, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 XML, Transform);
}

void _Range::InsertCaption(VARIANT* Label, VARIANT* Title, VARIANT* TitleAutoText, VARIANT* Position, VARIANT* ExcludeLabel)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1a1, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Label, Title, TitleAutoText, Position, ExcludeLabel);
}

void _Range::InsertCrossReference(VARIANT* ReferenceType, long ReferenceKind, VARIANT* ReferenceItem, VARIANT* InsertAsHyperlink, VARIANT* IncludePosition, VARIANT* SeparateNumbers, VARIANT* SeparatorString)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_I4 VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1a2, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ReferenceType, ReferenceKind, ReferenceItem, InsertAsHyperlink, IncludePosition, SeparateNumbers, SeparatorString);
}

LPDISPATCH _Range::GetOMaths()
{
	LPDISPATCH result;
	InvokeHelper(0x15a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT _Range::GetCharacterStyle()
{
	VARIANT result;
	InvokeHelper(0x1a4, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT _Range::GetParagraphStyle()
{
	VARIANT result;
	InvokeHelper(0x1a5, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT _Range::GetListStyle()
{
	VARIANT result;
	InvokeHelper(0x1a6, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT _Range::GetTableStyle()
{
	VARIANT result;
	InvokeHelper(0x1a7, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetContentControls()
{
	LPDISPATCH result;
	InvokeHelper(0x1a8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Range::ExportFragment(LPCTSTR FileName, long Format)
{
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x1a9, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName, Format);
}

CString _Range::GetWordOpenXML()
{
	CString result;
	InvokeHelper(0x1aa, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Range::SetListLevel(short Level)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x1ab, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Level);
}

void _Range::InsertAlignmentTab(long Alignment, long RelativeTo)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x1f4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Alignment, RelativeTo);
}

LPDISPATCH _Range::GetParentContentControl()
{
	LPDISPATCH result;
	InvokeHelper(0x1f5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Range::ImportFragment(LPCTSTR FileName, BOOL MatchDestination)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL;
	InvokeHelper(0x1f6, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName, MatchDestination);
}

void _Range::ExportAsFixedFormat(LPCTSTR OutputFileName, long ExportFormat, BOOL OpenAfterExport, long OptimizeFor, BOOL ExportCurrentPage, long Item, BOOL IncludeDocProps, BOOL KeepIRM, long CreateBookmarks, BOOL DocStructureTags, 
		BOOL BitmapMissingFonts, BOOL UseISO19005_1, VARIANT* FixedFormatExtClassPtr)
{
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_BOOL VTS_I4 VTS_BOOL VTS_I4 VTS_BOOL VTS_BOOL VTS_I4 VTS_BOOL VTS_BOOL VTS_BOOL VTS_PVARIANT;
	InvokeHelper(0x1f7, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 OutputFileName, ExportFormat, OpenAfterExport, OptimizeFor, ExportCurrentPage, Item, IncludeDocProps, KeepIRM, CreateBookmarks, DocStructureTags, BitmapMissingFonts, UseISO19005_1, FixedFormatExtClassPtr);
}

LPDISPATCH _Range::GetLocks()
{
	LPDISPATCH result;
	InvokeHelper(0x1f8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetUpdates()
{
	LPDISPATCH result;
	InvokeHelper(0x1f9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Range::GetConflicts()
{
	LPDISPATCH result;
	InvokeHelper(0x1fa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Range::GetTextVisibleOnScreen()
{
	long result;
	InvokeHelper(0x1fb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Range::SortByHeadings(VARIANT* SortFieldType, VARIANT* SortOrder, VARIANT* CaseSensitive, VARIANT* BidiSort, VARIANT* IgnoreThe, VARIANT* IgnoreKashida, VARIANT* IgnoreDiacritics, VARIANT* IgnoreHe, VARIANT* LanguageID)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1fc, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 SortFieldType, SortOrder, CaseSensitive, BidiSort, IgnoreThe, IgnoreKashida, IgnoreDiacritics, IgnoreHe, LanguageID);
}


/////////////////////////////////////////////////////////////////////////////
// _ParagraphFormat properties

/////////////////////////////////////////////////////////////////////////////
// _ParagraphFormat operations

LPDISPATCH _ParagraphFormat::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _ParagraphFormat::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ParagraphFormat::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ParagraphFormat::GetDuplicate()
{
	LPDISPATCH result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT _ParagraphFormat::GetStyle()
{
	VARIANT result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetStyle(VARIANT* newValue)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x64, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long _ParagraphFormat::GetAlignment()
{
	long result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetAlignment(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x65, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _ParagraphFormat::GetKeepTogether()
{
	long result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetKeepTogether(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x66, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _ParagraphFormat::GetKeepWithNext()
{
	long result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetKeepWithNext(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _ParagraphFormat::GetPageBreakBefore()
{
	long result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetPageBreakBefore(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x68, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _ParagraphFormat::GetNoLineNumber()
{
	long result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetNoLineNumber(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x69, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float _ParagraphFormat::GetRightIndent()
{
	float result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetRightIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float _ParagraphFormat::GetLeftIndent()
{
	float result;
	InvokeHelper(0x6b, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetLeftIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float _ParagraphFormat::GetFirstLineIndent()
{
	float result;
	InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetFirstLineIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float _ParagraphFormat::GetLineSpacing()
{
	float result;
	InvokeHelper(0x6d, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetLineSpacing(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long _ParagraphFormat::GetLineSpacingRule()
{
	long result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetLineSpacingRule(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float _ParagraphFormat::GetSpaceBefore()
{
	float result;
	InvokeHelper(0x6f, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetSpaceBefore(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float _ParagraphFormat::GetSpaceAfter()
{
	float result;
	InvokeHelper(0x70, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetSpaceAfter(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x70, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long _ParagraphFormat::GetHyphenation()
{
	long result;
	InvokeHelper(0x71, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetHyphenation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x71, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _ParagraphFormat::GetWidowControl()
{
	long result;
	InvokeHelper(0x72, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetWidowControl(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x72, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _ParagraphFormat::GetFarEastLineBreakControl()
{
	long result;
	InvokeHelper(0x75, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetFarEastLineBreakControl(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x75, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _ParagraphFormat::GetWordWrap()
{
	long result;
	InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetWordWrap(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x76, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _ParagraphFormat::GetHangingPunctuation()
{
	long result;
	InvokeHelper(0x77, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetHangingPunctuation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x77, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _ParagraphFormat::GetHalfWidthPunctuationOnTopOfLine()
{
	long result;
	InvokeHelper(0x78, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetHalfWidthPunctuationOnTopOfLine(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x78, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _ParagraphFormat::GetAddSpaceBetweenFarEastAndAlpha()
{
	long result;
	InvokeHelper(0x79, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetAddSpaceBetweenFarEastAndAlpha(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x79, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _ParagraphFormat::GetAddSpaceBetweenFarEastAndDigit()
{
	long result;
	InvokeHelper(0x7a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetAddSpaceBetweenFarEastAndDigit(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _ParagraphFormat::GetBaseLineAlignment()
{
	long result;
	InvokeHelper(0x7b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetBaseLineAlignment(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _ParagraphFormat::GetAutoAdjustRightIndent()
{
	long result;
	InvokeHelper(0x7c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetAutoAdjustRightIndent(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _ParagraphFormat::GetDisableLineHeightGrid()
{
	long result;
	InvokeHelper(0x7d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetDisableLineHeightGrid(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _ParagraphFormat::GetTabStops()
{
	LPDISPATCH result;
	InvokeHelper(0x44f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetTabStops(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _ParagraphFormat::GetBorders()
{
	LPDISPATCH result;
	InvokeHelper(0x44c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetBorders(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _ParagraphFormat::GetShading()
{
	LPDISPATCH result;
	InvokeHelper(0x44d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _ParagraphFormat::GetOutlineLevel()
{
	long result;
	InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetOutlineLevel(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xca, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void _ParagraphFormat::CloseUp()
{
	InvokeHelper(0x12d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _ParagraphFormat::OpenUp()
{
	InvokeHelper(0x12e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _ParagraphFormat::OpenOrCloseUp()
{
	InvokeHelper(0x12f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _ParagraphFormat::TabHangingIndent(short Count)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x130, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Count);
}

void _ParagraphFormat::TabIndent(short Count)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x132, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Count);
}

void _ParagraphFormat::Reset()
{
	InvokeHelper(0x138, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _ParagraphFormat::Space1()
{
	InvokeHelper(0x139, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _ParagraphFormat::Space15()
{
	InvokeHelper(0x13a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _ParagraphFormat::Space2()
{
	InvokeHelper(0x13b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _ParagraphFormat::IndentCharWidth(short Count)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x140, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Count);
}

void _ParagraphFormat::IndentFirstLineCharWidth(short Count)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x142, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Count);
}

float _ParagraphFormat::GetCharacterUnitRightIndent()
{
	float result;
	InvokeHelper(0x7e, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetCharacterUnitRightIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float _ParagraphFormat::GetCharacterUnitLeftIndent()
{
	float result;
	InvokeHelper(0x7f, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetCharacterUnitLeftIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float _ParagraphFormat::GetCharacterUnitFirstLineIndent()
{
	float result;
	InvokeHelper(0x80, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetCharacterUnitFirstLineIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x80, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float _ParagraphFormat::GetLineUnitBefore()
{
	float result;
	InvokeHelper(0x81, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetLineUnitBefore(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x81, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float _ParagraphFormat::GetLineUnitAfter()
{
	float result;
	InvokeHelper(0x82, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetLineUnitAfter(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x82, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long _ParagraphFormat::GetReadingOrder()
{
	long result;
	InvokeHelper(0x83, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetReadingOrder(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x83, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _ParagraphFormat::GetSpaceBeforeAuto()
{
	long result;
	InvokeHelper(0x84, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetSpaceBeforeAuto(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x84, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _ParagraphFormat::GetSpaceAfterAuto()
{
	long result;
	InvokeHelper(0x85, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetSpaceAfterAuto(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x85, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _ParagraphFormat::GetMirrorIndents()
{
	long result;
	InvokeHelper(0x86, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetMirrorIndents(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x86, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _ParagraphFormat::GetTextboxTightWrap()
{
	long result;
	InvokeHelper(0x87, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetTextboxTightWrap(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x87, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _ParagraphFormat::GetCollapsedByDefault()
{
	long result;
	InvokeHelper(0x88, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ParagraphFormat::SetCollapsedByDefault(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x88, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// _Font properties

/////////////////////////////////////////////////////////////////////////////
// _Font operations

LPDISPATCH _Font::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Font::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Font::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Font::GetDuplicate()
{
	LPDISPATCH result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Font::GetBold()
{
	long result;
	InvokeHelper(0x82, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetBold(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x82, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetItalic()
{
	long result;
	InvokeHelper(0x83, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetItalic(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x83, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetHidden()
{
	long result;
	InvokeHelper(0x84, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetHidden(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x84, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetSmallCaps()
{
	long result;
	InvokeHelper(0x85, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetSmallCaps(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x85, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetAllCaps()
{
	long result;
	InvokeHelper(0x86, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetAllCaps(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x86, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetStrikeThrough()
{
	long result;
	InvokeHelper(0x87, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetStrikeThrough(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x87, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetDoubleStrikeThrough()
{
	long result;
	InvokeHelper(0x88, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetDoubleStrikeThrough(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x88, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetColorIndex()
{
	long result;
	InvokeHelper(0x89, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetColorIndex(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x89, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetSubscript()
{
	long result;
	InvokeHelper(0x8a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetSubscript(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetSuperscript()
{
	long result;
	InvokeHelper(0x8b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetSuperscript(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetUnderline()
{
	long result;
	InvokeHelper(0x8c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetUnderline(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float _Font::GetSize()
{
	float result;
	InvokeHelper(0x8d, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Font::SetSize(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x8d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

CString _Font::GetName()
{
	CString result;
	InvokeHelper(0x8e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Font::SetName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x8e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long _Font::GetPosition()
{
	long result;
	InvokeHelper(0x8f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetPosition(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float _Font::GetSpacing()
{
	float result;
	InvokeHelper(0x90, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Font::SetSpacing(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x90, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long _Font::GetScaling()
{
	long result;
	InvokeHelper(0x91, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetScaling(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x91, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetShadow()
{
	long result;
	InvokeHelper(0x92, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetShadow(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x92, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetOutline()
{
	long result;
	InvokeHelper(0x93, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetOutline(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x93, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetEmboss()
{
	long result;
	InvokeHelper(0x94, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetEmboss(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x94, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float _Font::GetKerning()
{
	float result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Font::SetKerning(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x95, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long _Font::GetEngrave()
{
	long result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetEngrave(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x96, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Font::GetBorders()
{
	LPDISPATCH result;
	InvokeHelper(0x44c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Font::SetBorders(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _Font::GetShading()
{
	LPDISPATCH result;
	InvokeHelper(0x99, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Font::GetEmphasisMark()
{
	long result;
	InvokeHelper(0x9a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetEmphasisMark(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x9a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _Font::GetDisableCharacterSpaceGrid()
{
	BOOL result;
	InvokeHelper(0x9b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Font::SetDisableCharacterSpaceGrid(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x9b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString _Font::GetNameFarEast()
{
	CString result;
	InvokeHelper(0x9c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Font::SetNameFarEast(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x9c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString _Font::GetNameAscii()
{
	CString result;
	InvokeHelper(0x9d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Font::SetNameAscii(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x9d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString _Font::GetNameOther()
{
	CString result;
	InvokeHelper(0x9e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Font::SetNameOther(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x9e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

void _Font::Grow()
{
	InvokeHelper(0x64, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Font::Shrink()
{
	InvokeHelper(0x65, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Font::Reset()
{
	InvokeHelper(0x66, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Font::SetAsTemplateDefault()
{
	InvokeHelper(0x67, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long _Font::GetBoldBi()
{
	long result;
	InvokeHelper(0xa0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetBoldBi(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetItalicBi()
{
	long result;
	InvokeHelper(0xa1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetItalicBi(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float _Font::GetSizeBi()
{
	float result;
	InvokeHelper(0xa2, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void _Font::SetSizeBi(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0xa2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

CString _Font::GetNameBi()
{
	CString result;
	InvokeHelper(0xa3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Font::SetNameBi(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xa3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long _Font::GetColorIndexBi()
{
	long result;
	InvokeHelper(0xa4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetColorIndexBi(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetDiacriticColor()
{
	long result;
	InvokeHelper(0xa5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetDiacriticColor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetUnderlineColor()
{
	long result;
	InvokeHelper(0xa6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetUnderlineColor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Font::GetGlow()
{
	LPDISPATCH result;
	InvokeHelper(0xa7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Font::SetGlow(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xa7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _Font::GetReflection()
{
	LPDISPATCH result;
	InvokeHelper(0xa8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Font::SetReflection(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xa8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _Font::GetTextShadow()
{
	LPDISPATCH result;
	InvokeHelper(0xa9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Font::SetTextShadow(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xa9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _Font::GetFill()
{
	LPDISPATCH result;
	InvokeHelper(0xaa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Font::SetFill(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xaa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _Font::GetLine()
{
	LPDISPATCH result;
	InvokeHelper(0xab, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Font::SetLine(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xab, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _Font::GetThreeD()
{
	LPDISPATCH result;
	InvokeHelper(0xac, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Font::SetThreeD(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xac, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _Font::GetTextColor()
{
	LPDISPATCH result;
	InvokeHelper(0xad, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Font::GetLigatures()
{
	long result;
	InvokeHelper(0xae, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetLigatures(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xae, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetNumberForm()
{
	long result;
	InvokeHelper(0xaf, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetNumberForm(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xaf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetNumberSpacing()
{
	long result;
	InvokeHelper(0xb0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetNumberSpacing(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetContextualAlternates()
{
	long result;
	InvokeHelper(0xb1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetContextualAlternates(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _Font::GetStylisticSet()
{
	long result;
	InvokeHelper(0xb2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Font::SetStylisticSet(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// Table properties

/////////////////////////////////////////////////////////////////////////////
// Table operations

LPDISPATCH Table::Get_Range()
{
	LPDISPATCH result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Table::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Table::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Table::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Table::GetColumns()
{
	LPDISPATCH result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Table::GetRows()
{
	LPDISPATCH result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Table::GetBorders()
{
	LPDISPATCH result;
	InvokeHelper(0x44c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Table::SetBorders(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Table::GetShading()
{
	LPDISPATCH result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL Table::GetUniform()
{
	BOOL result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

long Table::GetAutoFormatType()
{
	long result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Table::Select()
{
	InvokeHelper(0xc8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Table::Delete()
{
	InvokeHelper(0x9, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Table::SortAscending()
{
	InvokeHelper(0xc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Table::SortDescending()
{
	InvokeHelper(0xd, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Table::AutoFormat(VARIANT* Format, VARIANT* ApplyBorders, VARIANT* ApplyShading, VARIANT* ApplyFont, VARIANT* ApplyColor, VARIANT* ApplyHeadingRows, VARIANT* ApplyLastRow, VARIANT* ApplyFirstColumn, VARIANT* ApplyLastColumn, VARIANT* AutoFit)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Format, ApplyBorders, ApplyShading, ApplyFont, ApplyColor, ApplyHeadingRows, ApplyLastRow, ApplyFirstColumn, ApplyLastColumn, AutoFit);
}

void Table::UpdateAutoFormat()
{
	InvokeHelper(0xf, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH Table::Cell(long Row, long Column)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Row, Column);
	return result;
}

LPDISPATCH Table::Split(VARIANT* BeforeRow)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		BeforeRow);
	return result;
}

LPDISPATCH Table::ConvertToText(VARIANT* Separator, VARIANT* NestedTables)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Separator, NestedTables);
	return result;
}

void Table::AutoFitBehavior(long Behavior)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x14, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Behavior);
}

void Table::Sort(VARIANT* ExcludeHeader, VARIANT* FieldNumber, VARIANT* SortFieldType, VARIANT* SortOrder, VARIANT* FieldNumber2, VARIANT* SortFieldType2, VARIANT* SortOrder2, VARIANT* FieldNumber3, VARIANT* SortFieldType3, VARIANT* SortOrder3, 
		VARIANT* CaseSensitive, VARIANT* BidiSort, VARIANT* IgnoreThe, VARIANT* IgnoreKashida, VARIANT* IgnoreDiacritics, VARIANT* IgnoreHe, VARIANT* LanguageID)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x17, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ExcludeHeader, FieldNumber, SortFieldType, SortOrder, FieldNumber2, SortFieldType2, SortOrder2, FieldNumber3, SortFieldType3, SortOrder3, CaseSensitive, BidiSort, IgnoreThe, IgnoreKashida, IgnoreDiacritics, IgnoreHe, LanguageID);
}

LPDISPATCH Table::GetTables()
{
	LPDISPATCH result;
	InvokeHelper(0x6b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Table::GetNestingLevel()
{
	long result;
	InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL Table::GetAllowAutoFit()
{
	BOOL result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Table::SetAllowAutoFit(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

float Table::GetPreferredWidth()
{
	float result;
	InvokeHelper(0x6f, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Table::SetPreferredWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Table::GetPreferredWidthType()
{
	long result;
	InvokeHelper(0x70, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Table::SetPreferredWidthType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x70, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float Table::GetTopPadding()
{
	float result;
	InvokeHelper(0x71, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Table::SetTopPadding(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x71, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Table::GetBottomPadding()
{
	float result;
	InvokeHelper(0x72, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Table::SetBottomPadding(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x72, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Table::GetLeftPadding()
{
	float result;
	InvokeHelper(0x73, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Table::SetLeftPadding(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x73, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Table::GetRightPadding()
{
	float result;
	InvokeHelper(0x74, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Table::SetRightPadding(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x74, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Table::GetSpacing()
{
	float result;
	InvokeHelper(0x75, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Table::SetSpacing(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x75, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Table::GetTableDirection()
{
	long result;
	InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Table::SetTableDirection(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x76, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString Table::GetId()
{
	CString result;
	InvokeHelper(0x77, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Table::SetId(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x77, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

VARIANT Table::GetStyle()
{
	VARIANT result;
	InvokeHelper(0xc9, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Table::SetStyle(VARIANT* newValue)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0xc9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL Table::GetApplyStyleHeadingRows()
{
	BOOL result;
	InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Table::SetApplyStyleHeadingRows(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xca, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Table::GetApplyStyleLastRow()
{
	BOOL result;
	InvokeHelper(0xcb, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Table::SetApplyStyleLastRow(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xcb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Table::GetApplyStyleFirstColumn()
{
	BOOL result;
	InvokeHelper(0xcc, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Table::SetApplyStyleFirstColumn(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xcc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Table::GetApplyStyleLastColumn()
{
	BOOL result;
	InvokeHelper(0xcd, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Table::SetApplyStyleLastColumn(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xcd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Table::GetApplyStyleRowBands()
{
	BOOL result;
	InvokeHelper(0xce, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Table::SetApplyStyleRowBands(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xce, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Table::GetApplyStyleColumnBands()
{
	BOOL result;
	InvokeHelper(0xcf, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Table::SetApplyStyleColumnBands(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xcf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void Table::ApplyStyleDirectFormatting(LPCTSTR StyleName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xd0, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 StyleName);
}

CString Table::GetTitle()
{
	CString result;
	InvokeHelper(0xd1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Table::SetTitle(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xd1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString Table::GetDescr()
{
	CString result;
	InvokeHelper(0xd2, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Table::SetDescr(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xd2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// Row properties

/////////////////////////////////////////////////////////////////////////////
// Row operations

LPDISPATCH Row::Get_Range()
{
	LPDISPATCH result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Row::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Row::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Row::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Row::GetAllowBreakAcrossPages()
{
	long result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Row::SetAllowBreakAcrossPages(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Row::GetAlignment()
{
	long result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Row::SetAlignment(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Row::GetHeadingFormat()
{
	long result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Row::SetHeadingFormat(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float Row::GetSpaceBetweenColumns()
{
	float result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Row::SetSpaceBetweenColumns(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Row::GetHeight()
{
	float result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Row::SetHeight(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Row::GetHeightRule()
{
	long result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Row::SetHeightRule(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float Row::GetLeftIndent()
{
	float result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Row::SetLeftIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL Row::GetIsLast()
{
	BOOL result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Row::GetIsFirst()
{
	BOOL result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

long Row::GetIndex()
{
	long result;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Row::GetCells()
{
	LPDISPATCH result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Row::GetBorders()
{
	LPDISPATCH result;
	InvokeHelper(0x44c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Row::SetBorders(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Row::GetShading()
{
	LPDISPATCH result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Row::GetNext()
{
	LPDISPATCH result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Row::GetPrevious()
{
	LPDISPATCH result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Row::Select()
{
	InvokeHelper(0xffff, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Row::Delete()
{
	InvokeHelper(0xc8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Row::SetLeftIndent(float LeftIndent, long RulerStyle)
{
	static BYTE parms[] =
		VTS_R4 VTS_I4;
	InvokeHelper(0xca, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 LeftIndent, RulerStyle);
}

void Row::SetHeight(float RowHeight, long HeightRule)
{
	static BYTE parms[] =
		VTS_R4 VTS_I4;
	InvokeHelper(0xcb, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 RowHeight, HeightRule);
}

LPDISPATCH Row::ConvertToText(VARIANT* Separator, VARIANT* NestedTables)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Separator, NestedTables);
	return result;
}

long Row::GetNestingLevel()
{
	long result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString Row::GetId()
{
	CString result;
	InvokeHelper(0x6b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Row::SetId(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x6b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// Column properties

/////////////////////////////////////////////////////////////////////////////
// Column operations

LPDISPATCH Column::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Column::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Column::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

float Column::GetWidth()
{
	float result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Column::SetWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL Column::GetIsFirst()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Column::GetIsLast()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

long Column::GetIndex()
{
	long result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Column::GetCells()
{
	LPDISPATCH result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Column::GetBorders()
{
	LPDISPATCH result;
	InvokeHelper(0x44c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Column::SetBorders(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Column::GetShading()
{
	LPDISPATCH result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Column::GetNext()
{
	LPDISPATCH result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Column::GetPrevious()
{
	LPDISPATCH result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Column::Select()
{
	InvokeHelper(0xffff, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Column::Delete()
{
	InvokeHelper(0xc8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Column::SetWidth(float ColumnWidth, long RulerStyle)
{
	static BYTE parms[] =
		VTS_R4 VTS_I4;
	InvokeHelper(0xc9, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ColumnWidth, RulerStyle);
}

void Column::AutoFit()
{
	InvokeHelper(0xca, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Column::Sort(VARIANT* ExcludeHeader, VARIANT* SortFieldType, VARIANT* SortOrder, VARIANT* CaseSensitive, VARIANT* BidiSort, VARIANT* IgnoreThe, VARIANT* IgnoreKashida, VARIANT* IgnoreDiacritics, VARIANT* IgnoreHe, VARIANT* LanguageID)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xcc, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ExcludeHeader, SortFieldType, SortOrder, CaseSensitive, BidiSort, IgnoreThe, IgnoreKashida, IgnoreDiacritics, IgnoreHe, LanguageID);
}

long Column::GetNestingLevel()
{
	long result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

float Column::GetPreferredWidth()
{
	float result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Column::SetPreferredWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Column::GetPreferredWidthType()
{
	long result;
	InvokeHelper(0x6b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Column::SetPreferredWidthType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// Cell properties

/////////////////////////////////////////////////////////////////////////////
// Cell operations

LPDISPATCH Cell::Get_Range()
{
	LPDISPATCH result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Cell::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Cell::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Cell::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Cell::GetRowIndex()
{
	long result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long Cell::GetColumnIndex()
{
	long result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

float Cell::GetWidth()
{
	float result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Cell::SetWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Cell::GetHeight()
{
	float result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Cell::SetHeight(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Cell::GetHeightRule()
{
	long result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Cell::SetHeightRule(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Cell::GetVerticalAlignment()
{
	long result;
	InvokeHelper(0x450, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Cell::SetVerticalAlignment(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x450, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Cell::GetColumn()
{
	LPDISPATCH result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Cell::GetRow()
{
	LPDISPATCH result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Cell::GetNext()
{
	LPDISPATCH result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Cell::GetPrevious()
{
	LPDISPATCH result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Cell::GetShading()
{
	LPDISPATCH result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Cell::GetBorders()
{
	LPDISPATCH result;
	InvokeHelper(0x44c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Cell::SetBorders(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void Cell::Select()
{
	InvokeHelper(0xffff, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Cell::Delete(VARIANT* ShiftCells)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0xc8, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ShiftCells);
}

void Cell::Formula(VARIANT* Formula, VARIANT* NumFormat)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xc9, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Formula, NumFormat);
}

void Cell::SetWidth(float ColumnWidth, long RulerStyle)
{
	static BYTE parms[] =
		VTS_R4 VTS_I4;
	InvokeHelper(0xca, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ColumnWidth, RulerStyle);
}

void Cell::SetHeight(VARIANT* RowHeight, long HeightRule)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_I4;
	InvokeHelper(0xcb, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 RowHeight, HeightRule);
}

void Cell::Merge(LPDISPATCH MergeTo)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xcc, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 MergeTo);
}

void Cell::Split(VARIANT* NumRows, VARIANT* NumColumns)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xcd, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 NumRows, NumColumns);
}

void Cell::AutoSum()
{
	InvokeHelper(0xce, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH Cell::GetTables()
{
	LPDISPATCH result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Cell::GetNestingLevel()
{
	long result;
	InvokeHelper(0x6b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL Cell::GetWordWrap()
{
	BOOL result;
	InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Cell::SetWordWrap(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

float Cell::GetPreferredWidth()
{
	float result;
	InvokeHelper(0x6d, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Cell::SetPreferredWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL Cell::GetFitText()
{
	BOOL result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Cell::SetFitText(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

float Cell::GetTopPadding()
{
	float result;
	InvokeHelper(0x6f, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Cell::SetTopPadding(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Cell::GetBottomPadding()
{
	float result;
	InvokeHelper(0x70, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Cell::SetBottomPadding(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x70, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Cell::GetLeftPadding()
{
	float result;
	InvokeHelper(0x71, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Cell::SetLeftPadding(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x71, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Cell::GetRightPadding()
{
	float result;
	InvokeHelper(0x72, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Cell::SetRightPadding(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x72, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

CString Cell::GetId()
{
	CString result;
	InvokeHelper(0x73, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Cell::SetId(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x73, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long Cell::GetPreferredWidthType()
{
	long result;
	InvokeHelper(0x74, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Cell::SetPreferredWidthType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x74, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// Tables properties

/////////////////////////////////////////////////////////////////////////////
// Tables operations

LPUNKNOWN Tables::Get_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

long Tables::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Tables::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Tables::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Tables::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Tables::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPDISPATCH Tables::Add(LPDISPATCH _Range, long NumRows, long NumColumns, VARIANT* DefaultTableBehavior, VARIANT* AutoFitBehavior)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4 VTS_I4 VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xc8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		_Range, NumRows, NumColumns, DefaultTableBehavior, AutoFitBehavior);
	return result;
}

long Tables::GetNestingLevel()
{
	long result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Rows properties

/////////////////////////////////////////////////////////////////////////////
// Rows operations

LPUNKNOWN Rows::Get_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

long Rows::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long Rows::GetAllowBreakAcrossPages()
{
	long result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Rows::SetAllowBreakAcrossPages(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Rows::GetAlignment()
{
	long result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Rows::SetAlignment(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Rows::GetHeadingFormat()
{
	long result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Rows::SetHeadingFormat(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float Rows::GetSpaceBetweenColumns()
{
	float result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Rows::SetSpaceBetweenColumns(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Rows::GetHeight()
{
	float result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Rows::SetHeight(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Rows::GetHeightRule()
{
	long result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Rows::SetHeightRule(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float Rows::GetLeftIndent()
{
	float result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Rows::SetLeftIndent(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Rows::GetFirst()
{
	LPDISPATCH result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Rows::GetLast()
{
	LPDISPATCH result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Rows::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Rows::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Rows::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Rows::GetBorders()
{
	LPDISPATCH result;
	InvokeHelper(0x44c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Rows::SetBorders(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Rows::GetShading()
{
	LPDISPATCH result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Rows::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPDISPATCH Rows::Add(VARIANT* BeforeRow)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x64, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		BeforeRow);
	return result;
}

void Rows::Select()
{
	InvokeHelper(0xc7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Rows::Delete()
{
	InvokeHelper(0xc8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Rows::SetLeftIndent(float LeftIndent, long RulerStyle)
{
	static BYTE parms[] =
		VTS_R4 VTS_I4;
	InvokeHelper(0xca, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 LeftIndent, RulerStyle);
}

void Rows::SetHeight(float RowHeight, long HeightRule)
{
	static BYTE parms[] =
		VTS_R4 VTS_I4;
	InvokeHelper(0xcb, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 RowHeight, HeightRule);
}

void Rows::DistributeHeight()
{
	InvokeHelper(0xce, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH Rows::ConvertToText(VARIANT* Separator, VARIANT* NestedTables)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xd2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Separator, NestedTables);
	return result;
}

long Rows::GetWrapAroundText()
{
	long result;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Rows::SetWrapAroundText(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

float Rows::GetDistanceTop()
{
	float result;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Rows::SetDistanceTop(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0xd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Rows::GetDistanceBottom()
{
	float result;
	InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Rows::SetDistanceBottom(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0xe, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Rows::GetDistanceLeft()
{
	float result;
	InvokeHelper(0x14, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Rows::SetDistanceLeft(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x14, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Rows::GetDistanceRight()
{
	float result;
	InvokeHelper(0x15, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Rows::SetDistanceRight(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x15, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Rows::GetHorizontalPosition()
{
	float result;
	InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Rows::SetHorizontalPosition(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0xf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Rows::GetVerticalPosition()
{
	float result;
	InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Rows::SetVerticalPosition(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x11, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Rows::GetRelativeHorizontalPosition()
{
	long result;
	InvokeHelper(0x12, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Rows::SetRelativeHorizontalPosition(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x12, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Rows::GetRelativeVerticalPosition()
{
	long result;
	InvokeHelper(0x13, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Rows::SetRelativeVerticalPosition(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x13, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Rows::GetAllowOverlap()
{
	long result;
	InvokeHelper(0x16, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Rows::SetAllowOverlap(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x16, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Rows::GetNestingLevel()
{
	long result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long Rows::GetTableDirection()
{
	long result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Rows::SetTableDirection(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x68, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// Columns properties

/////////////////////////////////////////////////////////////////////////////
// Columns operations

LPUNKNOWN Columns::Get_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

long Columns::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Columns::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Columns::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Columns::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Columns::GetFirst()
{
	LPDISPATCH result;
	InvokeHelper(0x64, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Columns::GetLast()
{
	LPDISPATCH result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

float Columns::GetWidth()
{
	float result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Columns::SetWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Columns::GetBorders()
{
	LPDISPATCH result;
	InvokeHelper(0x44c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Columns::SetBorders(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Columns::GetShading()
{
	LPDISPATCH result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Columns::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPDISPATCH Columns::Add(VARIANT* BeforeColumn)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		BeforeColumn);
	return result;
}

void Columns::Select()
{
	InvokeHelper(0xc7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Columns::Delete()
{
	InvokeHelper(0xc8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Columns::SetWidth(float ColumnWidth, long RulerStyle)
{
	static BYTE parms[] =
		VTS_R4 VTS_I4;
	InvokeHelper(0xc9, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ColumnWidth, RulerStyle);
}

void Columns::AutoFit()
{
	InvokeHelper(0xca, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Columns::DistributeWidth()
{
	InvokeHelper(0xcb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long Columns::GetNestingLevel()
{
	long result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

float Columns::GetPreferredWidth()
{
	float result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Columns::SetPreferredWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x69, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Columns::GetPreferredWidthType()
{
	long result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Columns::SetPreferredWidthType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// Cells properties

/////////////////////////////////////////////////////////////////////////////
// Cells operations

LPUNKNOWN Cells::Get_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

long Cells::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Cells::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Cells::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Cells::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

float Cells::GetWidth()
{
	float result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Cells::SetWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float Cells::GetHeight()
{
	float result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Cells::SetHeight(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Cells::GetHeightRule()
{
	long result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Cells::SetHeightRule(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Cells::GetVerticalAlignment()
{
	long result;
	InvokeHelper(0x450, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Cells::SetVerticalAlignment(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x450, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Cells::GetBorders()
{
	LPDISPATCH result;
	InvokeHelper(0x44c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Cells::SetBorders(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Cells::GetShading()
{
	LPDISPATCH result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Cells::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

LPDISPATCH Cells::Add(VARIANT* BeforeCell)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		BeforeCell);
	return result;
}

void Cells::Delete(VARIANT* ShiftCells)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0xc8, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ShiftCells);
}

void Cells::SetWidth(float ColumnWidth, long RulerStyle)
{
	static BYTE parms[] =
		VTS_R4 VTS_I4;
	InvokeHelper(0xca, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ColumnWidth, RulerStyle);
}

void Cells::SetHeight(VARIANT* RowHeight, long HeightRule)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_I4;
	InvokeHelper(0xcb, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 RowHeight, HeightRule);
}

void Cells::Merge()
{
	InvokeHelper(0xcc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Cells::Split(VARIANT* NumRows, VARIANT* NumColumns, VARIANT* MergeBeforeSplit)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xcd, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 NumRows, NumColumns, MergeBeforeSplit);
}

void Cells::DistributeHeight()
{
	InvokeHelper(0xce, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Cells::DistributeWidth()
{
	InvokeHelper(0xcf, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Cells::AutoFit()
{
	InvokeHelper(0xd0, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long Cells::GetNestingLevel()
{
	long result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

float Cells::GetPreferredWidth()
{
	float result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Cells::SetPreferredWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Cells::GetPreferredWidthType()
{
	long result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Cells::SetPreferredWidthType(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x68, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// Borders properties

/////////////////////////////////////////////////////////////////////////////
// Borders operations

LPDISPATCH Borders::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Borders::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Borders::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPUNKNOWN Borders::Get_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

long Borders::GetCount()
{
	long result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long Borders::GetEnable()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Borders::SetEnable(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Borders::GetDistanceFromTop()
{
	long result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Borders::SetDistanceFromTop(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Borders::GetShadow()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Borders::SetShadow(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Borders::GetInsideLineStyle()
{
	long result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Borders::SetInsideLineStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Borders::GetOutsideLineStyle()
{
	long result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Borders::SetOutsideLineStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Borders::GetInsideLineWidth()
{
	long result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Borders::SetInsideLineWidth(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Borders::GetOutsideLineWidth()
{
	long result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Borders::SetOutsideLineWidth(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Borders::GetInsideColorIndex()
{
	long result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Borders::SetInsideColorIndex(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Borders::GetOutsideColorIndex()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Borders::SetOutsideColorIndex(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Borders::GetDistanceFromLeft()
{
	long result;
	InvokeHelper(0x14, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Borders::SetDistanceFromLeft(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x14, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Borders::GetDistanceFromBottom()
{
	long result;
	InvokeHelper(0x15, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Borders::SetDistanceFromBottom(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x15, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Borders::GetDistanceFromRight()
{
	long result;
	InvokeHelper(0x16, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Borders::SetDistanceFromRight(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x16, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Borders::GetAlwaysInFront()
{
	BOOL result;
	InvokeHelper(0x17, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Borders::SetAlwaysInFront(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x17, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Borders::GetSurroundHeader()
{
	BOOL result;
	InvokeHelper(0x18, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Borders::SetSurroundHeader(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x18, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Borders::GetSurroundFooter()
{
	BOOL result;
	InvokeHelper(0x19, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Borders::SetSurroundFooter(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x19, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Borders::GetJoinBorders()
{
	BOOL result;
	InvokeHelper(0x1a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Borders::SetJoinBorders(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Borders::GetHasHorizontal()
{
	BOOL result;
	InvokeHelper(0x1b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Borders::GetHasVertical()
{
	BOOL result;
	InvokeHelper(0x1c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

long Borders::GetDistanceFrom()
{
	long result;
	InvokeHelper(0x1d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Borders::SetDistanceFrom(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Borders::GetEnableFirstPageInSection()
{
	BOOL result;
	InvokeHelper(0x1e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Borders::SetEnableFirstPageInSection(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Borders::GetEnableOtherPagesInSection()
{
	BOOL result;
	InvokeHelper(0x1f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Borders::SetEnableOtherPagesInSection(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH Borders::Item(long Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Index);
	return result;
}

void Borders::ApplyPageBordersToAllSections()
{
	InvokeHelper(0x7d0, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long Borders::GetInsideColor()
{
	long result;
	InvokeHelper(0x20, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Borders::SetInsideColor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x20, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Borders::GetOutsideColor()
{
	long result;
	InvokeHelper(0x21, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Borders::SetOutsideColor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x21, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// Selection properties

/////////////////////////////////////////////////////////////////////////////
// Selection operations

CString Selection::GetText()
{
	CString result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Selection::SetText(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH Selection::GetFormattedText()
{
	LPDISPATCH result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Selection::SetFormattedText(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Selection::GetStart()
{
	long result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Selection::SetStart(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Selection::GetEnd()
{
	long result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Selection::SetEnd(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Selection::GetFont()
{
	LPDISPATCH result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Selection::SetFont(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long Selection::GetType()
{
	long result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long Selection::GetStoryType()
{
	long result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

VARIANT Selection::GetStyle()
{
	VARIANT result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Selection::SetStyle(VARIANT* newValue)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Selection::GetTables()
{
	LPDISPATCH result;
	InvokeHelper(0x32, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetWords()
{
	LPDISPATCH result;
	InvokeHelper(0x33, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetSentences()
{
	LPDISPATCH result;
	InvokeHelper(0x34, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetCharacters()
{
	LPDISPATCH result;
	InvokeHelper(0x35, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetFootnotes()
{
	LPDISPATCH result;
	InvokeHelper(0x36, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetEndnotes()
{
	LPDISPATCH result;
	InvokeHelper(0x37, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetComments()
{
	LPDISPATCH result;
	InvokeHelper(0x38, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetCells()
{
	LPDISPATCH result;
	InvokeHelper(0x39, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetSections()
{
	LPDISPATCH result;
	InvokeHelper(0x3a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetParagraphs()
{
	LPDISPATCH result;
	InvokeHelper(0x3b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetBorders()
{
	LPDISPATCH result;
	InvokeHelper(0x44c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Selection::SetBorders(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Selection::GetShading()
{
	LPDISPATCH result;
	InvokeHelper(0x3d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetFields()
{
	LPDISPATCH result;
	InvokeHelper(0x40, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetFormFields()
{
	LPDISPATCH result;
	InvokeHelper(0x41, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetFrames()
{
	LPDISPATCH result;
	InvokeHelper(0x42, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetParagraphFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x44e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Selection::SetParagraphFormat(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Selection::GetPageSetup()
{
	LPDISPATCH result;
	InvokeHelper(0x44d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Selection::SetPageSetup(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x44d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Selection::GetBookmarks()
{
	LPDISPATCH result;
	InvokeHelper(0x4b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Selection::GetStoryLength()
{
	long result;
	InvokeHelper(0x98, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long Selection::GetLanguageID()
{
	long result;
	InvokeHelper(0x99, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Selection::SetLanguageID(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x99, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Selection::GetLanguageIDFarEast()
{
	long result;
	InvokeHelper(0x9a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Selection::SetLanguageIDFarEast(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x9a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long Selection::GetLanguageIDOther()
{
	long result;
	InvokeHelper(0x9b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Selection::SetLanguageIDOther(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x9b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Selection::GetHyperlinks()
{
	LPDISPATCH result;
	InvokeHelper(0x9c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetColumns()
{
	LPDISPATCH result;
	InvokeHelper(0x12e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetRows()
{
	LPDISPATCH result;
	InvokeHelper(0x12f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetHeaderFooter()
{
	LPDISPATCH result;
	InvokeHelper(0x132, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL Selection::GetIsEndOfRowMark()
{
	BOOL result;
	InvokeHelper(0x133, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

long Selection::GetBookmarkID()
{
	long result;
	InvokeHelper(0x134, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long Selection::GetPreviousBookmarkID()
{
	long result;
	InvokeHelper(0x135, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetFind()
{
	LPDISPATCH result;
	InvokeHelper(0x106, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::Get_Range()
{
	LPDISPATCH result;
	InvokeHelper(0x190, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Selection::GetInformation(long Type)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x191, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms,
		Type);
	return result;
}

long Selection::GetFlags()
{
	long result;
	InvokeHelper(0x192, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Selection::SetFlags(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x192, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL Selection::GetActive()
{
	BOOL result;
	InvokeHelper(0x193, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Selection::GetStartIsActive()
{
	BOOL result;
	InvokeHelper(0x194, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Selection::SetStartIsActive(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x194, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Selection::GetIPAtEndOfLine()
{
	BOOL result;
	InvokeHelper(0x195, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL Selection::GetExtendMode()
{
	BOOL result;
	InvokeHelper(0x196, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Selection::SetExtendMode(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x196, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL Selection::GetColumnSelectMode()
{
	BOOL result;
	InvokeHelper(0x197, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Selection::SetColumnSelectMode(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x197, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long Selection::GetOrientation()
{
	long result;
	InvokeHelper(0x19a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Selection::SetOrientation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x19a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Selection::GetInlineShapes()
{
	LPDISPATCH result;
	InvokeHelper(0x19b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Selection::GetCreator()
{
	long result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetDocument()
{
	LPDISPATCH result;
	InvokeHelper(0x3eb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetShape_Range()
{
	LPDISPATCH result;
	InvokeHelper(0x3ec, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Selection::Select()
{
	InvokeHelper(0xffff, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::Set_Range(long Start, long End)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x64, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Start, End);
}

void Selection::Collapse(VARIANT* Direction)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x65, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Direction);
}

void Selection::InsertBefore(LPCTSTR Text)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x66, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Text);
}

void Selection::InsertAfter(LPCTSTR Text)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x68, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Text);
}

LPDISPATCH Selection::Next(VARIANT* Unit, VARIANT* Count)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x69, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Unit, Count);
	return result;
}

LPDISPATCH Selection::Previous(VARIANT* Unit, VARIANT* Count)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6a, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Unit, Count);
	return result;
}

long Selection::StartOf(VARIANT* Unit, VARIANT* Extend)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Extend);
	return result;
}

long Selection::EndOf(VARIANT* Unit, VARIANT* Extend)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Extend);
	return result;
}

long Selection::Move(VARIANT* Unit, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6d, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Count);
	return result;
}

long Selection::MoveStart(VARIANT* Unit, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Count);
	return result;
}

long Selection::MoveEnd(VARIANT* Unit, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x6f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Count);
	return result;
}

long Selection::MoveWhile(VARIANT* Cset, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x70, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Cset, Count);
	return result;
}

long Selection::MoveStartWhile(VARIANT* Cset, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x71, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Cset, Count);
	return result;
}

long Selection::MoveEndWhile(VARIANT* Cset, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x72, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Cset, Count);
	return result;
}

long Selection::MoveUntil(VARIANT* Cset, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x73, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Cset, Count);
	return result;
}

long Selection::MoveStartUntil(VARIANT* Cset, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x74, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Cset, Count);
	return result;
}

long Selection::MoveEndUntil(VARIANT* Cset, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x75, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Cset, Count);
	return result;
}

void Selection::Cut()
{
	InvokeHelper(0x77, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::Copy()
{
	InvokeHelper(0x78, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::Paste()
{
	InvokeHelper(0x79, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::InsertBreak(VARIANT* Type)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x7a, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Type);
}

void Selection::InsertFile(LPCTSTR FileName, VARIANT* _Range, VARIANT* ConfirmConversions, VARIANT* Link, VARIANT* Attachment)
{
	static BYTE parms[] =
		VTS_BSTR VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x7b, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName, _Range, ConfirmConversions, Link, Attachment);
}

BOOL Selection::InStory(LPDISPATCH _Range)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7d, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		_Range);
	return result;
}

BOOL Selection::In_Range(LPDISPATCH _Range)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x7e, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		_Range);
	return result;
}

long Selection::Delete(VARIANT* Unit, VARIANT* Count)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x7f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Count);
	return result;
}

long Selection::Expand(VARIANT* Unit)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x81, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit);
	return result;
}

void Selection::InsertParagraph()
{
	InvokeHelper(0xa0, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::InsertParagraphAfter()
{
	InvokeHelper(0xa1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::InsertSymbol(long CharacterNumber, VARIANT* Font, VARIANT* Unicode, VARIANT* Bias)
{
	static BYTE parms[] =
		VTS_I4 VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xa4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 CharacterNumber, Font, Unicode, Bias);
}

void Selection::CopyAsPicture()
{
	InvokeHelper(0xa7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::SortAscending()
{
	InvokeHelper(0xa9, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::SortDescending()
{
	InvokeHelper(0xaa, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL Selection::IsEqual(LPDISPATCH _Range)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xab, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		_Range);
	return result;
}

float Selection::Calculate()
{
	float result;
	InvokeHelper(0xac, DISPATCH_METHOD, VT_R4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GoTo(VARIANT* What, VARIANT* Which, VARIANT* Count, VARIANT* Name)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xad, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		What, Which, Count, Name);
	return result;
}

LPDISPATCH Selection::GoToNext(long What)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xae, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		What);
	return result;
}

LPDISPATCH Selection::GoToPrevious(long What)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xaf, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		What);
	return result;
}

void Selection::PasteSpecial(VARIANT* IconIndex, VARIANT* Link, VARIANT* Placement, VARIANT* DisplayAsIcon, VARIANT* DataType, VARIANT* IconFileName, VARIANT* IconLabel)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0xb0, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 IconIndex, Link, Placement, DisplayAsIcon, DataType, IconFileName, IconLabel);
}

LPDISPATCH Selection::PreviousField()
{
	LPDISPATCH result;
	InvokeHelper(0xb1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::NextField()
{
	LPDISPATCH result;
	InvokeHelper(0xb2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Selection::InsertParagraphBefore()
{
	InvokeHelper(0xd4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::InsertCells(VARIANT* ShiftCells)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0xd6, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ShiftCells);
}

void Selection::Extend(VARIANT* Character)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x12c, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Character);
}

void Selection::Shrink()
{
	InvokeHelper(0x12d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long Selection::MoveLeft(VARIANT* Unit, VARIANT* Count, VARIANT* Extend)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1f4, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Count, Extend);
	return result;
}

long Selection::MoveRight(VARIANT* Unit, VARIANT* Count, VARIANT* Extend)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1f5, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Count, Extend);
	return result;
}

long Selection::MoveUp(VARIANT* Unit, VARIANT* Count, VARIANT* Extend)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1f6, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Count, Extend);
	return result;
}

long Selection::MoveDown(VARIANT* Unit, VARIANT* Count, VARIANT* Extend)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1f7, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Count, Extend);
	return result;
}

long Selection::HomeKey(VARIANT* Unit, VARIANT* Extend)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1f8, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Extend);
	return result;
}

long Selection::EndKey(VARIANT* Unit, VARIANT* Extend)
{
	long result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1f9, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Unit, Extend);
	return result;
}

void Selection::EscapeKey()
{
	InvokeHelper(0x1fa, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::TypeText(LPCTSTR Text)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x1fb, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Text);
}

void Selection::CopyFormat()
{
	InvokeHelper(0x1fd, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::PasteFormat()
{
	InvokeHelper(0x1fe, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::TypeParagraph()
{
	InvokeHelper(0x200, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::TypeBackspace()
{
	InvokeHelper(0x201, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::NextSubdocument()
{
	InvokeHelper(0x202, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::PreviousSubdocument()
{
	InvokeHelper(0x203, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::SelectColumn()
{
	InvokeHelper(0x204, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::SelectCurrentFont()
{
	InvokeHelper(0x205, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::SelectCurrentAlignment()
{
	InvokeHelper(0x206, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::SelectCurrentSpacing()
{
	InvokeHelper(0x207, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::SelectCurrentIndent()
{
	InvokeHelper(0x208, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::SelectCurrentTabs()
{
	InvokeHelper(0x209, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::SelectCurrentColor()
{
	InvokeHelper(0x20a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::CreateTextbox()
{
	InvokeHelper(0x20b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::WholeStory()
{
	InvokeHelper(0x20c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::SelectRow()
{
	InvokeHelper(0x20d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::SplitTable()
{
	InvokeHelper(0x20e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::InsertRows(VARIANT* NumRows)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x210, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 NumRows);
}

void Selection::InsertColumns()
{
	InvokeHelper(0x211, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::InsertFormula(VARIANT* Formula, VARIANT* NumberFormat)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x212, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Formula, NumberFormat);
}

LPDISPATCH Selection::NextRevision(VARIANT* Wrap)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x213, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Wrap);
	return result;
}

LPDISPATCH Selection::PreviousRevision(VARIANT* Wrap)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x214, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Wrap);
	return result;
}

void Selection::PasteAsNestedTable()
{
	InvokeHelper(0x215, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH Selection::CreateAutoTextEntry(LPCTSTR Name, LPCTSTR StyleName)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x216, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Name, StyleName);
	return result;
}

void Selection::DetectLanguage()
{
	InvokeHelper(0x217, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::SelectCell()
{
	InvokeHelper(0x218, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::InsertRowsBelow(VARIANT* NumRows)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x219, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 NumRows);
}

void Selection::InsertColumnsRight()
{
	InvokeHelper(0x21a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::InsertRowsAbove(VARIANT* NumRows)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x21b, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 NumRows);
}

void Selection::RtlRun()
{
	InvokeHelper(0x258, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::LtrRun()
{
	InvokeHelper(0x259, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::BoldRun()
{
	InvokeHelper(0x25a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::ItalicRun()
{
	InvokeHelper(0x25b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::RtlPara()
{
	InvokeHelper(0x25d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::LtrPara()
{
	InvokeHelper(0x25e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::InsertDateTime(VARIANT* DateTimeFormat, VARIANT* InsertAsField, VARIANT* InsertAsFullWidth, VARIANT* DateLanguage, VARIANT* CalendarType)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1bc, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 DateTimeFormat, InsertAsField, InsertAsFullWidth, DateLanguage, CalendarType);
}

LPDISPATCH Selection::ConvertToTable(VARIANT* Separator, VARIANT* NumRows, VARIANT* NumColumns, VARIANT* InitialColumnWidth, VARIANT* Format, VARIANT* ApplyBorders, VARIANT* ApplyShading, VARIANT* ApplyFont, VARIANT* ApplyColor, 
		VARIANT* ApplyHeadingRows, VARIANT* ApplyLastRow, VARIANT* ApplyFirstColumn, VARIANT* ApplyLastColumn, VARIANT* AutoFit, VARIANT* AutoFitBehavior, VARIANT* DefaultTableBehavior)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1c9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Separator, NumRows, NumColumns, InitialColumnWidth, Format, ApplyBorders, ApplyShading, ApplyFont, ApplyColor, ApplyHeadingRows, ApplyLastRow, ApplyFirstColumn, ApplyLastColumn, AutoFit, AutoFitBehavior, DefaultTableBehavior);
	return result;
}

long Selection::GetNoProofing()
{
	long result;
	InvokeHelper(0x3ed, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Selection::SetNoProofing(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3ed, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Selection::GetTopLevelTables()
{
	LPDISPATCH result;
	InvokeHelper(0x3ee, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL Selection::GetLanguageDetected()
{
	BOOL result;
	InvokeHelper(0x3ef, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void Selection::SetLanguageDetected(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x3ef, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

float Selection::GetFitTextWidth()
{
	float result;
	InvokeHelper(0x3f0, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void Selection::SetFitTextWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x3f0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void Selection::ClearFormatting()
{
	InvokeHelper(0x3f1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::PasteAppendTable()
{
	InvokeHelper(0x3f2, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH Selection::GetHTMLDivisions()
{
	LPDISPATCH result;
	InvokeHelper(0x3f3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetChildShape_Range()
{
	LPDISPATCH result;
	InvokeHelper(0x3fd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL Selection::GetHasChildShape_Range()
{
	BOOL result;
	InvokeHelper(0x3fe, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetFootnoteOptions()
{
	LPDISPATCH result;
	InvokeHelper(0x400, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GetEndnoteOptions()
{
	LPDISPATCH result;
	InvokeHelper(0x401, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Selection::ToggleCharacterCode()
{
	InvokeHelper(0x3f4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::PasteAndFormat(long Type)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3f5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Type);
}

void Selection::PasteExcelTable(BOOL LinkedToExcel, BOOL WordFormatting, BOOL RTF)
{
	static BYTE parms[] =
		VTS_BOOL VTS_BOOL VTS_BOOL;
	InvokeHelper(0x3f6, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 LinkedToExcel, WordFormatting, RTF);
}

void Selection::ShrinkDiscontiguousSelection()
{
	InvokeHelper(0x3fb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::InsertStyleSeparator()
{
	InvokeHelper(0x3fc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::Sort(VARIANT* ExcludeHeader, VARIANT* FieldNumber, VARIANT* SortFieldType, VARIANT* SortOrder, VARIANT* FieldNumber2, VARIANT* SortFieldType2, VARIANT* SortOrder2, VARIANT* FieldNumber3, VARIANT* SortFieldType3, VARIANT* SortOrder3, 
		VARIANT* SortColumn, VARIANT* Separator, VARIANT* CaseSensitive, VARIANT* BidiSort, VARIANT* IgnoreThe, VARIANT* IgnoreKashida, VARIANT* IgnoreDiacritics, VARIANT* IgnoreHe, VARIANT* LanguageID, VARIANT* SubFieldNumber, 
		VARIANT* SubFieldNumber2, VARIANT* SubFieldNumber3)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT 
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x3ff, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ExcludeHeader, FieldNumber, SortFieldType, SortOrder, FieldNumber2, SortFieldType2, SortOrder2, FieldNumber3, SortFieldType3, SortOrder3, SortColumn, Separator, CaseSensitive, BidiSort, IgnoreThe, IgnoreKashida, IgnoreDiacritics, 
		IgnoreHe, LanguageID, SubFieldNumber, SubFieldNumber2, SubFieldNumber3);
}

LPDISPATCH Selection::GetEditors()
{
	LPDISPATCH result;
	InvokeHelper(0x139, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString Selection::GetXml(BOOL DataOnly)
{
	CString result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x13a, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms,
		DataOnly);
	return result;
}

VARIANT Selection::GetEnhMetaFileBits()
{
	VARIANT result;
	InvokeHelper(0x13b, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH Selection::GoToEditable_Range(VARIANT* EditorID)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x403, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		EditorID);
	return result;
}

void Selection::InsertXML(LPCTSTR XML, VARIANT* Transform)
{
	static BYTE parms[] =
		VTS_BSTR VTS_PVARIANT;
	InvokeHelper(0x404, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 XML, Transform);
}

void Selection::InsertCaption(VARIANT* Label, VARIANT* Title, VARIANT* TitleAutoText, VARIANT* Position, VARIANT* ExcludeLabel)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1a1, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Label, Title, TitleAutoText, Position, ExcludeLabel);
}

void Selection::InsertCrossReference(VARIANT* ReferenceType, long ReferenceKind, VARIANT* ReferenceItem, VARIANT* InsertAsHyperlink, VARIANT* IncludePosition, VARIANT* SeparateNumbers, VARIANT* SeparatorString)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_I4 VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1a2, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ReferenceType, ReferenceKind, ReferenceItem, InsertAsHyperlink, IncludePosition, SeparateNumbers, SeparatorString);
}

LPDISPATCH Selection::GetOMaths()
{
	LPDISPATCH result;
	InvokeHelper(0x13c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString Selection::GetWordOpenXML()
{
	CString result;
	InvokeHelper(0x13d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Selection::ClearParagraphStyle()
{
	InvokeHelper(0x406, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::ClearCharacterAllFormatting()
{
	InvokeHelper(0x407, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::ClearCharacterStyle()
{
	InvokeHelper(0x408, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::ClearCharacterDirectFormatting()
{
	InvokeHelper(0x409, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::ExportAsFixedFormat(LPCTSTR OutputFileName, long ExportFormat, BOOL OpenAfterExport, long OptimizeFor, BOOL ExportCurrentPage, long Item, BOOL IncludeDocProps, BOOL KeepIRM, long CreateBookmarks, BOOL DocStructureTags, 
		BOOL BitmapMissingFonts, BOOL UseISO19005_1, VARIANT* FixedFormatExtClassPtr)
{
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_BOOL VTS_I4 VTS_BOOL VTS_I4 VTS_BOOL VTS_BOOL VTS_I4 VTS_BOOL VTS_BOOL VTS_BOOL VTS_PVARIANT;
	InvokeHelper(0x40c, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 OutputFileName, ExportFormat, OpenAfterExport, OptimizeFor, ExportCurrentPage, Item, IncludeDocProps, KeepIRM, CreateBookmarks, DocStructureTags, BitmapMissingFonts, UseISO19005_1, FixedFormatExtClassPtr);
}

void Selection::ReadingModeGrowFont()
{
	InvokeHelper(0x40d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::ReadingModeShrinkFont()
{
	InvokeHelper(0x40e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::ClearParagraphAllFormatting()
{
	InvokeHelper(0x40f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::ClearParagraphDirectFormatting()
{
	InvokeHelper(0x410, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::InsertNewPage()
{
	InvokeHelper(0x411, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Selection::SortByHeadings(VARIANT* SortFieldType, VARIANT* SortOrder, VARIANT* CaseSensitive, VARIANT* BidiSort, VARIANT* IgnoreThe, VARIANT* IgnoreKashida, VARIANT* IgnoreDiacritics, VARIANT* IgnoreHe, VARIANT* LanguageID)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x412, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 SortFieldType, SortOrder, CaseSensitive, BidiSort, IgnoreThe, IgnoreKashida, IgnoreDiacritics, IgnoreHe, LanguageID);
}
