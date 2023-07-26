#pragma once

#ifdef BL_PLATFORM_WINDOWS
	#ifdef BL_BUILD_DLL
		#define BALIAN_API __declspec(dllexport)
	#else
		#define BALIAN_API __declspec(dllexport)
	#endif
#else
	#error Balian only supports Windows !
#endif