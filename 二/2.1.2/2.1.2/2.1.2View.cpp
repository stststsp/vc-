
// 2.1.2View.cpp : CMy212View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CMy212View ����/����

CMy212View::CMy212View()
{
	// TODO: �ڴ˴���ӹ������
	ca.SetSize(256);
}

CMy212View::~CMy212View()
{
}

BOOL CMy212View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy212View ����

void CMy212View::OnDraw(CDC* pDC)
{
	CMy212Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i < ca.GetSize(); i++)
		pDC->Ellipse(ca.GetAt(i));
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy212View ���

#ifdef _DEBUG
void CMy212View::AssertValid() const
{
	CView::AssertValid();
}

void CMy212View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy212Doc* CMy212View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy212Doc)));
	return (CMy212Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy212View ��Ϣ�������


void CMy212View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int r = rand() % 50 + 5;
	CRect cr(point.x - r, point.y - r, point.x + r, point.y + r);
	ca.Add(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
