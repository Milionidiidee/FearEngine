#pragma once

#include "Core.h"

namespace FearEngine {
	class FEARENGINE_API Application
	{
		public: 
				Application();
				virtual ~Application();
				void Run();
	};

	//To be defined in CLIENT
	Application* CreateApplication();
}

