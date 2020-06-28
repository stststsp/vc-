
// 3.1.1View.h : CMy311View 类的接口
//

#pragma once


class CMy311View : public CView
{
protected: // 仅从序列化创建
	CMy311View();
	DECLARE_DYNCREATE(CMy311View)

// 特性
public:
	CMy311Doc* GetDocument() const;

// 操作
public:
	CArray<CRect, CRect&>  ca;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy311View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 3.1.1View.cpp 中的调试版本
inline CMy311Doc* CMy311View::GetDocument() const
   { return reinterpret_cast<CMy311Doc*>(m_pDocument); }
#endif

