
// 3.1.2(2)View.cpp : CMy3122View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "3.1.2(2).h"
#endif

#include "3.1.2(2)Doc.h"
#include "3.1.2(2)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3122View

IMPLEMENT_DYNCREATE(CMy3122View, CView)

BEGIN_MESSAGE_MAP(CMy3122View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy3122View 构造/析构

CMy3122View::CMy3122View()
{
	// TODO: 在此处添加构造代码

}

CMy3122View::~CMy3122View()
{
}

BOOL CMy3122View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy3122View 绘制

void CMy3122View::OnDraw(CDC* pDC)
{
	CMy3122Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	for (int i = 0; i < pDoc->ca.GetSize(); i++)
		pDC->Ellipse(pDoc->ca.GetAt(i));
}


// CMy3122View 诊断

#ifdef _DEBUG
void CMy3122View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3122View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3122Doc* CMy3122View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3122Doc)));
	return (CMy3122Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3122View 消息处理程序


void CMy3122View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	int a = rand() % 50 + 5;        //生成随机数
	int b = rand() % 50 + 5;
	CClientDC dc(this);
	CRect cr(point.x - a, point.y - b, point.x + a, point.y + b);
	CMy3122Doc* pDoc = GetDocument();
	pDoc->ca.Add(cr);
	dc.Ellipse(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
