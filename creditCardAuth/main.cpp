#include <cctype>
#include <iostream>
#include <string>
/* 
    I will be using the Luhn Algorithm for this project
   
    1.) Starting from the rightmost digit, double the value of every second digit and add them together
        (If doubling of a number results in a two digit i.e greater than 9, split them and treat them as individual numbers to add)
        Ex.) 79927398713 -> 9 + 2 + 3 + 8 + 1 -> 18 + 4 + 6 + 16 + 2 -> (1 + 8) + 4 + 6 + (1 + 6) + 2 -> 28
    
    2.) After you have added the numbers together from step 1, add the numbers leftover together and add to the final answer
        Ex.) 7 + 9 + 7 + 9 + 7 + 3 -> 42 -> 42 + 28 -> 70

    3.) If you can mod 10 the sum of step 2, then the number is valid according to the Luhn formula
*/

using std::cout;
using std::cin;

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main(){


    return 0;
}

int getDigits(const int number){

    return 0;
}

int sumOdDigits(const std::string cardNumber){

    return 0;
}

int sumEvenDigits(const std::string cardNumber){

    return 0;
}