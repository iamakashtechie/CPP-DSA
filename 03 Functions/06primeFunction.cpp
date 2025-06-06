#include <iostream>
using namespace std;

bool isPrime(int n) {
    for(int i = 2; i*i <= n; i++) {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << (isPrime(13) ? "it is prime" : "it is not prime");
    return 0;
}