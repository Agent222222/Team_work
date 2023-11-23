#include "CarForm.h"
#include <locale.h>

using namespace Carwash;
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	setlocale(LC_ALL, ".1251");
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Application::Run(gcnew CarForm());
}
