#pragma once

//����ļ����ܻ����ƽ̨�����仯
#ifdef HZ_PLATFORM_WINDOWS

//����һ����Ҫ�������ط�ʵ�ֵĺ���������Ӧ�ó��������ǽ��ڿͻ���ʵ�ֵĲ���
//��C++�У�extern�ؼ��ֵ�����������һ���������������ⲿ���ӣ�external linkage�������䶨��λ���������뵥Ԫ������һ��Դ�ļ����С����ں������ԣ�Ĭ������������;����ⲿ���ӣ����extern�ڴ˴��ǿ�ѡ�ġ�
extern Hazel::Application* Hazel::CreateApplication();


int main()
{
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized Log!");
	int a = 5;
	HZ_INFO("Hello! Var={0}", a);
	//��һ���ִ���Ӧ�������洦�������Ӧ�ó���
	//����ʹ�öѷ��䣬��ΪSandbox���ܻ�ǳ���������Ҫ�������������ڣ���ʵ��������������Ӧ�ó���ĺ���
	auto app = Hazel::CreateApplication();  //return new Sandbox();
	app->Run();
	delete app;
}

#endif