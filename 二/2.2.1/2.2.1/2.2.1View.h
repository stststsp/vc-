
// 2.2.1View.h : CMy221View ��Ľӿ�
//

#pragma once


class CMy221View : public CView
{
protected: // �������л�����
	CMy221View();
	DECLARE_DYNCREATE(CMy221View)

// ����
public:
	CMy221Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy221View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 2.2.1View.cpp �еĵ��԰汾
inline CMy221Doc* CMy221View::GetDocument() const
   { return reinterpret_cast<CMy221Doc*>(m_pDocument); }
#endif

