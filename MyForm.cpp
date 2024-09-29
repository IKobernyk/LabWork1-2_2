#include "MyForm.h"
#include"MyForm1.h"
#include <windows.h> 
using namespace LabWork122; // Project name
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm1);
	return 0;
};
	
