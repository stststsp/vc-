
// 3.1.2View.cpp : CMy312View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CMy312View ����/����

CMy312View::CMy312View()
{
	// TODO: �ڴ˴���ӹ������
	ca.SetSize(256);
}

CMy312View::~CMy312View()
{
}

BOOL CMy312View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy312View ����

void CMy312View::OnDraw(CDC* pDC)
{
	CMy312Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���

	for (int i = 0; i < ca.GetSize(); i++)
		pDC->Ellipse(ca.GetAt(i));
}


// CMy312View ���

#ifdef _DEBUG
void CMy312View::AssertValid() const
{
	CView::AssertValid();
}

void CMy312View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy312Doc* CMy312View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy312Doc)));
	return (CMy312Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy312View ��Ϣ�������


void CMy312View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int a = rand() % 50 + 5;        //���������
	int b = rand() % 50 + 5;
	CClientDC dc(this);
	CRect cr(point.x - a, point.y - b, point.x + a, point.y + b); 
	ca.Add(cr);
	dc.Ellipse(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
