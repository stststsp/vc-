
// 2.2.2View.cpp : CMy222View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2.2.2.h"
#endif

#include "2.2.2Doc.h"
#include "2.2.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy222View

IMPLEMENT_DYNCREATE(CMy222View, CView)

BEGIN_MESSAGE_MAP(CMy222View, CView)
END_MESSAGE_MAP()

// CMy222View 构造/析构

CMy222View::CMy222View()
{
	// TODO: 在此处添加构造代码

}

CMy222View::~CMy222View()
{
}

BOOL CMy222View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy222View 绘制

void CMy222View::OnDraw(CDC* /*pDC*/)
{
	CMy222Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString b;
	CClientDC dc(this);
	dc.TextOutW(200, 200, pDoc->s);
	b.Format(_T("%d"), pDoc->a);
	dc.TextOutW(100, 100, b);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMy222View 诊断

#ifdef _DEBUG
void CMy222View::AssertValid() const
{
	CView::AssertValid();
}

void CMy222View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy222Doc* CMy222View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy222Doc)));
	return (CMy222Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy222View 消息处理程序
