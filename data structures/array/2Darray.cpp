#include <iostream>

using namespace std;

int main() {
    string array[][3] = {{"hey", "hey2", "hey3"}, 
                        {"hello", "hello2", "hello3"}, 
                        {"hoy", "hoy1", "hoy2"}};

    int rows = sizeof(array)/sizeof(array[0]);
    int columns = sizeof(array[0])/sizeof(array[0][0]);
    
    for(int i= 0; i< rows; i++) {
        for(int j = 0; j< columns; j++) {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
}