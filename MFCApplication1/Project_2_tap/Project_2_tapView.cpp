
// Project_2_tapView.cpp : implementation of the CProject2tapView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Project_2_tap.h"
#endif

#include "Project_2_tapDoc.h"
#include "Project_2_tapView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CProject2tapView

IMPLEMENT_DYNCREATE(CProject2tapView, CView)

BEGIN_MESSAGE_MAP(CProject2tapView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CProject2tapView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CProject2tapView construction/destruction

CProject2tapView::CProject2tapView() noexcept
{
	// TODO: add construction code here

}

CProject2tapView::~CProject2tapView()
{
}

BOOL CProject2tapView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CProject2tapView drawing

void CProject2tapView::OnDraw(CDC* /*pDC*/)
{
	CProject2tapDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CProject2tapView printing


void CProject2tapView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CProject2tapView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CProject2tapView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CProject2tapView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CProject2tapView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CProject2tapView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CProject2tapView diagnostics

#ifdef _DEBUG
void CProject2tapView::AssertValid() const
{
	CView::AssertValid();
}

void CProject2tapView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CProject2tapDoc* CProject2tapView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CProject2tapDoc)));
	return (CProject2tapDoc*)m_pDocument;
}
#endif //_DEBUG


// CProject2tapView message handlers
