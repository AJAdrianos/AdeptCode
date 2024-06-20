#pragma once

#ifdef AC_PLATFORM_WINDOWS

extern AdeptCode::Application* AdeptCode::CreateApplication();

int main(int argc, char** argv)
{
	auto app = AdeptCode::CreateApplication();
	app->Run();
	delete app;
}
#endif