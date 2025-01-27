#include <iostream>
#include <limits>

using std::cout;
using std::cin;

class Human{
    public:
        std::string name;
        int age;


};

void failCheck(char *response);
void journeyStart(Human character);

int main(){
    char response;
    char *pResponse = &response;
    cout << '\n';
    cout << "------------ Character Journeys V1.0 ------------\n";
    cout << "Would You Like To Play (Y/N): ";
    cin >> response;

    // This statement checks for an input value that is not a char
    if(cin.fail()){
        failCheck(pResponse);
    }

    if(toupper(response) == 'Y'){
        Human character;
        system("cls");
        journeyStart(character);
    }
    else{
        cout << "Thank You For Visiting!\n";
    }
    

    return 0;
}

// This function checks if the user input a value that is not a char and sets it to 'N' 
void failCheck(char *response){
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    *response = 'N';
}

// This function activates if the user inputs 'Y' into the prompt
void journeyStart(Human character){
    char response;
    char *pResponse = &response;
    cout << "Greetings, brave adventurer!\n";
    cout << '\n';
    cout << "You stand at the precipice of a grand journey. The land is rife with danger, mystery, and opportunity.\n";
    cout << "The choices you make will shape your destiny - will you emerge as a hero og legend or fall to the perils of the unknown?\n";
    cout << '\n';
    cout << "Before we begin, may I ask your name?\n";
    cout << '\n';
    cin.ignore();
    std::getline(cin, character.name);
    cout << '\n';
    cout << "Ah, " << character.name << ", a fine name indeed! Your journey begins in the bustling village of Eldenbrook,\n";
    cout << "where whispers of shadowy treats and golden opportunities fill the air.\n"; 
    cout << '\n';
    cout << "Prepare yourself, for the road ahead is long, and your courage will be tested.\n";
    cout << '\n';
    cout << "Are you ready to embark on this adventure? (Y/N)\n";
    cout << "> ";
    cin >> response;

    if(cin.fail()){
        failCheck(pResponse);
    }

    if(toupper(response) == 'Y'){
        cout << "COMING SOON\n";
    }
    // Returns back to the main menu where it will prompt you to play again if you wish
    else{
        cin.ignore();
        system("cls");
        main();
    }

}