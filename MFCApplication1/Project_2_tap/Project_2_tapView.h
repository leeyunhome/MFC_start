
// Project_2_tapView.h : interface of the CProject2tapView class
//

#pragma once


class CProject2tapView : public CView
{
protected: // create from serialization only
	CProject2tapView() noexcept;
	DECLARE_DYNCREATE(CProject2tapView)

// Attributes
public:
	CProject2tapDoc* GetDocument() const;

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
	virtual ~CProject2tapView();
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

#ifndef _DEBUG  // debug version in Project_2_tapView.cpp
inline CProject2tapDoc* CProject2tapView::GetDocument() const
   { return reinterpret_cast<CProject2tapDoc*>(m_pDocument); }
#endif

