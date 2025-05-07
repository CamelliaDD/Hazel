#pragma once

//入口文件可能会根据平台有所变化
#ifdef HZ_PLATFORM_WINDOWS

//这是一个需要在其他地方实现的函数，创建应用程序是我们将在客户端实现的操作
//在C++中，extern关键字的作用是声明一个变量或函数具有外部链接（external linkage），即其定义位于其他编译单元（如另一个源文件）中。对于函数而言，默认情况下声明就具有外部链接，因此extern在此处是可选的。
extern Hazel::Application* Hazel::CreateApplication();


int main()
{
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized Log!");
	int a = 5;
	HZ_INFO("Hello! Var={0}", a);
	//这一部分处理应该由引擎处理而不是应用程序
	//我们使用堆分配，因为Sandbox可能会非常大，我们需要控制其生命周期，这实际上是我们整个应用程序的核心
	auto app = Hazel::CreateApplication();  //return new Sandbox();
	app->Run();
	delete app;
}

#endif