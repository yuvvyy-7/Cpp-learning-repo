#include <iostream>
#include <cmath>


int main() {
    char unit;
    double temp;
    

    std::cout << "Enter the unit u want to convert into: (C/F) \n";
    std::cin >> unit;


    if (unit == 'F' || unit == 'f'){
        std::cout << "Enter temperature in clesius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << temp;
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter temperature in fahreheit: ";
        std::cin >> temp;

        temp = (temp - 32.0)/1.8;
        std::cout << temp;
    }
    else{
         std::cout << "not a valid input!!";
    }
   
    return 0;
}