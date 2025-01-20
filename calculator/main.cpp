#include <iostream>

using std::cin;
using std::cout;

template <typename T, typename U>
auto add(T a, U b){
    return a + b;
}

template <typename T, typename U>
auto subtract(T a, U b){
    return a - b;
}

template <typename T, typename U>
auto multiply(T a, U b ){
    return a * b;
}

template <typename T, typename U>
auto divide(T a, U b){
    return a / b;
}

int main(){
    double num1;
    cout << "Number 1(Double) > ";
    cin >> num1;
    int num2;
    cout << "Number 2(Int) > ";
    cin >> num2;

    int option;
    cout << "Pick An Operation\n";
    cout << "-----------------\n";
    cout << "1.) Addition\n";
    cout << "2.) Subtraction\n";
    cout << "3.) Multiplication\n";
    cout << "4.) Division\n";
    cout << "> ";
    cin >> option;

    switch(option){
        case 1:
            cout << add(num1, num2) << '\n';
            break;

        case 2:
            cout << subtract(num1, num2) << '\n';
            break;

        case 3:
            cout << multiply(num1, num2) << '\n';
            break;

        case 4:
            cout << divide(num1, num2) << '\n';
            break;
        
        default:
            cout << "INVALID\n";
            break;
    }

    return 0;
}