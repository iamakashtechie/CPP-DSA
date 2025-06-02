#include <iostream>
using namespace std;

int main() {
    int n = 0, multi = 1;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        multi *= i;
    }

    cout << "\nFactorial of " << n << " is " << multi;
    return 0;
}