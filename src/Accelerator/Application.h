#pragma once

#include "Core.h"

namespace Accelerator {

	class ACCELERATOR_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// Define in client
	Application* CreateApplication();

}

