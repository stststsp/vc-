
// MFCApplication2classView.cpp : CMFCApplication2classView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCApplication2class.h"
#endif

#include "MFCApplication2classDoc.h"
#include "MFCApplication2classView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication2classView

IMPLEMENT_DYNCREATE(CMFCApplication2classView, CView)

BEGIN_MESSAGE_MAP(CMFCApplication2classView, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CMFCApplication2classView 构造/析构

CMFCApplication2classView::CMFCApplication2classView()
{
	// TODO:  在此处添加构造代码

}

CMFCApplication2classView::~CMFCApplication2classView()
{
}

BOOL CMFCApplication2classView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCApplication2classView 绘制

void CMFCApplication2classView::OnDraw(CDC* pDC)
{
	CMFCApplication2classDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码

	pDoc->b.Format(_T("%d"),pDoc->A);
	pDC->TextOutW(200, 200, pDoc->s);
	pDC->TextOutW(300, 300, pDoc->b);
	                                                                                                                                                                                                                                                                                                                                                                                                                                      

}

void CMFCApplication2classView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CMFCApplication2classView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CMFCApplication2classView 诊断

#ifdef _DEBUG
void CMFCApplication2classView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication2classView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication2classDoc* CMFCApplication2classView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication2classDoc)));
	return (CMFCApplication2classDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication2classView 消息处理程序
