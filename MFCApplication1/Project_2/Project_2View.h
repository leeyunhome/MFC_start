
// Project_2View.h : interface of the CProject2View class
//

#pragma once


class CProject2View : public CView
{
protected: // create from serialization only
	CProject2View() noexcept;
	DECLARE_DYNCREATE(CProject2View)

// Attributes
public:
	CProject2Doc* GetDocument() const;

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
	virtual ~CProject2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Project_2View.cpp
inline CProject2Doc* CProject2View::GetDocument() const
   { return reinterpret_cast<CProject2Doc*>(m_pDocument); }
#endif

