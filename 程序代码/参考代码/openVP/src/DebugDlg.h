﻿//////////////////////////////////////////////////////////////////////////
//Copyright(C) Dake，2010-05
//编程方式：win32 SDK C语言编程
//文件名：DebugDlg.h
//描述：调试窗口
//主要函数： 
//版本：V1.1
//////////////////////////////////////////////////////////////////////////

#include "global.h"


#ifdef _DEBUG
BOOL CALLBACK DebugDlg(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);
#endif