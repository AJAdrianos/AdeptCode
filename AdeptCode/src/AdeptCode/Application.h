#pragma once

#include "Core.h"

namespace AdeptCode {
	class AC_API Application
	{
	public: 
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}