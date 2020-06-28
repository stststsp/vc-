
// 3.1.2(2)View.h : CMy3122View 类的接口
//

#pragma once


class CMy3122View : public CView
{
protected: // 仅从序列化创建
	CMy3122View();
	DECLARE_DYNCREATE(CMy3122View)

// 特性
public:
	CMy3122Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy3122View();
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

#ifndef _DEBUG  // 3.1.2(2)View.cpp 中的调试版本
inline CMy3122Doc* CMy3122View::GetDocument() const
   { return reinterpret_cast<CMy3122Doc*>(m_pDocument); }
#endif

