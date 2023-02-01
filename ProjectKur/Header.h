#pragma once
#include <iostream>
#include <windows.h>
#include "Form3.h"


using namespace std;
using namespace System::Windows::Forms;
HANDLE HThread1;
DWORD idThread1;
int count1 = 0;


DWORD WINAPI Thread1(LPVOID lpParam)
{
	
    return 0;
}

void createThread1() {
    HThread1 = CreateThread(NULL, 0, Thread1, NULL, 0, &idThread1);
}
