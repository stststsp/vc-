
// 2.1.2View.cpp : CMy212View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2.1.2.h"
#endif

#include "2.1.2Doc.h"
#include "2.1.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy212View

IMPLEMENT_DYNCREATE(CMy212View, CView)

BEGIN_MESSAGE_MAP(CMy212View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy212View 构造/析构

CMy212View::CMy212View()
{
	// TODO: 在此处添加构造代码
	ca.SetSize(256);
}

CMy212View::~CMy212View()
{
}

BOOL CMy212View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy212View 绘制

void CMy212View::OnDraw(CDC* pDC)
{
	CMy212Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i < ca.GetSize(); i++)
		pDC->Ellipse(ca.GetAt(i));
	// TODO: 在此处为本机数据添加绘制代码
}


// CMy212View 诊断

#ifdef _DEBUG
void CMy212View::AssertValid() const
{
	CView::AssertValid();
}

void CMy212View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy212Doc* CMy212View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy212Doc)));
	return (CMy212Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy212View 消息处理程序


void CMy212View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int r = rand() % 50 + 5;
	CRect cr(point.x - r, point.y - r, point.x + r, point.y + r);
	ca.Add(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
