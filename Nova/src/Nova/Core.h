#pragma once

#ifdef NV_PLATFORM_WINDOWS
	#ifdef NV_BUILD_DLL
		#define NOVA_API __declspec(dllexport)
	#else
		#define NOVA_API __declspec(dllimport)
	#endif
#else
	#error Nova only supports Windows!
#endif