
// 2.1.3View.cpp : CMy213View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2.1.3.h"
#endif

#include "2.1.3Doc.h"
#include "2.1.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy213View

IMPLEMENT_DYNCREATE(CMy213View, CView)

BEGIN_MESSAGE_MAP(CMy213View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy213View ����/����

CMy213View::CMy213View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy213View::~CMy213View()
{
}

BOOL CMy213View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy213View ����

void CMy213View::OnDraw(CDC* /*pDC*/)
{
	CMy213Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy213View ���

#ifdef _DEBUG
void CMy213View::AssertValid() const
{
	CView::AssertValid();
}

void CMy213View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy213Doc* CMy213View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy213Doc)));
	return (CMy213Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy213View ��Ϣ�������


void CMy213View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect cr;
	this->GetClientRect(&cr);     //��ȡ�ͻ����Ĵ�С����cr
	CClientDC dc(this);
	dc.Ellipse(cr);
	CView::OnLButtonDown(nFlags, point);
}
