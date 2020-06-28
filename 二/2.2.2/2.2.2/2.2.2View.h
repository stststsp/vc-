
// 2.2.2View.h : CMy222View 类的接口
//

#pragma once


class CMy222View : public CView
{
protected: // 仅从序列化创建
	CMy222View();
	DECLARE_DYNCREATE(CMy222View)

// 特性
public:
	CMy222Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy222View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 2.2.2View.cpp 中的调试版本
inline CMy222Doc* CMy222View::GetDocument() const
   { return reinterpret_cast<CMy222Doc*>(m_pDocument); }
#endif

