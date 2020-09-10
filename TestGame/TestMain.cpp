#include "Renderer/Renderer.h"
#include "Core/Core.h"

int main()
{
	GDMEngine::TestLibraries();

	GDMEngine::Logger::Get().SetLogFile("Log.txt");
	GDM_LOG(LogInfo, "Hello world from GameDev McGill");
	return 0;
}