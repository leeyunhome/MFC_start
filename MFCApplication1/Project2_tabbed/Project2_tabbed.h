
// Project2_tabbed.h : main header file for the Project2_tabbed application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CProject2tabbedApp:
// See Project2_tabbed.cpp for the implementation of this class
//

class CProject2tabbedApp : public CWinAppEx
{
public:
	CProject2tabbedApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CProject2tabbedApp theApp;
