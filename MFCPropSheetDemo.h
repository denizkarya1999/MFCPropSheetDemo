
// MFCPropSheetDemo.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMFCPropSheetDemoApp:
// See MFCPropSheetDemo.cpp for the implementation of this class
//

class CMFCPropSheetDemoApp : public CWinApp
{
public:
	CMFCPropSheetDemoApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMFCPropSheetDemoApp theApp;
