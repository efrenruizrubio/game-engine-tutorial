#pragma once

#ifdef GE_PLATFORM_WINDOWS

extern GameEngine::Application* GameEngine::CreateApplication();

using namespace std;

int main(int argc, char** argv)
{
	auto app = GameEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif