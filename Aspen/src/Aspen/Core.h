#pragma once

#ifdef ASP_PLATFORM_WINDOWS

	#ifdef ASP_BUILD_DLL
		#define ASPEN_API __declspec(dllexport)
	#else
		#define ASPEN_API __declspec(dllimport)
	#endif

#else

	#error Aspen only supports windows

#endif