#pragma once

#include "Core.h"

namespace Aspen {

	class ASPEN_API Application {

	public:

		Application();
		virtual ~Application();

		void Run();

	};

	Application* CreateApplication();

}