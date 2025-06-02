#include <iostream>
using namespace std;

// *            1           1           1           1           1 1 1 1
// * *          2 2         1 2         2 1         2 3           2 2 2
// * * *        3 3 3       1 2 3       3 2 1       4 5 6           3 3
// * * * *      4 4 4 4     1 2 3 4     4 3 2 1     7 8 9 10          4

int main() {
    int n = 4;
    // for (int i = 0; i < n; i++){
    //     for (int j = 1; j <= (i+1); j++) {
    //         cout << "* ";
    //         // cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++) {
    //     for (int j = 1; j <= (i+1); j++) {
    //         cout << i+1 << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++) {
    //     int x = 1;
    //     for (int j = 1; j <= (i+1); j++) {
    //         cout << x << " ";
    //         x++;
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++) {
    //     for (int j = i+1; j > 0; j--) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // Floyd's Triangle Pattern
    // int y = 1;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j <= i; j++) {
    //         cout << y << " ";
    //         y++;
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " " << " ";
        }
        for (int k = 0; k < (n-i); k++) {
            cout << i+1 << " ";
        }
        cout << endl;
    }

    return 0;
}