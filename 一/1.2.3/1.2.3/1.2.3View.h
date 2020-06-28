
// 1.2.3View.h : CMy123View 类的接口
//

#pragma once


class CMy123View : public CView
{
protected: // 仅从序列化创建
	CMy123View();
	DECLARE_DYNCREATE(CMy123View)

// 特性
public:
	CMy123Doc* GetDocument() const;

// 操作
public:
	CString b;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy123View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnMButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 1.2.3View.cpp 中的调试版本
inline CMy123Doc* CMy123View::GetDocument() const
   { return reinterpret_cast<CMy123Doc*>(m_pDocument); }
#endif

