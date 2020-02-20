
// ProjectView.h : interface of the CProjectView class
//

#pragma once


class CProjectView : public CListView
{
protected: // create from serialization only
	CProjectView() noexcept;
	DECLARE_DYNCREATE(CProjectView)

// Attributes
public:
	CProjectDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void OnInitialUpdate(); // called first time after construct

// Implementation
public:
	virtual ~CProjectView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnStyleChanged(int nStyleType, LPSTYLESTRUCT lpStyleStruct);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in ProjectView.cpp
inline CProjectDoc* CProjectView::GetDocument() const
   { return reinterpret_cast<CProjectDoc*>(m_pDocument); }
#endif

