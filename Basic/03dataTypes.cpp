#include <iostream>
using namespace std;

int main() {
    cout << sizeof(int) << endl;    // 4
    cout << sizeof(char) << endl;   // 1
    cout << sizeof(float) << endl;  // 4
    cout << sizeof(double) << endl; // 8
    cout << sizeof(bool) << endl;   // 1

    int a = 65;
    char b = 'B';
    float wrong = 3.14; // wrong - it's still "Double" by default
    float c = 3.14f;    // correct - now it's float
    double d = 100.0994;
    bool e = true; // true - 1 , false - 0

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    return 0;
}