
// Project2_tabbedView.cpp : implementation of the CProject2tabbedView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Project2_tabbed.h"
#endif

#include "Project2_tabbedDoc.h"
#include "Project2_tabbedView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CProject2tabbedView

IMPLEMENT_DYNCREATE(CProject2tabbedView, CView)

BEGIN_MESSAGE_MAP(CProject2tabbedView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CProject2tabbedView construction/destruction

CProject2tabbedView::CProject2tabbedView() noexcept
{
	// TODO: add construction code here

}

CProject2tabbedView::~CProject2tabbedView()
{
}

BOOL CProject2tabbedView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CProject2tabbedView drawing

void CProject2tabbedView::OnDraw(CDC* /*pDC*/)
{
	CProject2tabbedDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CProject2tabbedView printing

BOOL CProject2tabbedView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CProject2tabbedView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CProject2tabbedView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CProject2tabbedView diagnostics

#ifdef _DEBUG
void CProject2tabbedView::AssertValid() const
{
	CView::AssertValid();
}

void CProject2tabbedView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CProject2tabbedDoc* CProject2tabbedView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CProject2tabbedDoc)));
	return (CProject2tabbedDoc*)m_pDocument;
}
#endif //_DEBUG


// CProject2tabbedView message handlers
