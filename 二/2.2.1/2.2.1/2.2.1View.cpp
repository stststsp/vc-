
// 2.2.1View.cpp : CMy221View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2.2.1.h"
#endif

#include "2.2.1Doc.h"
#include "2.2.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy221View

IMPLEMENT_DYNCREATE(CMy221View, CView)

BEGIN_MESSAGE_MAP(CMy221View, CView)
END_MESSAGE_MAP()

// CMy221View 构造/析构

CMy221View::CMy221View()
{
	// TODO: 在此处添加构造代码

}

CMy221View::~CMy221View()
{
}

BOOL CMy221View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy221View 绘制

void CMy221View::OnDraw(CDC* /*pDC*/)
{
	CMy221Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s = _T("我是***");
	CString b;
	int a = 0;
	CClientDC dc(this);
	dc.TextOutW(100, 200,s);
	b.Format(_T("%d"),a);
	dc.TextOutW(100, 100, b);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMy221View 诊断

#ifdef _DEBUG
void CMy221View::AssertValid() const
{
	CView::AssertValid();
}

void CMy221View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy221Doc* CMy221View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy221Doc)));
	return (CMy221Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy221View 消息处理程序
