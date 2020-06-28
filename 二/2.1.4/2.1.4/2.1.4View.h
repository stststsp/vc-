
// 2.1.4View.h : CMy214View 类的接口
//

#pragma once


class CMy214View : public CView
{
protected: // 仅从序列化创建
	CMy214View();
	DECLARE_DYNCREATE(CMy214View)

// 特性
public:
	CMy214Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy214View();
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

#ifndef _DEBUG  // 2.1.4View.cpp 中的调试版本
inline CMy214Doc* CMy214View::GetDocument() const
   { return reinterpret_cast<CMy214Doc*>(m_pDocument); }
#endif

