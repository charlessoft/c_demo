// c_demo.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cc_demoApp:
// See c_demo.cpp for the implementation of this class
//

class Cc_demoApp : public CWinApp
{
public:
	Cc_demoApp();

// Overrides
	public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern Cc_demoApp theApp;