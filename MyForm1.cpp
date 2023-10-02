#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project3::MyForm1 form;
	Application::Run(% form);

	return 0;
}

