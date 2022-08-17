#pragma once

#ifdef FE_PLATFORM_WIN

	extern FearEngine::Application* FearEngine::CreateApplication();

	void main(int argc, char** argv)
	{
		auto app = FearEngine::CreateApplication();
		app->Run();
		delete app;
	}
#endif

