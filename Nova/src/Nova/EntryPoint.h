#pragma once

#ifdef NV_PLATFORM_WINDOWS

extern Nova::Application* Nova::CreateApplication();

int main(int argc, char** argv)
{
	Nova::Log::Init();
	NV_CORE_WARN("Initialized Log!");
	int a = 5;
	NV_INFO("Hello! Var={0}", a);

	auto app = Nova::CreateApplication();
	app->Run();
	delete app;
}

#endif