#include <Hazel.h>

//����һ��HazelӦ�ó���
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

//���������������ʵ�ʵ�Ӧ�ó���
Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}
