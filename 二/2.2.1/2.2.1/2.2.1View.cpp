
// 2.2.1View.cpp : CMy221View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2.2.1.h"
#endif

#include "2.2.1Doc.h"
#include "2.2.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy221View

IMPLEMENT_DYNCREATE(CMy221View, CView)

BEGIN_MESSAGE_MAP(CMy221View, CView)
END_MESSAGE_MAP()

// CMy221View ����/����

CMy221View::CMy221View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy221View::~CMy221View()
{
}

BOOL CMy221View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy221View ����

void CMy221View::OnDraw(CDC* /*pDC*/)
{
	CMy221Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s = _T("����***");
	CString b;
	int a = 0;
	CClientDC dc(this);
	dc.TextOutW(100, 200,s);
	b.Format(_T("%d"),a);
	dc.TextOutW(100, 100, b);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy221View ���

#ifdef _DEBUG
void CMy221View::AssertValid() const
{
	CView::AssertValid();
}

void CMy221View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy221Doc* CMy221View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy221Doc)));
	return (CMy221Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy221View ��Ϣ�������
