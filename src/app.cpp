// Gets the Foreground window's class name.

#include <windows.h>
#include <iostream>
#include <unistd.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){
    HWND hActiveWindow = {};
    HWND hPrevActiveWindow = {};
    CHAR ClassName[256];
    
    std::cout << "Welcome! To exit press CTRL+C " <<std::endl;

    while(true){
        hActiveWindow = GetForegroundWindow();
        if (hActiveWindow !=  hPrevActiveWindow && hActiveWindow != NULL){
            GetClassNameA(hActiveWindow, ClassName, sizeof(ClassName));
            std::cout << "Active Window Handle: " << hActiveWindow  << " Class: " << ClassName << std::endl;
            hPrevActiveWindow = hActiveWindow;
        };
    }
    return 0;
}