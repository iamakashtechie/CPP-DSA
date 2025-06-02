#include <iostream>
using namespace std;

int main() {
    int age = 0;
    cout << "Enter your age: ";
    cin >> age;

    // if (age >= 18) {
    //     cout << "You can vote.\n";
    // } else if {
    //     cout << "You can't vote\n";
    // }

    // if (condition) {
    //     cout << "if\n";
    // } else if (condition) {
    //     cout << "else if\n";
    // } else {
    //     cout << "else\n";
    // }

    cout << (age >= 18 ? "You can vote.\n" : "You can't vote\n");

    return 0;
}