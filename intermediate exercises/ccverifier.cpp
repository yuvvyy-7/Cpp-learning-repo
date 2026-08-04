#include <iostream>

using namespace std;

int main() {
    long long ccnumber;
    cout << "Enter the credit card number: ";
    cin >> ccnumber;

    int arr1[16];
    int digit;

    for(int i = 15; i >= 0; i--) {
        arr1[i] = ccnumber % 10;
        ccnumber /= 10;
    }

    int arr2[8];

    int j = 0;
    for (int i = 14; i >= 0; i -= 2) {
        arr2[j++] = arr1[i] * 2;
    }

    int sum1 = 0;
    
    for(int digit : arr2) {
        
        while(digit) {
            sum1 += digit % 10;
            digit /= 10;
        }
    }


    int sum2 = 0;

    for(int i = 15; i >= 0; i -= 2) {
        sum2 += arr1[i];
    }

  

    int sum3 = sum1 + sum2;

    if(sum3 % 10 == 0) {
        cout << "Your CC number is Valid.";
    } else {
        cout << "Your CC number is not Valid.";
    }


}