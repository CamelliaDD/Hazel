#pragma once

#include "Core.h"
#include "Events/Event.h"
#include "Events/ApplicationEvent.h"

#include "Window.h"

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

		void OnEvent(Event& e);

	private:
		bool OnWindowClosed(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	//在客户端中定义
	Application* CreateApplication();
}


