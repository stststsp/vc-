
// ��ҵ8-��ϰ2View.h : C��ҵ8��ϰ2View ��Ľӿ�
//

#pragma once


class C��ҵ8��ϰ2View : public CView
{
protected: // �������л�����
	C��ҵ8��ϰ2View();
	DECLARE_DYNCREATE(C��ҵ8��ϰ2View)

// ����
public:
	C��ҵ8��ϰ2Doc* GetDocument() const;

// ����
public:
	CString  B;
	CString  C;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ8��ϰ2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
	afx_msg void OnFileSave();
	afx_msg void OnFileSaveAs();
	afx_msg void OnShowpicture();
};

#ifndef _DEBUG  // ��ҵ8-��ϰ2View.cpp �еĵ��԰汾
inline C��ҵ8��ϰ2Doc* C��ҵ8��ϰ2View::GetDocument() const
   { return reinterpret_cast<C��ҵ8��ϰ2Doc*>(m_pDocument); }
#endif

