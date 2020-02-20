
// Chapter3View.h : interface of the CChapter3View class
//

#pragma once


class CChapter3View : public CListView
{
protected: // create from serialization only
	CChapter3View() noexcept;
	DECLARE_DYNCREATE(CChapter3View)

// Attributes
public:
	CChapter3Doc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void OnInitialUpdate(); // called first time after construct

// Implementation
public:
	virtual ~CChapter3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnStyleChanged(int nStyleType, LPSTYLESTRUCT lpStyleStruct);
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Chapter3View.cpp
inline CChapter3Doc* CChapter3View::GetDocument() const
   { return reinterpret_cast<CChapter3Doc*>(m_pDocument); }
#endif

