
// 2.2.2View.cpp : CMy222View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2.2.2.h"
#endif

#include "2.2.2Doc.h"
#include "2.2.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy222View

IMPLEMENT_DYNCREATE(CMy222View, CView)

BEGIN_MESSAGE_MAP(CMy222View, CView)
END_MESSAGE_MAP()

// CMy222View ����/����

CMy222View::CMy222View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy222View::~CMy222View()
{
}

BOOL CMy222View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy222View ����

void CMy222View::OnDraw(CDC* /*pDC*/)
{
	CMy222Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString b;
	CClientDC dc(this);
	dc.TextOutW(200, 200, pDoc->s);
	b.Format(_T("%d"), pDoc->a);
	dc.TextOutW(100, 100, b);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy222View ���

#ifdef _DEBUG
void CMy222View::AssertValid() const
{
	CView::AssertValid();
}

void CMy222View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy222Doc* CMy222View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy222Doc)));
	return (CMy222Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy222View ��Ϣ�������
