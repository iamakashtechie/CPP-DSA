#include <iostream>
using namespace std;

int main() {
    cout << "while ---";
    int w = 0;                      // initialization
    while (w < 5) {                 // condition
        cout << w;
        w++;                        // updation
    }

    cout << "\nfor ---";
    for (int f = 0; f < 5; f++) {   // initislization; condition; updation
        cout << f;
    }

    cout << "\ndo while ---";
    int d = 0;                      // initialization
    do {
        cout << d;
        d++;                        // updation
    } while (d < 5);                // condition

    return 0;
}