#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication(); //this is implemented in whatever client calls it

int main(int argc, char** argv) {

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif
