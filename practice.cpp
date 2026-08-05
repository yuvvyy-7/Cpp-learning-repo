#include <iostream>
using namespace std;

// template <typename T, typename U>


/*auto max(T x, U y) {
    return (x>y) ? x : y;
}*/

enum Days {sunday, monday, tuesday=420, thursday, friday, saturday};

struct Student {
   
    string name;
    int age;
    bool enrolled = true;
};

int main () {
// cout << max(1, 2.2)

Days day = monday;

switch(day) {
    case sunday: cout << "It'Sunday\n";
    break;
    case 1: cout << "It's Monday\n";
    break;
    case 420: cout << "It's Tuesday\n";
    break;
};

Student student1;
student1.age = 19;
student1.name = "Atharva";

Student student2;
student2.age = 20;
student2.name = "Rocky";

cout << student1.age;
cout << '\n';
cout << student1.name;
cout << '\n';

cout << student2.age;
cout << '\n';
cout << student2.name;


}