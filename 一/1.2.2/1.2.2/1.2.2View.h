
// 1.2.2View.h : CMy122View ��Ľӿ�
//

#pragma once


class CMy122View : public CView
{
protected: // �������л�����
	CMy122View();
	DECLARE_DYNCREATE(CMy122View)

// ����
public:
	CMy122Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy122View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 1.2.2View.cpp �еĵ��԰汾
inline CMy122Doc* CMy122View::GetDocument() const
   { return reinterpret_cast<CMy122Doc*>(m_pDocument); }
#endif

