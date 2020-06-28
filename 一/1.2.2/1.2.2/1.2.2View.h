
// 1.2.2View.h : CMy122View 类的接口
//

#pragma once


class CMy122View : public CView
{
protected: // 仅从序列化创建
	CMy122View();
	DECLARE_DYNCREATE(CMy122View)

// 特性
public:
	CMy122Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy122View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 1.2.2View.cpp 中的调试版本
inline CMy122Doc* CMy122View::GetDocument() const
   { return reinterpret_cast<CMy122Doc*>(m_pDocument); }
#endif

