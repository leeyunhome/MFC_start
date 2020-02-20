
// Project_2_tap_4View.cpp : implementation of the CProject2tap4View class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Project_2_tap_4.h"
#endif

#include "Project_2_tap_4Doc.h"
#include "Project_2_tap_4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CProject2tap4View

IMPLEMENT_DYNCREATE(CProject2tap4View, CView)

BEGIN_MESSAGE_MAP(CProject2tap4View, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CProject2tap4View construction/destruction

CProject2tap4View::CProject2tap4View() noexcept
{
	// TODO: add construction code here

}

CProject2tap4View::~CProject2tap4View()
{
}

BOOL CProject2tap4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CProject2tap4View drawing

void CProject2tap4View::OnDraw(CDC* /*pDC*/)
{
	CProject2tap4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CProject2tap4View printing

BOOL CProject2tap4View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CProject2tap4View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CProject2tap4View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CProject2tap4View diagnostics

#ifdef _DEBUG
void CProject2tap4View::AssertValid() const
{
	CView::AssertValid();
}

void CProject2tap4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CProject2tap4Doc* CProject2tap4View::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CProject2tap4Doc)));
	return (CProject2tap4Doc*)m_pDocument;
}
#endif //_DEBUG


// CProject2tap4View message handlers
