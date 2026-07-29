#include <iostream>
#include <ctime>

using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void choseWinner(char player, char computer);

int main() {

    char player = getUserChoice();
    cout << "You chose: ";
    showChoice(player);
    cout << "\n";

    char computer = getComputerChoice();
    cout << "Computer chose: ";
    showChoice(computer);
    cout << "\n";

    choseWinner(player, computer);
}   

char getUserChoice() {

    char choice;

    do {
    cout << "----Rock Paper Scissors Game---- \n";
    cout << "Choose one of the following: \n";
    cout << "r for rock\n";
    cout << "p for paper\n";
    cout << "s for scissors\n";
    cin >> choice;

    cin.clear();
    fflush(stdin);
    } while(choice != 'r' && choice != 'p' && choice != 's');

    return choice;
}

char getComputerChoice() {
    srand(time(NULL));
    int num = (rand() % 3) + 1;

    switch(num) {
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }

    return 0;
}

void showChoice(char choice) {
  
    switch(choice) {
        case 'r': cout << "Rock\n"; break;
        case 'p': cout << "Paper\n"; break;
        case 's': cout << "Scissors\n"; break;

    }
}

void choseWinner(char player, char computer) {
        switch(player) {
            case 'r': if (computer == 'r') {
                            cout << "It's a tie!\n";
                        } else if (computer == 'p') {
                            cout << "You lost!\n";
                        } else {
                            cout << "You WON!\n";
                        };
                        break;

            case 'p': if (computer == 'r') {
                            cout << "You WON!\n";
                        } else if (computer == 'p') {
                            cout << "It's a tie!\n";
                        } else {
                            cout << "You lost!\n";
                        };
                        break;
                        
            case 's': if (computer == 'r') {
                            cout << "You lost!\n";
                        } else if (computer == 'p') {
                            cout << "You WON!\n";
                        } else {
                            cout << "It's a tie!\n";
                        }
        }
}
