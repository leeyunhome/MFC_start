
// Project2_tabbedView.h : interface of the CProject2tabbedView class
//

#pragma once


class CProject2tabbedView : public CView
{
protected: // create from serialization only
	CProject2tabbedView() noexcept;
	DECLARE_DYNCREATE(CProject2tabbedView)

// Attributes
public:
	CProject2tabbedDoc* GetDocument() const;

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
	virtual ~CProject2tabbedView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Project2_tabbedView.cpp
inline CProject2tabbedDoc* CProject2tabbedView::GetDocument() const
   { return reinterpret_cast<CProject2tabbedDoc*>(m_pDocument); }
#endif

