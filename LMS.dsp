# Microsoft Developer Studio Project File - Name="LMS" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=LMS - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "LMS.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "LMS.mak" CFG="LMS - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "LMS - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "LMS - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "LMS - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "LMS - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "_AFXDLL" /FR /Yu"stdafx.h" /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 SkinPPWTL.lib /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "LMS - Win32 Release"
# Name "LMS - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\AddAdmin.cpp
# End Source File
# Begin Source File

SOURCE=.\Admin.cpp
# End Source File
# Begin Source File

SOURCE=.\AdminManage.cpp
# End Source File
# Begin Source File

SOURCE=.\BackupName.cpp
# End Source File
# Begin Source File

SOURCE=.\BCMenu.cpp
# End Source File
# Begin Source File

SOURCE=.\BinaryTreeNode.cpp
# End Source File
# Begin Source File

SOURCE=.\Book.cpp
# End Source File
# Begin Source File

SOURCE=.\Bookbook.cpp
# End Source File
# Begin Source File

SOURCE=.\BookLook.cpp
# End Source File
# Begin Source File

SOURCE=.\BookMDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\BookSort.cpp
# End Source File
# Begin Source File

SOURCE=.\Borrow.cpp
# End Source File
# Begin Source File

SOURCE=.\BorrowBook.cpp
# End Source File
# Begin Source File

SOURCE=.\BorrowRecord.cpp
# End Source File
# Begin Source File

SOURCE=.\BSTree.cpp
# End Source File
# Begin Source File

SOURCE=.\BtnST.cpp
# End Source File
# Begin Source File

SOURCE=.\CancelRenewal.cpp
# End Source File
# Begin Source File

SOURCE=.\Class.cpp
# End Source File
# Begin Source File

SOURCE=.\ClassModify.cpp
# End Source File
# Begin Source File

SOURCE=.\Config.cpp
# End Source File
# Begin Source File

SOURCE=.\ConfigManage.cpp
# End Source File
# Begin Source File

SOURCE=.\DatabaseManage.cpp
# End Source File
# Begin Source File

SOURCE=.\DelayBook.cpp
# End Source File
# Begin Source File

SOURCE=.\DeleteBook.cpp
# End Source File
# Begin Source File

SOURCE=.\DeleteReader.cpp
# End Source File
# Begin Source File

SOURCE=.\Dept.cpp
# End Source File
# Begin Source File

SOURCE=.\DeptManage.cpp
# End Source File
# Begin Source File

SOURCE=.\excel.cpp
# End Source File
# Begin Source File

SOURCE=.\Import.cpp
# End Source File
# Begin Source File

SOURCE=.\LMS.cpp
# End Source File
# Begin Source File

SOURCE=.\LMS.rc
# End Source File
# Begin Source File

SOURCE=.\LMSDoc.cpp
# End Source File
# Begin Source File

SOURCE=.\LMSView.cpp
# End Source File
# Begin Source File

SOURCE=.\LOGIN.cpp
# End Source File
# Begin Source File

SOURCE=.\MainFrm.cpp
# End Source File
# Begin Source File

SOURCE=.\Major.cpp
# End Source File
# Begin Source File

SOURCE=.\MdifyReader.cpp
# End Source File
# Begin Source File

SOURCE=.\ModifyBook.cpp
# End Source File
# Begin Source File

SOURCE=.\ModifyInfo.cpp
# End Source File
# Begin Source File

SOURCE=.\ModifyPassword.cpp
# End Source File
# Begin Source File

SOURCE=.\msword.cpp
# End Source File
# Begin Source File

SOURCE=.\myButton.cpp
# End Source File
# Begin Source File

SOURCE=.\NewBook.cpp
# End Source File
# Begin Source File

SOURCE=.\NewReader.cpp
# End Source File
# Begin Source File

SOURCE=.\Nindex.cpp
# End Source File
# Begin Source File

SOURCE=.\One.cpp
# End Source File
# Begin Source File

