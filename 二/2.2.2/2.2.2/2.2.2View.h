
// 2.2.2View.h : CMy222View ��Ľӿ�
//

#pragma once


class CMy222View : public CView
{
protected: // �������л�����
	CMy222View();
	DECLARE_DYNCREATE(CMy222View)

// ����
public:
	CMy222Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy222View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 2.2.2View.cpp �еĵ��԰汾
inline CMy222Doc* CMy222View::GetDocument() const
   { return reinterpret_cast<CMy222Doc*>(m_pDocument); }
#endif

