
// 1.2.3View.h : CMy123View ��Ľӿ�
//

#pragma once


class CMy123View : public CView
{
protected: // �������л�����
	CMy123View();
	DECLARE_DYNCREATE(CMy123View)

// ����
public:
	CMy123Doc* GetDocument() const;

// ����
public:
	CString b;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy123View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnMButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 1.2.3View.cpp �еĵ��԰汾
inline CMy123Doc* CMy123View::GetDocument() const
   { return reinterpret_cast<CMy123Doc*>(m_pDocument); }
#endif

