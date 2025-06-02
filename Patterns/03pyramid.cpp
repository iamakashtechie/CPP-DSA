#include <iostream>
using namespace std;

// n = 4

// i = 0         1                    *       
// i = 1       1 2 1                * * *     
// i = 2     1 2 3 2 1            * * * * *   
// i = 3   1 2 3 4 3 2 1        * * * * * * *

int main() {
    int n = 4;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n-1-i); j++) {
            cout << " " << " ";
        }
        for (int j = 0; j < (i + 1); j++) { // print increasing numbers
            cout << j+1 << " ";
        }
        // for (int k = 0; k <= (i - 1); k++) { // print decreasing numbers
        //     cout << i-k << " ";
        // } 
        // Alternate way
        for (int k = i; k > 0; k--) { // print decreasing numbers
            cout << k << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n-1-i); j++) {
            cout << " " << " ";
        }
        for (int j = 0; j < (2*i + 1); j++) { // 2(n-1)+1 = 2n-1 numbers in each row ===> where n is i+1
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}