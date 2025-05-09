﻿#pragma once

#include "Core.h"

#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"




namespace Hazel {
	class HAZEL_API Log
	{
	public:
		//创建一个初始化函数
		static void Init();
		//创建一个静态内联的ST共享指针（inline ststic ST shared pointer）
		//设置两种（核心/客户端）日志记录器
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//核心日志宏（Core log macros）
#define HZ_CORE_TRACE(...)		::Hazel::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define HZ_CORE_INFO(...)       ::Hazel::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HZ_CORE_WARN(...)       ::Hazel::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HZ_CORE_ERROR(...)      ::Hazel::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HZ_CORE_FATAL(...)      ::Hazel::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//客户端日志宏（Client log macros）
#define HZ_TRACE(...)	        ::Hazel::Log::GetClientLogger()->trace(__VA_ARGS__)
#define HZ_INFO(...)            ::Hazel::Log::GetClientLogger()->info(__VA_ARGS__)
#define HZ_WARN(...)            ::Hazel::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HZ_ERROR(...)           ::Hazel::Log::GetClientLogger()->error(__VA_ARGS__)
#define HZ_FATAL(...)           ::Hazel::Log::GetClientLogger()->fatal(__VA_ARGS__)