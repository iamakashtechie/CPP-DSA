#include <iostream>
using namespace std;

void changeX(int x) {
    x = 2*x;
    // only the value of x that is passed in the chanegeX function is modified
    cout << "within the changeX function, x = " << x << endl; // 10
}

int main() {
    int x = 5;
    changeX(x); // a copy of the value of x is passed in the changeX function
    // so the value of x in the main function is intact

    cout << "within the main function x = " << x << endl; // 5
    return 0;
}