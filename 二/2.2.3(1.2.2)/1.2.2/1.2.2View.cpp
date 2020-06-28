
// 1.2.2View.cpp : CMy122View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "1.2.2.h"
#endif

#include "1.2.2Doc.h"
#include "1.2.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy122View

IMPLEMENT_DYNCREATE(CMy122View, CView)

BEGIN_MESSAGE_MAP(CMy122View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMy122View 构造/析构

CMy122View::CMy122View()
{
	// TODO: 在此处添加构造代码

}

CMy122View::~CMy122View()
{
}

BOOL CMy122View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy122View 绘制

void CMy122View::OnDraw(CDC* /*pDC*/)
{
	CMy122Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy122View 诊断

#ifdef _DEBUG
void CMy122View::AssertValid() const
{
	CView::AssertValid();
}

void CMy122View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy122Doc* CMy122View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy122Doc)));
	return (CMy122Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy122View 消息处理程序


void CMy122View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy122Doc* pDoc = GetDocument();
	pDoc->count = pDoc->count + 1;
	CView::OnLButtonDown(nFlags, point);
}


void CMy122View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy122Doc* pDoc = GetDocument();
	CString s;
	s.Format(_T("鼠标点击次数是（%d次）"), pDoc->count);
	CClientDC dc(this);
	dc.TextOutW(100, 100, s);
	CView::OnRButtonDown(nFlags, point);
}
