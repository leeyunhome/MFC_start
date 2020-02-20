
// Project_2_tap_3View.cpp : implementation of the CProject2tap3View class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Project_2_tap_3.h"
#endif

#include "Project_2_tap_3Doc.h"
#include "Project_2_tap_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CProject2tap3View

IMPLEMENT_DYNCREATE(CProject2tap3View, CView)

BEGIN_MESSAGE_MAP(CProject2tap3View, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CProject2tap3View construction/destruction

CProject2tap3View::CProject2tap3View() noexcept
{
	// TODO: add construction code here

}

CProject2tap3View::~CProject2tap3View()
{
}

BOOL CProject2tap3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CProject2tap3View drawing

void CProject2tap3View::OnDraw(CDC* /*pDC*/)
{
	CProject2tap3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CProject2tap3View printing

BOOL CProject2tap3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CProject2tap3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CProject2tap3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CProject2tap3View diagnostics

#ifdef _DEBUG
void CProject2tap3View::AssertValid() const
{
	CView::AssertValid();
}

void CProject2tap3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CProject2tap3Doc* CProject2tap3View::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CProject2tap3Doc)));
	return (CProject2tap3Doc*)m_pDocument;
}
#endif //_DEBUG


// CProject2tap3View message handlers
