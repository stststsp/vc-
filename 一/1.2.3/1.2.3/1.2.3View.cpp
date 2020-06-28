
// 1.2.3View.cpp : CMy123View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "1.2.3.h"
#endif

#include "1.2.3Doc.h"
#include "1.2.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy123View

IMPLEMENT_DYNCREATE(CMy123View, CView)

BEGIN_MESSAGE_MAP(CMy123View, CView)
//	ON_WM_MBUTTONDOWN()
ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy123View 构造/析构

CMy123View::CMy123View()
{
	// TODO: 在此处添加构造代码
	b = " you";
}

CMy123View::~CMy123View()
{
}

BOOL CMy123View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy123View 绘制

void CMy123View::OnDraw(CDC* /*pDC*/)
{
	CMy123Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy123View 诊断

#ifdef _DEBUG
void CMy123View::AssertValid() const
{
	CView::AssertValid();
}

void CMy123View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy123Doc* CMy123View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy123Doc)));
	return (CMy123Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy123View 消息处理程序



void CMy123View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy123Doc* pDoc = GetDocument();
	CString s;
	s = pDoc->a;
	s += b;
	CClientDC dc(this);
	dc.TextOutW(100, 100, s);

	CView::OnLButtonDown(nFlags, point);
}
