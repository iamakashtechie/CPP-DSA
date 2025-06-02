#include <iostream>
using namespace std;

// 1 2 3 4      * * * *     A B C D     1 2 3 4
// 1 2 3 4      * * * *     A B C D     5 6 7 8
// 1 2 3 4      * * * *     A B C D     9 10 11 12
// 1 2 3 4      * * * *     A B C D     13 14 15 16

// Hint: Outer loop --> Represents line
//       Inner loop --> Represents work in that line

int main() {
    int n = 4;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << j+1 << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        char ch = 'A';
        for (int j = 0; j < n; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    int num = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}