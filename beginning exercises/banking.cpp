#include <iostream>
#include <iomanip>

using namespace std;

void showBalance(double balance);
double deposit(double balance);
double withdraw(double balance);

int main() {
    int choice;
    double balance = 0;

    

    do {

        cout << "***************************" << "\n";
        cout << "WELCOME TO BANK" << "\n";
        cout << "Choose one of these options" << "\n";
        cout << "1. Show Balance" << "\n";
        cout << "2. Deposit" << "\n";
        cout << "3. Withdraw" << "\n";
        cout << "4. Exit" << "\n";
        cout << "***************************" << "\n";
        cin >> choice;

        cin.clear();
        fflush(stdin);

        switch (choice)
    {
        case 1: showBalance(balance);
                break;
        case 2: balance += deposit(balance);
                showBalance(balance);
                break;
        case 3: balance -= withdraw(balance);
                            showBalance(balance);
                break;
        case 4: cout << "Thanks for visiting!\n";

    default: "Invalid choice\n";
        
    }
    } while(choice != 4);

    return 0;
    
}

void showBalance(double balance) {
    cout << "Your bank balance: $" << setprecision(2) << fixed << balance << "\n";
    return;
}

double deposit(double balance) {
    double amount = 0;
    cout << "Enter the amount you want to deposit: ";
    cin >> amount;

    if (amount > 0) {
        return amount;
    } else {
        cout << "That is not a valid amount." << "\n";
    };
    
}

double withdraw(double balance) {
    
    double amount = 0;
    cout << "Enter the amount you want to withdraw: ";
    cin >> amount;

    if (amount > balance) {
        cout << "You dont have enough balance. \n";
        return 0;
    } else if (amount < 0) {
        cout << "Invalid amount. \n";
        return 0;
    } else {
        return amount;
    }
    
    return 0;
    
}