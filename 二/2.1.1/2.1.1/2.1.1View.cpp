
// 2.1.1View.cpp : CMy211View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CMy211View ����/����

CMy211View::CMy211View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy211View::~CMy211View()
{
}

BOOL CMy211View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy211View ����

void CMy211View::OnDraw(CDC* /*pDC*/)
{
	CMy211Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy211View ���

#ifdef _DEBUG
void CMy211View::AssertValid() const
{
	CView::AssertValid();
}

void CMy211View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy211Doc* CMy211View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy211Doc)));
	return (CMy211Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy211View ��Ϣ�������


void CMy211View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int r = rand() % 50 + 5;
	CClientDC dc(this);
	CRect cr(point.x - r, point.y - r, point.x + r, point.y + r);
	dc.Ellipse(cr);
	CView::OnLButtonDown(nFlags, point);
}
