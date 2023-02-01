#include "Form1.h"
#include "Form2.h"
#include <Windows.h>
#include <thread>

using namespace ProjectKur;
using namespace System::Threading;


 System::Void Go() {
    
     Application::Run(gcnew Form2());
     Form2::ActiveForm;
     System::Windows::Forms::FormWindowState::Maximized;
 }
 

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Form1^ first = gcnew Form1();
    DateTime end = DateTime::Now + TimeSpan::FromSeconds(5);
    first->Show();

    Thread^ myThread;
   myThread = gcnew Thread(gcnew ThreadStart(Go));
    while (end > DateTime::Now) {
        Application::DoEvents();
    }
    first->Close();
    myThread->Start();
    return 0;
}
