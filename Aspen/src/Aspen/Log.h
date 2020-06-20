#pragma once

#include <memory.h>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Aspen {

	class ASPEN_API Log {

	public:

		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:

		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};

}

#define ASP_CORE_TRACE(...)		::Aspen::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define ASP_CORE_WARN(...)		::Aspen::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define ASP_CORE_INFO(...)		::Aspen::Log::GetCoreLogger()->info(__VA_ARGS__)
#define ASP_CORE_ERROR(...)		::Aspen::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ASP_CORE_FATAL(...)		::Aspen::Log::GetCoreLogger()->fatal(__VA_ARGS__)

#define ASP_TRACE(...)			::Aspen::Log::GetClientLogger()->trace(__VA_ARGS__)
#define ASP_WARN(...)			::Aspen::Log::GetClientLogger()->warn(__VA_ARGS__)
#define ASP_INFO(...)			::Aspen::Log::GetClientLogger()->info(__VA_ARGS__)
#define ASP_ERROR(...)			::Aspen::Log::GetClientLogger()->error(__VA_ARGS__)
#define ASP_FATAL(...)			::Aspen::Log::GetClientLogger()->fatal(__VA_ARGS__)