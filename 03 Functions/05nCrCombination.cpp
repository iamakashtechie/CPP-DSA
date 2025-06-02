#include <iostream>
using namespace std;

int fact(int x) {
    int multi = 1;
    for(int i = 1; i <= x; i++) {
        multi *= i;
    }
    return multi;
}

int nCr(int n, int r) {
    return (fact(n) / (fact(r) * fact(n-r))); 
}

int main() {
    int n = 5, r = 2;
    cout << n << "C" << r << " = " << nCr(n,r) << endl;
    return 0;
}