SOURCE=.\OneBook.cpp
# End Source File
# Begin Source File

SOURCE=.\Punish.cpp
# End Source File
# Begin Source File

SOURCE=.\Punishment.cpp
# End Source File
# Begin Source File

SOURCE=.\PunishRecord.cpp
# End Source File
# Begin Source File

SOURCE=.\QUERYBOOK.cpp
# End Source File
# Begin Source File

SOURCE=.\QueryReaderDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\QUERYREASON.cpp
# End Source File
# Begin Source File

SOURCE=.\RADERM.cpp
# End Source File
# Begin Source File

SOURCE=.\Reader.cpp
# End Source File
# Begin Source File

SOURCE=.\Renewal.cpp
# End Source File
# Begin Source File

SOURCE=.\RestDay.cpp
# End Source File
# Begin Source File

SOURCE=.\ReturnBook.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# Begin Source File

SOURCE=.\TwoBook.cpp
# End Source File
# Begin Source File

SOURCE=.\UserDlg.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\AddAdmin.h
# End Source File
# Begin Source File

SOURCE=.\Admin.h
# End Source File
# Begin Source File

SOURCE=.\AdminManage.h
# End Source File
# Begin Source File

SOURCE=.\BackupName.h
# End Source File
# Begin Source File

SOURCE=.\BCMenu.h
# End Source File
# Begin Source File

SOURCE=.\BinaryTreeNode.h
# End Source File
# Begin Source File

SOURCE=.\Book.h
# End Source File
# Begin Source File

SOURCE=.\Bookbook.h
# End Source File
# Begin Source File

SOURCE=.\BookLook.h
# End Source File
# Begin Source File

SOURCE=.\BookMDlg.h
# End Source File
# Begin Source File

SOURCE=.\BookSort.h
# End Source File
# Begin Source File

SOURCE=.\Borrow.h
# End Source File
# Begin Source File

SOURCE=.\BorrowBook.h
# End Source File
# Begin Source File

SOURCE=.\BorrowRecord.h
# End Source File
# Begin Source File

SOURCE=.\BSTree.h
# End Source File
# Begin Source File

SOURCE=.\BtnST.h
# End Source File
# Begin Source File

SOURCE=.\CancelRenewal.h
# End Source File
# Begin Source File

SOURCE=.\Class.h
# End Source File
# Begin Source File

SOURCE=.\ClassModify.h
# End Source File
# Begin Source File

SOURCE=.\Config.h
# End Source File
# Begin Source File

SOURCE=.\ConfigManage.h
# End Source File
# Begin Source File

SOURCE=.\DatabaseManage.h
# End Source File
# Begin Source File

SOURCE=.\DelayBook.h
# End Source File
# Begin Source File

SOURCE=.\DeleteBook.h
# End Source File
# Begin Source File

SOURCE=.\DeleteReader.h
# End Source File
# Begin Source File

SOURCE=.\Dept.h
# End Source File
# Begin Source File

SOURCE=.\DeptManage.h
# End Source File
# Begin Source File

SOURCE=.\excel.h
# End Source File
# Begin Source File

SOURCE=.\Import.h
# End Source File
# Begin Source File

SOURCE=.\LMS.h
# End Source File
# Begin Source File

SOURCE=.\LMSDoc.h
# End Source File
# Begin Source File

SOURCE=.\LMSView.h
# End Source File
# Begin Source File

SOURCE=.\LOGIN.h
# End Source File
# Begin Source File

SOURCE=.\MainFrm.h
# End Source File
# Begin Source File

SOURCE=.\Major.h
# End Source File
# Begin Source File

SOURCE=.\MdifyReader.h
# End Source File
# Begin Source File

SOURCE=.\ModifyBook.h
# End Source File
# Begin Source File

SOURCE=.\ModifyInfo.h
# End Source File
# Begin Source File

SOURCE=.\ModifyPassword.h
# End Source File
# Begin Source File

SOURCE=.\msword.h
# End Source File
# Begin Source File

