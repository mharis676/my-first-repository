#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

int main() {

srand(static_cast<unsigned int>(time(NULL)));

string userChoice;
int computerNumber = rand() % 3 + 1;
string computerChoice;
string userName;

if (computerNumber == 1) {
    computerChoice = "rock";
} else if (computerNumber == 2) {
    computerChoice = "paper";
} else {
    computerChoice = "scissors";
}

std::cout << "Welcome to rock, paper, scissors! What is your name?" << endl;
getline(cin, userName);
std::cout << "Hello " << userName << "! What do you choose?" << endl;
getline (cin,userChoice);

for (int i=0;i<userChoice.length();i++){ 
    userChoice[i]=tolower(userChoice[i]);
}

while (userChoice != "rock" && userChoice != "paper" && userChoice != "scissors") {
    std::cout << "Sorry! Didn't get that. Please enter again." << endl;
    getline(cin, userChoice);
    for (int i=0;i<userChoice.length();i++){
        userChoice[i]=tolower(userChoice[i]);
    }
}


std::cout << "Press enter to continue..." << endl;
std::cin.ignore();

if(computerChoice == "rock" && userChoice == "rock") {
    std::cout << "It was a tie!" << endl;
} else if (computerChoice == "rock" && userChoice == "scissors") {
    std::cout << "The computer won! Better luck next time!" << endl;
} else if (computerChoice == "paper" && userChoice == "paper") {
    std::cout << "It was a tie!" << endl;
} else if (computerChoice == "paper" && userChoice == "rock") {
    std::cout << "The computer won! Better luck next time!" << endl;
} else if (computerChoice == "scissors" && userChoice == "scissors") {
    std::cout << "It was a tie!" << endl;
} else if (computerChoice == "scissors" && userChoice == "paper") {
    std::cout << "The computer won! Better luck next time!" << endl;
} else {
    std::cout << "Congrats! You won!" << endl;
}

return 0;
}
