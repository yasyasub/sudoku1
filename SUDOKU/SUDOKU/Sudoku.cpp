#include "Sudoku.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	SUDOKU::Sudoku Form;
	Application::Run(%Form);
}