SOURCE=.\myButton.h
# End Source File
# Begin Source File

SOURCE=.\NewBook.h
# End Source File
# Begin Source File

SOURCE=.\NewReader.h
# End Source File
# Begin Source File

SOURCE=.\Nindex.h
# End Source File
# Begin Source File

SOURCE=.\One.h
# End Source File
# Begin Source File

SOURCE=.\OneBook.h
# End Source File
# Begin Source File

SOURCE=.\Punish.h
# End Source File
# Begin Source File

SOURCE=.\Punishment.h
# End Source File
# Begin Source File

SOURCE=.\PunishRecord.h
# End Source File
# Begin Source File

SOURCE=.\QUERYBOOK.h
# End Source File
# Begin Source File

SOURCE=.\QueryReaderDlg.h
# End Source File
# Begin Source File

SOURCE=.\QUERYREASON.h
# End Source File
# Begin Source File

SOURCE=.\RADERM.h
# End Source File
# Begin Source File

SOURCE=.\Reader.h
# End Source File
# Begin Source File

SOURCE=.\Renewal.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\RestDay.h
# End Source File
# Begin Source File

SOURCE=.\ReturnBook.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# Begin Source File

SOURCE=.\TwoBook.h
# End Source File
# Begin Source File

SOURCE=.\UserDlg.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\535e77e0d3645.bmp
# End Source File
# Begin Source File

SOURCE=.\res\ADDBOOK.ico
# End Source File
# Begin Source File

SOURCE=".\res\b2_缩小大小 - 副本.bmp"
# End Source File
# Begin Source File

SOURCE=.\res\BG.bmp
# End Source File
# Begin Source File

SOURCE=.\res\BGfront.bmp
# End Source File
# Begin Source File

SOURCE=".\res\bgg (1).bmp"
# End Source File
# Begin Source File

SOURCE=.\res\book.bmp
# End Source File
# Begin Source File

SOURCE=.\res\bookm.ico
# End Source File
# Begin Source File

SOURCE=.\res\CLOSE.ico
# End Source File
# Begin Source File

SOURCE=.\res\DELETE.ico
# End Source File
# Begin Source File

SOURCE=.\res\eixt.ico
# End Source File
# Begin Source File

SOURCE=".\res\exit(0).ico"
# End Source File
# Begin Source File

SOURCE=.\res\EXPORT.ico
# End Source File
# Begin Source File

SOURCE=.\res\icon1.ico
# End Source File
# Begin Source File

SOURCE=.\res\Ledgon.bmp
# End Source File
# Begin Source File

SOURCE=.\res\LMS.ico
# End Source File
# Begin Source File

SOURCE=.\res\LMS.rc2
# End Source File
# Begin Source File

SOURCE=.\res\LMSDoc.ico
# End Source File
# Begin Source File

SOURCE=.\res\MANAGE.ico
# End Source File
# Begin Source File

SOURCE=.\res\MODIFY.ico
# End Source File
# Begin Source File

SOURCE=.\res\no.bmp
# End Source File
# Begin Source File

SOURCE=.\res\peoplem.ico
# End Source File
# Begin Source File

SOURCE=.\res\PRINT.ico
# End Source File
# Begin Source File

SOURCE=".\res\QQ图片20150614231028.bmp"
# End Source File
# Begin Source File

SOURCE=.\res\QUERY.ico
# End Source File
# Begin Source File

SOURCE=.\res\REFRESH.ico
# End Source File
# Begin Source File

SOURCE=.\res\SEARCH.ico
# End Source File
# Begin Source File

SOURCE=.\res\Toolbar.bmp
# End Source File
# Begin Source File

SOURCE=.\res\yes.bmp
# End Source File
# Begin Source File

SOURCE=".\res\丢失惩罚.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\读者注销.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\添加读者.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\添加新书.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\图书归还.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\图书借阅.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\图书续期.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\图书注销.bmp"
# End Source File
# End Group
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# End Target
# End Project
