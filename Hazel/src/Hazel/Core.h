#pragma once

//_declspec(dllexport)/_declspec(dllimport)��������Windowsϵͳ
#ifdef HZ_PLATFORM_WINDOWS
	//���������HZ����dll�꣬��ζ���������ڳ���ΪHazel��Ŀ�������dll��������Sandbox
	#ifdef HZ_BUILD_DLL
		#define HAZEL_API __declspec(dllexport)
	#else
		#define HAZEL_API __declspec(dllimport)
	#endif
#else
	//��û�ж���ƽ̨ʱ�����������޷�����������֧����һ��ƽ̨
	#error Hazel only supports Windows! 

#endif