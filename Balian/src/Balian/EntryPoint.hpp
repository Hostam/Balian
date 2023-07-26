#pragma once

#ifdef BL_PLATFORM_WINDOWS

extern Balian::Application* Balian::CreateApplication();

int main(int argc, char** argv) {
	auto app = Balian::CreateApplication();
	app->Run();
	delete app;
}

#endif