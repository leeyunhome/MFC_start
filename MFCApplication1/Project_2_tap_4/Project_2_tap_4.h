
// Project_2_tap_4.h : main header file for the Project_2_tap_4 application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CProject2tap4App:
// See Project_2_tap_4.cpp for the implementation of this class
//

class CProject2tap4App : public CWinAppEx
{
public:
	CProject2tap4App() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CProject2tap4App theApp;
