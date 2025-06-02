#include <iostream>
using namespace std;

// *             *      i = 0
// * *         * *      i = 1
// * * *     * * *      i = 2
// * * * * * * * *      i = 3
// * * * * * * * *      i = 0
// * * *     * * *      i = 1
// * *         * *      i = 2
// *             *      i = 3

int main() {
    int n = 4;
    for (int i = 0; i <= (n-1); i++) {
        for (int j = 0; j < (i+1); j++) {
            cout << "*" << " ";
        }
        for (int k = 0; k < 2*(n-i-1); k++) {
            cout << " " << " ";
        }
        for (int l = 0; l < (i+1); l++) {
            cout << "*" << " ";
        }
        cout << endl;
    }
    for (int i = (n-1); i >= 0; i--) {
        for (int j = 0; j < (i+1); j++) {
            cout << "*" << " ";
        }
        for (int k = 0; k < 2*(n-i-1); k++) {
            cout << " " << " ";
        }
        for (int l = 0; l < (i+1); l++) {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}