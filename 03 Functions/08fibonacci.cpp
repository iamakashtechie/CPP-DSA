#include <iostream>
using namespace std;

// 0 1 1 2 3 5 8 13 21 34 ...
void fibb (int n) {
    int x = 0, y = 1;
    for (int i = 0; i < n; i++)
    {
        cout << x << " ";
        int next = x + y;
        x = y;
        y = next;
    }
    
}

int main() {
    int n = 20;
    fibb(n);
    return 0;
}