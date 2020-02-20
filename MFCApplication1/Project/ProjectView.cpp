
// ProjectView.cpp : implementation of the CProjectView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Project.h"
#endif

#include "ProjectDoc.h"
#include "ProjectView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CProjectView

IMPLEMENT_DYNCREATE(CProjectView, CView)

BEGIN_MESSAGE_MAP(CProjectView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CProjectView construction/destruction

CProjectView::CProjectView() noexcept
{
	// TODO: add construction code here

}

CProjectView::~CProjectView()
{
}

BOOL CProjectView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs
	cs.lpszClass = L"edit";
	return CView::PreCreateWindow(cs);
}

// CProjectView drawing

void CProjectView::OnDraw(CDC* /*pDC*/)
{
	CProjectDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CProjectView printing

BOOL CProjectView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CProjectView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CProjectView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CProjectView diagnostics

#ifdef _DEBUG
void CProjectView::AssertValid() const
{
	CView::AssertValid();
}

void CProjectView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CProjectDoc* CProjectView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CProjectDoc)));
	return (CProjectDoc*)m_pDocument;
}
#endif //_DEBUG


// CProjectView message handlers
