
// 1.2.2View.cpp : CMy122View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "1.2.2.h"
#endif

#include "1.2.2Doc.h"
#include "1.2.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy122View

IMPLEMENT_DYNCREATE(CMy122View, CView)

BEGIN_MESSAGE_MAP(CMy122View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMy122View ����/����

CMy122View::CMy122View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy122View::~CMy122View()
{
}

BOOL CMy122View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy122View ����

void CMy122View::OnDraw(CDC* /*pDC*/)
{
	CMy122Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy122View ���

#ifdef _DEBUG
void CMy122View::AssertValid() const
{
	CView::AssertValid();
}

void CMy122View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy122Doc* CMy122View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy122Doc)));
	return (CMy122Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy122View ��Ϣ�������


void CMy122View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy122Doc* pDoc = GetDocument();
	pDoc->count = pDoc->count + 1;
	CView::OnLButtonDown(nFlags, point);
}


void CMy122View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy122Doc* pDoc = GetDocument();
	CString s;
	s.Format(_T("����������ǣ�%d�Σ�"), pDoc->count);
	CClientDC dc(this);
	dc.TextOutW(100, 100, s);
	CView::OnRButtonDown(nFlags, point);
}
