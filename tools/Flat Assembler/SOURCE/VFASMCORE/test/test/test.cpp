// test.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <Windows.h>
#include <tchar.h>

#include "vfasmcore.h"


int _tmain(int argc, _TCHAR* argv[])
{
	TCHAR tcBuffer[MAX_PATH];
	ZeroMemory(tcBuffer, sizeof(tcBuffer));

	GetFileTitle(_T("C:\\windows"), tcBuffer, _countof(tcBuffer));

	return 0;
}

