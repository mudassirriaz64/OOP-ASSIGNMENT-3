#include "MainMenuForm.h"
#include <Windows.h>
#include <cstdlib> // Include the <cstdlib> header for the exit function

using namespace System;
using namespace System::Windows::Forms;

int main()
{
    String^ connectionString = "Server=DESKTOP-MN4CFP4;Database=TimeTableDB;Integrated Security=True;";
    Application::EnableVisualStyles(); // Enable visual styles before running the application
    Application::SetCompatibleTextRenderingDefault(false); // Set compatibility with default text rendering

    Application::Run(gcnew OOPASSIGNMENT2::MainMenuForm()); // Qualify the MainMenuForm with its namespace

    return EXIT_SUCCESS; // Use EXIT_SUCCESS from cstdlib for portability
}
