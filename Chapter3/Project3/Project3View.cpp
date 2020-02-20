
// Project3View.cpp : implementation of the CProject3View class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Project3.h"
#endif

#include "Project3Doc.h"
#include "Project3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CProject3View

IMPLEMENT_DYNCREATE(CProject3View, CView)

BEGIN_MESSAGE_MAP(CProject3View, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CProject3View construction/destruction

CProject3View::CProject3View() noexcept
{
	// TODO: add construction code here

}

CProject3View::~CProject3View()
{
}

BOOL CProject3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CProject3View drawing

void CProject3View::OnDraw(CDC* pDC)
{
	CProject3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
	CPen pen, * oldPen;
	pen.CreatePen(PS_SOLID, 1, m_PenColor);
	oldPen = pDC->SelectObject(&pen);
	pDC->Rectangle(m_ptLeftTop.x, m_ptLeftTop.y,
		m_ptRightBottom.x, m_ptRightBottom.y);
	pDC->SelectObject(oldPen);
	pen.DeleteObject();
}


// CProject3View printing

BOOL CProject3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CProject3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CProject3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CProject3View diagnostics

#ifdef _DEBUG
void CProject3View::AssertValid() const
{
	CView::AssertValid();
}

void CProject3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CProject3Doc* CProject3View::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CProject3Doc)));
	return (CProject3Doc*)m_pDocument;
}
#endif //_DEBUG


// CProject3View message handlers


void CProject3View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: Add your message handler code here and/or call default
	switch (nChar)
	{
	case 'r':
		m_PenColor = RGB(255, 0, 0);
		break;
	case 'g':
		m_PenColor = RGB(0, 255, 0);
		break;
	case 'b':
		m_PenColor = RGB(0, 0, 255);
		break;
	}
	CView::OnChar(nChar, nRepCnt, nFlags);
}


void CProject3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	m_ptLeftTop = point;
	CView::OnLButtonDown(nFlags, point);
}


void CProject3View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	if (nFlags & MK_LBUTTON)
	{
		m_ptRightBottom = point;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}


void CProject3View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	m_ptRightBottom = point;
	Invalidate();
	CView::OnLButtonUp(nFlags, point);
}
