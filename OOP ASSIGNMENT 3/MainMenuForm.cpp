#include "MainMenuForm.h"
#include <Windows.h>
#include <cstdlib>

using namespace System;
using namespace System::Windows::Forms;

int main()
{
    String^ connectionString = "Server=DESKTOP-MN4CFP4;Database=TimeTableDB;Integrated Security=True;";
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false); 

    Application::Run(gcnew OOPASSIGNMENT2::MainMenuForm());

    return EXIT_SUCCESS;
}
