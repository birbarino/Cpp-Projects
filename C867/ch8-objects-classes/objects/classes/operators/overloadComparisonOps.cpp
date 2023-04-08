#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

class RockPaperScissors {
    public:
        RockPaperScissors(string name);
        void Choose(int choice);
        void PrintChoices();
        void SetName(string name) { this->name = name; }
        int GetChoiceNum() { return numChoice; }
        string GetChoiceStr() { return strChoice; }
        string GetName() { return name; }
        void Winner();
        bool operator>(RockPaperScissors rhs);
        bool operator<(RockPaperScissors rhs);
        bool operator==(RockPaperScissors rhs);



    private:
        int numChoice;
        string name;
        string strChoice;
        string rock = "Rock";
        string paper = "Paper";
        string scissors = "Scissors";
};

RockPaperScissors::RockPaperScissors(string name) {
    SetName(name);
}

void RockPaperScissors::Choose(int choice){
    numChoice = choice;

    if (choice == 1) {
        strChoice = rock;

    } else if (choice == 2) {
        strChoice = paper;

    } else if (choice == 3) {
        strChoice = scissors;

    } else {
        strChoice = "Invalid";
    }
}

void RockPaperScissors::PrintChoices() {
    cout << "1 -- Rock\n";
    cout << "2 -- Paper\n";
    cout << "3 -- Scissors\n\n";
}

void RockPaperScissors::Winner() {
    cout << name << " Wins!!\n\n";
}

bool RockPaperScissors::operator>(RockPaperScissors rhs) {
    if (numChoice > rhs.numChoice)    
        return true;
    else {
        return false;
    }
}

bool RockPaperScissors::operator<(RockPaperScissors rhs) {
    if (numChoice < rhs.numChoice)    
        return true;
    else {
        return false;
    }
}

bool RockPaperScissors::operator==(RockPaperScissors rhs) {
    if (numChoice == rhs.numChoice)    
        return true;
    else {
        return false;
    }
}

int main() {
    int choice;
    char cont;
    RockPaperScissors player1("Player 1"), player2("Bot");

    // Start game
    cout << "\nWelcome to Rock Paper Scissors!\n";

    while (tolower(cont) != 'n') {
        // Get player 1's choice
        player1.PrintChoices();
        cout << "What is " << player1.GetName() << "'s choice? ";
        cin >> choice;

        while (choice > 3) {
            cout << "Invalid choice, please choose again. ";
            cin >> choice;
        }

        player1.Choose(choice);

        // Generate bot's choice
        cout << "Choosing for " << player2.GetName() << "... \n";
        srand(time(NULL));  // Initialize random seed
        player2.Choose(rand() % 3 + 1); // Range of 1-3

        // Print results
        cout << player1.GetChoiceStr() << " vs. " << player2.GetChoiceStr() << "...\n";
        
        // Determine winner
        if (player1 > player2) {
            player1.Winner();
        } else if (player1 < player2) {
            player2.Winner();
        } else {
            cout << "Tie!\n\n";
            continue;
        }

        cout << "Keep playing? (y/n) ";
        cin >> cont;
    }
    
    return 0;
}