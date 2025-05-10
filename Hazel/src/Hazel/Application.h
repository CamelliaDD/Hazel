#pragma once

#include "Core.h"
#include "Hazel/LayerStack.h"
#include "Hazel/Events/Event.h"
#include "Hazel/Events/ApplicationEvent.h"

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

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* overlay);
	private:
		bool OnWindowClosed(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
		LayerStack m_LayerStack;
	};

	//在客户端中定义
	Application* CreateApplication();
}


