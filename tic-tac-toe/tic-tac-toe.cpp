#include <iostream>
#include <ctime>
#include <limits>

using namespace std;

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main() {

    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'O';
    char computer = 'X';
    bool running = true;

    drawBoard(spaces);
    
    while(running) {
        playerMove(spaces, player);
        drawBoard(spaces);
        
         if(checkWinner(spaces, player, computer)) {
            running = false;
            break;
        } 
        if(checkTie(spaces)) {
            running = false;
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);
        
        if(checkWinner(spaces, player, computer)) {
            running = false;
            break;
        } 
        if(checkTie(spaces)) {
            running = false;
            break;
        }

    }
        cout << "\nThanks for playing!\n";

    return 0;
}

void drawBoard(char *spaces) {
    cout << "\n";
    cout << "     |     |     " << "\n";
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << "\n";
    cout << "_____|_____|_____" << "\n"; 
    cout << "     |     |     " << "\n";
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << "\n";
    cout << "_____|_____|_____" << "\n";
    cout << "     |     |     " << "\n";
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << "\n";
    cout << "     |     |     " << "\n";

}

void playerMove(char *spaces, char player) {
    int number;
    
    do{
        cout << "Enter the position to put your mark (1-9): ";
        cin >> number;

        if (cin.fail()) {
            cin.clear(); // remove fail state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard bad input
            cout << "Please enter a number!\n";
            continue;
        }

        number--;
        

        if(number >= 0 && number <= 8 && spaces[number] == ' ') {
            spaces[number] = player;
            break;
        }

        cout << "Invalid move\n";
   
    }while(true);

}

void computerMove(char *spaces, char computer) {
    int number;
    
    srand(time(0));

    while(true) {
        number = rand() % 9;

       if(spaces[number] == ' ') {
            spaces[number] = computer;
            break;
        }
    }
    cout << "\nComputer moves...\n";
}

bool checkWinner(char *spaces, char player, char computer) {

    if ((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[0] == spaces[2])) {
        spaces[0] == player ? cout << "YOU WIN!" : cout << "YOU LOST!";

    } else if ((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[3] == spaces[5])) {
        spaces[3] == player ? cout << "YOU WIN!" : cout << "YOU LOST!";

    } else if ((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[6] == spaces[8])) {
        spaces[6] == player ? cout << "YOU WIN!" : cout << "YOU LOST!";

    } else if ((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[0] == spaces[6])) {
        spaces[0] == player ? cout << "YOU WIN!" : cout << "YOU LOST!";

    } else if ((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[1] == spaces[7])) {
        spaces[1] == player ? cout << "YOU WIN!" : cout << "YOU LOST!";
    
    } else if ((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[2] == spaces[8])) {
        spaces[2] == player ? cout << "YOU WIN!" : cout << "YOU LOST!";
   
    } else if ((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[0] == spaces[8])) {
        spaces[0] == player ? cout << "YOU WIN!" : cout << "YOU LOST!";
    
    } else if ((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[2] == spaces[6])) {
        spaces[2] == player ? cout << "YOU WIN!" : cout << "YOU LOST!";
    } else {
        return false;
    }

    return true;
}

bool checkTie(char *spaces) {

    for(int i = 0; i < 9; i++) {
        if(spaces[i] == ' ') {
            return false;
        } 
    }
        cout << "IT'S A TIE!\n";
        return true;
}