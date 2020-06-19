#pragma once

#ifdef ASP_PLATFORM_WINDOWS

extern Aspen::Application* Aspen::CreateApplication();

	int main(int argc, char** argv) {

		auto app = Aspen::CreateApplication();
		app->Run();
		delete app;

		return 0;

	}

#endif