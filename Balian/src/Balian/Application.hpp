#pragma once

#include "Core.hpp"

namespace Balian {

	class BALIAN_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}


