#include <iostream>
using namespace std;

int main() {
    int n = 0, k = 1, sum = 0;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter k: ";
    cin >> k;

    for (int i = 1; i <= n; i++) {
        if (i % k == 0) {
            sum += i;
        }
    }
    cout << "\nSum to " << n << " divisible by " << k << " is " << sum;
    return 0;
}