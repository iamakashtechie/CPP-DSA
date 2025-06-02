#include <iostream>
using namespace std;

int main() {
    int a = 11, b = 5;

    // Arithmetic Operators --- { +, -, *, /, % }
    cout << "Sum = " << (a + b) << endl;        // 16
    cout << "Difference = " << (a - b) << endl; // 6
    cout << "Product = " << (a * b) << endl;    // 55
    cout << "Division = " << (a / b) << endl;   // 2
    cout << "Modulo = " << (a % b) << endl;     // 1

    cout << (5 / 2) << endl; // 2
    int ans = (5 / (double)2); // either of the operands must have to be of different type
    cout << ans << endl;             // 2
    cout << (5 / (double)2) << endl; // 2.5

    // Relational Operators --- { <, >, <=, >=, ==, != }

    // Logical Operators --- { OR - ||, AND - &&, NOT - ! }

    // Unary Operators --- { increment ++, decrement -- }

    // i++ ---> print - then update (post-increment)
    // ++i ---> update - then print (pre-increment)

    int i = 5;
    cout << i << endl; // 5
    cout << i++ << endl; // first output 5 and then increment
    cout << i << endl; // 6
    cout << ++i << endl; // first increment and then output 7
    
    int j = 5;
    cout << j << endl; // 5
    cout << j-- << endl; // first output 5 and then decrement
    cout << j << endl; // 6
    cout << --j << endl; // first decrement and then output 7

    return 0;
}