#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    do {
        
        cout << "Enter Guess between 1-100: ";
        cin >> guess;

        tries++;

        if ( guess < num) {
            cout << "YOU ARE BEHIND" << "\n";
        } else if ( guess > num ) {
            cout << "YOU ARE AHEAD" << "\n";;
        } else {
            cout << "CORRECT GUESS!!";
        }

    } while (guess != num);
    
    cout << "\n" << "You took " << tries << " tries";
    return 0;
}
