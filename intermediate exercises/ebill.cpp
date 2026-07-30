// Electricity bill calculator

#include <iostream>

int calculateBill(int units);

int main() {
    int units;
    

    std::cout << "Enter amount of E-units used: ";
    std::cin >> units;

    calculateBill(units);

}

int calculateBill(int units) {

    /*
    from 0-100: 4.2rs per unit
    100-200: 6rs per unit
    200-400: 8rs per unit
    400 onwards: 13rs per unit
    */

    double price = 0;

    if (units > 400) {
        price += 100 * 4.2;
        units -= 100;

        price += 100 * 6;
        units -= 100;

        price += 200 * 8;
        units -= 200;

        price += units * 13;
        
        std::cout << "Your Bill is Rs. " << price;

    } else if (units > 200 && units <= 400) {
        price += 100 * 4.2;
        units -= 100;

        price += 100 * 6;
        units -= 100;

        price += units * 8;

        std::cout << "Your Bill is Rs. " << price;

    } else if (units > 100 && units <= 200) {
        price += 100 * 4.2;
        units -= 100;

        price += units * 6;
       
        std::cout << "Your Bill is Rs. " << price;

    } else if (units <= 100 && units >= 0) {
        price += units * 4.2;

        std::cout << "Your Bill is Rs. " << price;
    } else {
        std::cout << "Invalid input! enter positive units \n";
    }
}