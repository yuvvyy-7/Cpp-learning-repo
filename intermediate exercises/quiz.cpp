#include <iostream>
using namespace std;

int main() {

    string questions[] = {{"1. What color is the sky?"},
                          {"2. Who invented Light Bulb?"}, 
                          {"3. What is brain of the computer"}, 
                          {"4. What is capital of India?"}};

    string answers[][4] = {{"A. Blue", "B. Red", "C. Green", "D. Sky Blue"},
                           {"A. Edison", "B. Tesla", "C. Newton", "D. Einstein"},
                           {"A. Mouse", "B. CPU", "C. Keyboard", "D. Mousepad"},
                           {"A. New Delhi", "B. Kolkata", "C. Chennai", "D. Mumbai"}};

    char answerKey[] = {'D', 'A', 'B', 'A'};

    cout << "************************************" << "\n";
    cout << "*            QUIZ GAME             *" << "\n";
    cout << "************************************" << "\n\n";

    char guess;
    int score = 0;

    for(int i = 0; i < sizeof(questions)/sizeof(questions[0]); i++) {
        
        cout << "************************************" << "\n";
        cout << questions[i] << "\n";
        cout << "************************************" << "\n";

        for(int j = 0; j < sizeof(answers[i])/sizeof(answers[i][0]); j++) {
            cout << answers[i][j] << "\n";
        }

        cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]) {
            cout << "CORRECT!" << "\n";
            score++;
        } else {
            cout << "WRONG!" << "\n";
            cout << "Answer: " << answerKey[i] << "\n";
        }
    }

    cout << "Correct Answers: " << score << "\n";
    cout << "Score: " << (score/(double)(sizeof(questions)/sizeof(questions[0])))*100 << "%";

}