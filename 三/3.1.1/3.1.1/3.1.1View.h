
// 3.1.1View.h : CMy311View ��Ľӿ�
//

#pragma once


class CMy311View : public CView
{
protected: // �������л�����
	CMy311View();
	DECLARE_DYNCREATE(CMy311View)

// ����
public:
	CMy311Doc* GetDocument() const;

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
	virtual ~CMy311View();
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

#ifndef _DEBUG  // 3.1.1View.cpp �еĵ��԰汾
inline CMy311Doc* CMy311View::GetDocument() const
   { return reinterpret_cast<CMy311Doc*>(m_pDocument); }
#endif

