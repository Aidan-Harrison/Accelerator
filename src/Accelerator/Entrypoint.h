#pragma once

#ifdef AC_PLATFORM_WINDOWS

extern Accelerator::Application* Accelerator::CreateApplication();

int main(int argc, char** argv) { // Research this
	auto app = Accelerator::CreateApplication();
	app->Run();
	delete app;
}

#endif
