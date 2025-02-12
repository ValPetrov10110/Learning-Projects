#include <iostream>
#include <windows.h> // This is what gives me access to the Windows API Function

using std::cout;
using std::cin;

/*
       NOTES
    -------------
    - Application/Main Window is the window we are all familiar with (frame w/ title bar, min/max buttons, etc.)
*/

int main(){

    MessageBox(NULL, TEXT("Greetings Human"), TEXT("Message Box"), MB_OK);
    
    return 0;
}