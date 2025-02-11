#include <iostream>
#include <windows.h> // This is what gives me accessx to the Windows API Function

using std::cout;
using std::cin;

int main(){

    MessageBox(NULL, TEXT("Hello, Windows API!"), TEXT("Message Box"), MB_OK);
    
    return 0;
}