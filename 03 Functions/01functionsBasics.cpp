#include <iostream>
using namespace std;

int printHello() {     // Function definition
    cout << "Hello World!" << endl;
    return 3;
    cout << "this line will never be executed because after a function returns something, it gets out from the call stack and anything that will be written after the return statement will not be executed" << endl;
}

// returnType functionName(arg 1, arg 2, arg 3, ... arguments or parameters) {
//     // code
//     return /* something */
// } 

int sum(double a, double b) {
    int sum = a + b;
    return sum;
}

int main() {
    int val = printHello();   // Function calling
    cout << "val = " << val << endl;    // val = 3
    cout << "Sum of 3 and 4 is: " << sum(3,4) << endl;
    return 0;
}