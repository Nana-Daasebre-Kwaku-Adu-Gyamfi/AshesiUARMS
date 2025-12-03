#include "LoginForm.h"
#include "adminDashboard.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace AshesiUARMS;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Create and show login form
    LoginForm^ frmlogin = gcnew LoginForm();
    frmlogin->ShowDialog();

    // Get the authenticated user
    UserAccount^ user = frmlogin->userAccount;

    // Check if login was successful
    if (user != nullptr && !String::IsNullOrEmpty(user->userID)) {
        // Determine which dashboard to open based on role
        String^ userRole = user->role->ToLower()->Trim();

        if (userRole == "admin") {
            // Open Admin Dashboard
            adminDashboard^ adminDash = gcnew adminDashboard();
            Application::Run(adminDash);
        }
        else if (userRole == "faculty") {
            // Open Faculty Dashboard (uncomment when facultyDashboard is created)
            // facultyDashboard^ facultyDash = gcnew facultyDashboard();
            // Application::Run(facultyDash);

            MessageBox::Show("Faculty Dashboard not yet implemented.",
                "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
        else if (userRole == "student") {
            // Open Student Dashboard (uncomment when studentDashboard is created)
            // studentDashboard^ studentDash = gcnew studentDashboard();
            // Application::Run(studentDash);
            adminDashboard^ adminDash = gcnew adminDashboard();
            Application::Run(adminDash);

            MessageBox::Show("Student Dashboard not yet implemented.",
                "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
        else {
            MessageBox::Show("Unknown user role: " + user->role,
                "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    else {
        MessageBox::Show("Authentication Canceled or Failed",
            "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }

    return 0;
}