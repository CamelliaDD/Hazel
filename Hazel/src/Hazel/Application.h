#pragma once

#include "Core.h"


namespace Hazel
{
	//class _declspec(dllexport) Application通过宏替换为HAZEL_API
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();
		//运行应用程序的运行函数
		void Run();
	};

	//在客户端中定义
	Application* CreateApplication();
}


