
// BusQuery.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CBusQueryApp: 
// �йش����ʵ�֣������ BusQuery.cpp
//

class CBusQueryApp : public CWinApp
{
public:
	CBusQueryApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CBusQueryApp theApp;