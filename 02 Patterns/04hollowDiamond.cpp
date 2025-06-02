#include <iostream>
using namespace std;

//  i = 0        *  
//  i = 1      *   * 
//  i = 2    *       *
//  i = 3  *           *
//  i = 0    *       *
//  i = 1      *   * 
//  i = 2        *  

int main() {
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n-1-i); j++)
        {
            cout << " " << " ";
        }
        cout << "*" << " ";
        for (int k = 0; k < (2*i - 1); k++)
        {
            cout << " " << " ";
        }
        if (i != 0) {
            cout << "*" << " ";
        }

        cout << endl;
    }

    for (int a = 0; a < (n-1); a++)
    {
        for (int b = 0; b < (a+1); b++)
        {
            cout << " " << " ";
        }
        cout << "*" << " ";
        for (int c = 0; c < 2*(n - a) - 5; c++) // 2*(n-2-a) - 1 = 2*(n - a) - 5
        {
            cout << " " << " ";
        }
        if (a != (n-2)) {
            cout << "*" << " ";
        }

        cout << endl;
    }
    
    
    return 0;
}