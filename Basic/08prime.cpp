#include <iostream>
using namespace std;

// check if a number is prime or not
int main() {
    int num = 0;
    cout << "Enter the number: ";
    cin >> num;
    bool isPrime = true;

    // we noticed something, instead of going till (n-1), we can go till sqrt(n)
    // for (int i = 2; i <= (num - 1); i++) {
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    cout << num << " is " << (isPrime ? "Prime" : "non Prime");
    return 0;
}