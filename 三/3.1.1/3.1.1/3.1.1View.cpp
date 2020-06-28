
// 3.1.1View.cpp : CMy311View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CMy311View ����/����

CMy311View::CMy311View()
{
	// TODO: �ڴ˴���ӹ������
	ca.SetSize(256);
}

CMy311View::~CMy311View()
{
}

BOOL CMy311View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy311View ����

void CMy311View::OnDraw(CDC* pDC)
{
	CMy311Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	
	for (int i = 0; i < ca.GetSize(); i++)
		pDC->Ellipse(ca.GetAt(i));
}


// CMy311View ���

#ifdef _DEBUG
void CMy311View::AssertValid() const
{
	CView::AssertValid();
}

void CMy311View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy311Doc* CMy311View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy311Doc)));
	return (CMy311Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy311View ��Ϣ�������


void CMy311View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect cr;
	this->GetClientRect(&cr); 
	CClientDC dc(this);
	int r = (cr.bottom - cr.top) / 2;
	CRect cr1(point.x - r, point.y - r, point.x + r, point.y + r);
	ca.Add(cr1);
	dc.Ellipse(cr1);

	CView::OnLButtonDown(nFlags, point);
}
