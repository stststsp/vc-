
// 3.1.2View.h : CMy312View ��Ľӿ�
//

#pragma once


class CMy312View : public CView
{
protected: // �������л�����
	CMy312View();
	DECLARE_DYNCREATE(CMy312View)

// ����
public:
	CMy312Doc* GetDocument() const;

// ����
public:
	CArray<CRect, CRect&>  ca;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy312View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 3.1.2View.cpp �еĵ��԰汾
inline CMy312Doc* CMy312View::GetDocument() const
   { return reinterpret_cast<CMy312Doc*>(m_pDocument); }
#endif

