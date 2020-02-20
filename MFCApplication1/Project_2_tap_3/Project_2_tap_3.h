
// Project_2_tap_3.h : main header file for the Project_2_tap_3 application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CProject2tap3App:
// See Project_2_tap_3.cpp for the implementation of this class
//

class CProject2tap3App : public CWinApp
{
public:
	CProject2tap3App() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CProject2tap3App theApp;
