
// 3.1.1View.cpp : CMy311View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "3.1.1.h"
#endif

#include "3.1.1Doc.h"
#include "3.1.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy311View

IMPLEMENT_DYNCREATE(CMy311View, CView)

BEGIN_MESSAGE_MAP(CMy311View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy311View 构造/析构

CMy311View::CMy311View()
{
	// TODO: 在此处添加构造代码
	ca.SetSize(256);
}

CMy311View::~CMy311View()
{
}

BOOL CMy311View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy311View 绘制

void CMy311View::OnDraw(CDC* pDC)
{
	CMy311Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: 在此处为本机数据添加绘制代码
	
	for (int i = 0; i < ca.GetSize(); i++)
		pDC->Ellipse(ca.GetAt(i));
}


// CMy311View 诊断

#ifdef _DEBUG
void CMy311View::AssertValid() const
{
	CView::AssertValid();
}

void CMy311View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy311Doc* CMy311View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy311Doc)));
	return (CMy311Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy311View 消息处理程序


void CMy311View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect cr;
	this->GetClientRect(&cr); 
	CClientDC dc(this);
	int r = (cr.bottom - cr.top) / 2;
	CRect cr1(point.x - r, point.y - r, point.x + r, point.y + r);
	ca.Add(cr1);
	dc.Ellipse(cr1);

	CView::OnLButtonDown(nFlags, point);
}
