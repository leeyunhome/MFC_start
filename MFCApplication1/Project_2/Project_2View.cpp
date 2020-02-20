
// Project_2View.cpp : implementation of the CProject2View class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Project_2.h"
#endif

#include "Project_2Doc.h"
#include "Project_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CProject2View

IMPLEMENT_DYNCREATE(CProject2View, CView)

BEGIN_MESSAGE_MAP(CProject2View, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CProject2View construction/destruction

CProject2View::CProject2View() noexcept
{
	// TODO: add construction code here

}

CProject2View::~CProject2View()
{
}

BOOL CProject2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CProject2View drawing

void CProject2View::OnDraw(CDC* /*pDC*/)
{
	CProject2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CProject2View printing

BOOL CProject2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CProject2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CProject2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CProject2View diagnostics

#ifdef _DEBUG
void CProject2View::AssertValid() const
{
	CView::AssertValid();
}

void CProject2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CProject2Doc* CProject2View::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CProject2Doc)));
	return (CProject2Doc*)m_pDocument;
}
#endif //_DEBUG


// CProject2View message handlers
