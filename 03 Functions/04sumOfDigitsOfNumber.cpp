#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    // n = 123
    
    // do {
    //     sum += n%10; // 0  3  3+2  
    //     n /= 10; // 12  1
    // } while (n%10 > 0);

    while (n > 0) {
        sum += n%10;
        n /= 10;
    }
    
    return sum;
}

int main() {
    int n = 123;
    cout << "Sum of digits of " << n << " is " << sumOfDigits(n) << endl;
    return 0;
}