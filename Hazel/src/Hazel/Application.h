#pragma once

#include "Core.h"


namespace Hazel
{
	//class _declspec(dllexport) Applicationͨ�����滻ΪHAZEL_API
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();
		//����Ӧ�ó�������к���
		void Run();
	};

	//�ڿͻ����ж���
	Application* CreateApplication();
}


