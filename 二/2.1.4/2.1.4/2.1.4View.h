
// 2.1.4View.h : CMy214View ��Ľӿ�
//

#pragma once


class CMy214View : public CView
{
protected: // �������л�����
	CMy214View();
	DECLARE_DYNCREATE(CMy214View)

// ����
public:
	CMy214Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy214View();
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

#ifndef _DEBUG  // 2.1.4View.cpp �еĵ��԰汾
inline CMy214Doc* CMy214View::GetDocument() const
   { return reinterpret_cast<CMy214Doc*>(m_pDocument); }
#endif

