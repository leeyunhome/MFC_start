
// Project_2_tap_3View.h : interface of the CProject2tap3View class
//

#pragma once


class CProject2tap3View : public CView
{
protected: // create from serialization only
	CProject2tap3View() noexcept;
	DECLARE_DYNCREATE(CProject2tap3View)

// Attributes
public:
	CProject2tap3Doc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CProject2tap3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Project_2_tap_3View.cpp
inline CProject2tap3Doc* CProject2tap3View::GetDocument() const
   { return reinterpret_cast<CProject2tap3Doc*>(m_pDocument); }
#endif

