
// 2.1.1View.cpp : CMy211View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2.1.1.h"
#endif

#include "2.1.1Doc.h"
#include "2.1.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy211View

IMPLEMENT_DYNCREATE(CMy211View, CView)

BEGIN_MESSAGE_MAP(CMy211View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy211View 构造/析构

CMy211View::CMy211View()
{
	// TODO: 在此处添加构造代码

}

CMy211View::~CMy211View()
{
}

BOOL CMy211View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy211View 绘制

void CMy211View::OnDraw(CDC* /*pDC*/)
{
	CMy211Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy211View 诊断

#ifdef _DEBUG
void CMy211View::AssertValid() const
{
	CView::AssertValid();
}

void CMy211View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy211Doc* CMy211View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy211Doc)));
	return (CMy211Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy211View 消息处理程序


void CMy211View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int r = rand() % 50 + 5;
	CClientDC dc(this);
	CRect cr(point.x - r, point.y - r, point.x + r, point.y + r);
	dc.Ellipse(cr);
	CView::OnLButtonDown(nFlags, point);
}
