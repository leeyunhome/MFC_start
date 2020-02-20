
// Project2View.cpp : implementation of the CProject2View class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Project2.h"
#endif

#include "Project2Doc.h"
#include "Project2View.h"

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
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
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

void CProject2View::OnDraw(CDC* pDC)
{
	CProject2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
	pDC->MoveTo(m_ptStart);
	pDC->LineTo(m_ptEnd);
	pDC->TextOutW(0, 0, m_str, m_str.GetLength());


	/*pDC->TextOut(0, 0, L"개발자구인난시대 개구시", 12);
	CRect rt;
	rt.left = 50;
	rt.top = 50;
	rt.right = 300;
	rt.bottom = 200;
	pDC->DrawText(L"C++예찬론자들\n", &rt, DT_CENTER | DT_VCENTER);*/
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


void CProject2View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: Add your message handler code here and/or call default
	if (nChar == VK_BACK)
		m_str.Delete(m_str.GetLength() - 1);
	else
		m_str.AppendChar(nChar);
	Invalidate();
	CView::OnChar(nChar, nRepCnt, nFlags);
}


void CProject2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	m_ptStart = point;
	CView::OnLButtonDown(nFlags, point);
}


void CProject2View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	if (nFlags & MK_LBUTTON)
	{
		m_ptEnd = point;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}


void CProject2View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	m_ptEnd = point;
	Invalidate();
	CView::OnLButtonUp(nFlags, point);
}
