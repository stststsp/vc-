
// 2.1.4View.cpp : CMy214View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CMy214View ����/����

CMy214View::CMy214View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy214View::~CMy214View()
{
}

BOOL CMy214View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy214View ����

void CMy214View::OnDraw(CDC* pDC)
{
	CMy214Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy214View ���

#ifdef _DEBUG
void CMy214View::AssertValid() const
{
	CView::AssertValid();
}

void CMy214View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy214Doc* CMy214View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy214Doc)));
	return (CMy214Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy214View ��Ϣ�������


void CMy214View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CBrush brush(RGB(100,80,135));//�����Լ���Ҫ�����ɫ
	CBrush *oldbrush;
	oldbrush = dc.SelectObject(&brush);//ѡ�µĻ�ˢ
	CRect cr;
	this->GetClientRect(&cr);     //��ȡ�ͻ����Ĵ�С����cr
	dc.Ellipse(cr);
	dc.SelectObject(oldbrush);//��ԭ���Ļ�ˢѡ��ȥ 
	CView::OnLButtonDown(nFlags, point);
}
