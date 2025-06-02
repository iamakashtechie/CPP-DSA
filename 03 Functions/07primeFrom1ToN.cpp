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

void primeUptoN(int n) {
    for(int i = 1; i <= n; i++) {
        if(isPrime(i)) (cout << i << " ");
    }
}

int main() {
    int n = 100;
    primeUptoN(n);
    return 0;
}