#include <iostream>

int main() {
    
    int rows;
    int columns;
    char symbol;

    std::cout << "Enter Rows: ";
    std::cin >> rows;

    std::cout << "Enter Columns: ";
    std::cin >> columns;

     std::cout << "Enter Symbol: ";
    std::cin >> symbol;

    for(int i = 0; i < columns; i++) {

        for(int j = 0; j < rows; j++) {
            std::cout << symbol << " ";
        }
        std::cout << '\n';
    }


    return 0;
}