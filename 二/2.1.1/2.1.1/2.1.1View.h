
// 2.1.1View.h : CMy211View ��Ľӿ�
//

#pragma once


class CMy211View : public CView
{
protected: // �������л�����
	CMy211View();
	DECLARE_DYNCREATE(CMy211View)

// ����
public:
	CMy211Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy211View();
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

#ifndef _DEBUG  // 2.1.1View.cpp �еĵ��԰汾
inline CMy211Doc* CMy211View::GetDocument() const
   { return reinterpret_cast<CMy211Doc*>(m_pDocument); }
#endif

