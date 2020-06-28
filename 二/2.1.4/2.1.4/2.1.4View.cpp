
// 2.1.4View.cpp : CMy214View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2.1.4.h"
#endif

#include "2.1.4Doc.h"
#include "2.1.4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy214View

IMPLEMENT_DYNCREATE(CMy214View, CView)

BEGIN_MESSAGE_MAP(CMy214View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy214View 构造/析构

CMy214View::CMy214View()
{
	// TODO: 在此处添加构造代码

}

CMy214View::~CMy214View()
{
}

BOOL CMy214View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy214View 绘制

void CMy214View::OnDraw(CDC* pDC)
{
	CMy214Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy214View 诊断

#ifdef _DEBUG
void CMy214View::AssertValid() const
{
	CView::AssertValid();
}

void CMy214View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy214Doc* CMy214View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy214Doc)));
	return (CMy214Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy214View 消息处理程序


void CMy214View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CBrush brush(RGB(100,80,135));//根据自己需要填充颜色
	CBrush *oldbrush;
	oldbrush = dc.SelectObject(&brush);//选新的画刷
	CRect cr;
	this->GetClientRect(&cr);     //获取客户区的大小存入cr
	dc.Ellipse(cr);
	dc.SelectObject(oldbrush);//将原来的画刷选回去 
	CView::OnLButtonDown(nFlags, point);
}
