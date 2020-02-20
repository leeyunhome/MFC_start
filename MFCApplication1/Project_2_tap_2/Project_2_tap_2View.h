
// Project_2_tap_2View.h : interface of the CProject2tap2View class
//

#pragma once


class CProject2tap2View : public CView
{
protected: // create from serialization only
	CProject2tap2View() noexcept;
	DECLARE_DYNCREATE(CProject2tap2View)

// Attributes
public:
	CProject2tap2Doc* GetDocument() const;

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
	virtual ~CProject2tap2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Project_2_tap_2View.cpp
inline CProject2tap2Doc* CProject2tap2View::GetDocument() const
   { return reinterpret_cast<CProject2tap2Doc*>(m_pDocument); }
#endif

