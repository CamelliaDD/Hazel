﻿#pragma once

//_declspec(dllexport)/_declspec(dllimport)仅适用于Windows系统
#ifdef HZ_PLATFORM_WINDOWS
	//如果定义了HZ构建dll宏，意味着我们正在尝试为Hazel项目构建这个dll，而不是Sandbox
	#ifdef HZ_BUILD_DLL
		#define HAZEL_API __declspec(dllexport)
	#else
		#define HAZEL_API __declspec(dllimport)
	#endif
#else
	//在没有定义平台时触发错误导致无法构建，而仅支持这一种平台
	#error Hazel only supports Windows! 
#endif

#ifdef HZ_ENABLE_ASSERTS
	#define HZ_ASSERT(x, ...) { if(!(x)) { HZ_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define HZ_CORE_ASSERT(x, ...) { if(!(x)) { HZ_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define HZ_ASSERT(x, ...)
	#define HZ_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)