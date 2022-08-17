#include <FearEngine.h>

class SandBox : public FearEngine::Application {
public: SandBox() {}
	  ~SandBox() {}
};

FearEngine::Application* FearEngine::CreateApplication() {
	return new SandBox();
}