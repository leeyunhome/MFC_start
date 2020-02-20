
// Project_2_tap_2.h : main header file for the Project_2_tap_2 application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CProject2tap2App:
// See Project_2_tap_2.cpp for the implementation of this class
//

class CProject2tap2App : public CWinAppEx
{
public:
	CProject2tap2App() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CProject2tap2App theApp;
