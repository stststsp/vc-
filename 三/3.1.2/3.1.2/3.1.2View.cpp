
// 3.1.2View.cpp : CMy312View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "3.1.2.h"
#endif

#include "3.1.2Doc.h"
#include "3.1.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy312View

IMPLEMENT_DYNCREATE(CMy312View, CView)

BEGIN_MESSAGE_MAP(CMy312View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy312View 构造/析构

CMy312View::CMy312View()
{
	// TODO: 在此处添加构造代码
	ca.SetSize(256);
}

CMy312View::~CMy312View()
{
}

BOOL CMy312View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy312View 绘制

void CMy312View::OnDraw(CDC* pDC)
{
	CMy312Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码

	for (int i = 0; i < ca.GetSize(); i++)
		pDC->Ellipse(ca.GetAt(i));
}


// CMy312View 诊断

#ifdef _DEBUG
void CMy312View::AssertValid() const
{
	CView::AssertValid();
}

void CMy312View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy312Doc* CMy312View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy312Doc)));
	return (CMy312Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy312View 消息处理程序


void CMy312View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int a = rand() % 50 + 5;        //生成随机数
	int b = rand() % 50 + 5;
	CClientDC dc(this);
	CRect cr(point.x - a, point.y - b, point.x + a, point.y + b); 
	ca.Add(cr);
	dc.Ellipse(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
