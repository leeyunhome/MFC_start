
// Chapter3View.cpp : implementation of the CChapter3View class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Chapter3.h"
#endif

#include "Chapter3Doc.h"
#include "Chapter3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CChapter3View

IMPLEMENT_DYNCREATE(CChapter3View, CListView)

BEGIN_MESSAGE_MAP(CChapter3View, CListView)
	ON_WM_STYLECHANGED()
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CChapter3View construction/destruction

CChapter3View::CChapter3View() noexcept
{
	// TODO: add construction code here

}

CChapter3View::~CChapter3View()
{
}

BOOL CChapter3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CListView::PreCreateWindow(cs);
}

void CChapter3View::OnInitialUpdate()
{
	CListView::OnInitialUpdate();


	// TODO: You may populate your ListView with items by directly accessing
	//  its list control through a call to GetListCtrl().
}

void CChapter3View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CChapter3View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CChapter3View diagnostics

#ifdef _DEBUG
void CChapter3View::AssertValid() const
{
	CListView::AssertValid();
}

void CChapter3View::Dump(CDumpContext& dc) const
{
	CListView::Dump(dc);
}

CChapter3Doc* CChapter3View::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CChapter3Doc)));
	return (CChapter3Doc*)m_pDocument;
}
#endif //_DEBUG


// CChapter3View message handlers
void CChapter3View::OnStyleChanged(int nStyleType, LPSTYLESTRUCT lpStyleStruct)
{
	//TODO: add code to react to the user changing the view style of your window
	CListView::OnStyleChanged(nStyleType,lpStyleStruct);
}
