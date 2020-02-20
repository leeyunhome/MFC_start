
// Project_2_tap_2View.cpp : implementation of the CProject2tap2View class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Project_2_tap_2.h"
#endif

#include "Project_2_tap_2Doc.h"
#include "Project_2_tap_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CProject2tap2View

IMPLEMENT_DYNCREATE(CProject2tap2View, CView)

BEGIN_MESSAGE_MAP(CProject2tap2View, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CProject2tap2View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CProject2tap2View construction/destruction

CProject2tap2View::CProject2tap2View() noexcept
{
	// TODO: add construction code here

}

CProject2tap2View::~CProject2tap2View()
{
}

BOOL CProject2tap2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs
	cs.lpszClass = L"edit";
	return CView::PreCreateWindow(cs);
}

// CProject2tap2View drawing

void CProject2tap2View::OnDraw(CDC* /*pDC*/)
{
	CProject2tap2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CProject2tap2View printing


void CProject2tap2View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CProject2tap2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CProject2tap2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CProject2tap2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CProject2tap2View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CProject2tap2View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CProject2tap2View diagnostics

#ifdef _DEBUG
void CProject2tap2View::AssertValid() const
{
	CView::AssertValid();
}

void CProject2tap2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CProject2tap2Doc* CProject2tap2View::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CProject2tap2Doc)));
	return (CProject2tap2Doc*)m_pDocument;
}
#endif //_DEBUG


// CProject2tap2View message handlers
