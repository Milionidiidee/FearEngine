#pragma once

#ifdef FE_PLATFORM_WIN
	#ifdef FE_BUILDDLL
		#define FEARENGINE_API __declspec(dllexport)
	#else
		#define FEARENGINE_API __declspec(dllimport)
	#endif
#else
	#error FearEngine only supports windows
#endif
