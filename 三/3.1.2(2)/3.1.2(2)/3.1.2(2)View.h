
// 3.1.2(2)View.h : CMy3122View ��Ľӿ�
//

#pragma once


class CMy3122View : public CView
{
protected: // �������л�����
	CMy3122View();
	DECLARE_DYNCREATE(CMy3122View)

// ����
public:
	CMy3122Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy3122View();
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

#ifndef _DEBUG  // 3.1.2(2)View.cpp �еĵ��԰汾
inline CMy3122Doc* CMy3122View::GetDocument() const
   { return reinterpret_cast<CMy3122Doc*>(m_pDocument); }
#endif

