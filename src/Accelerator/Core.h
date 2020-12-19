#pragma once

// Macros for export and import of dll
#ifdef AC_PLATFORM_WINDOWS
	#ifdef AC_BUILD_DLL
		#define ACCELERATOR_API __declspec(dllexport)
	#else
		#define ACCELERATOR_API __declspec(dllimport)
	#endif
#else
	#error Accelerator only works on Windows!
#endif
