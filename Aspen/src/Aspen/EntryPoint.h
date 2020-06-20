#pragma once

#ifdef ASP_PLATFORM_WINDOWS

extern Aspen::Application* Aspen::CreateApplication();

	int main(int argc, char** argv) {

		Aspen::Log::Init();
		ASP_CORE_WARN("Initialized Log");
		int a = 5;
		ASP_INFO("Var={0}", a);

		auto app = Aspen::CreateApplication();
		app->Run();
		delete app;

		return 0;

	}

#endif