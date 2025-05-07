#include <Hazel.h>

//创建一个Hazel应用程序
class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

//调用这个函数构建实际的应用程序
Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}
