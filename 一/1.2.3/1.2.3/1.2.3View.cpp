
// 1.2.3View.cpp : CMy123View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CMy123View ����/����

CMy123View::CMy123View()
{
	// TODO: �ڴ˴���ӹ������
	b = " you";
}

CMy123View::~CMy123View()
{
}

BOOL CMy123View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy123View ����

void CMy123View::OnDraw(CDC* /*pDC*/)
{
	CMy123Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy123View ���

#ifdef _DEBUG
void CMy123View::AssertValid() const
{
	CView::AssertValid();
}

void CMy123View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy123Doc* CMy123View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy123Doc)));
	return (CMy123Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy123View ��Ϣ�������



void CMy123View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy123Doc* pDoc = GetDocument();
	CString s;
	s = pDoc->a;
	s += b;
	CClientDC dc(this);
	dc.TextOutW(100, 100, s);

	CView::OnLButtonDown(nFlags, point);
}
