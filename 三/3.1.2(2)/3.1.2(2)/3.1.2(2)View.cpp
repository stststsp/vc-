
// 3.1.2(2)View.cpp : CMy3122View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CMy3122View ����/����

CMy3122View::CMy3122View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy3122View::~CMy3122View()
{
}

BOOL CMy3122View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy3122View ����

void CMy3122View::OnDraw(CDC* pDC)
{
	CMy3122Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	for (int i = 0; i < pDoc->ca.GetSize(); i++)
		pDC->Ellipse(pDoc->ca.GetAt(i));
}


// CMy3122View ���

#ifdef _DEBUG
void CMy3122View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3122View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3122Doc* CMy3122View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3122Doc)));
	return (CMy3122Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3122View ��Ϣ�������


void CMy3122View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	int a = rand() % 50 + 5;        //���������
	int b = rand() % 50 + 5;
	CClientDC dc(this);
	CRect cr(point.x - a, point.y - b, point.x + a, point.y + b);
	CMy3122Doc* pDoc = GetDocument();
	pDoc->ca.Add(cr);
	dc.Ellipse(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
