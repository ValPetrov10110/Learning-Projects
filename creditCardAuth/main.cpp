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

bool luhnAlgo(std::string cardNum);

int main(){

    cout << "-------------- Credit Card Authenticator --------------\n";
    cout << "                        (No -)\n";
    cout << '\n';
    std::string cardNum;
    cout << "Card Number > ";
    cin >> cardNum;

    luhnAlgo(cardNum);

    return 0;
}

bool luhnAlgo(std::string cardNum){
    int cardLength = cardNum.length();
    
    for(int i = cardLength - 1; i >= 0; i--){
        cout << cardNum[i];
    }

    return false;
}