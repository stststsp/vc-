
// 3.1.2(2).h : 3.1.2(2) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy3122App:
// �йش����ʵ�֣������ 3.1.2(2).cpp
//

class CMy3122App : public CWinApp
{
public:
	CMy3122App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy3122App theApp;
