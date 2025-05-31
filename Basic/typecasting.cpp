#include <iostream>
using namespace std;

// Type Casting — converting data from one type to another
int main()
{
    // Conversion                               |   Casting
    // -----------------------------------------|-----------------------------------------
    // implicit                                 |   explicit
    // automatically done by compiler           |   manually done by programmer
    // generally small --> big (data type)      |   big --> small (data type)

    cout << "Conversion example" << endl;
    char grade = 'A';
    int value = grade;
    cout << value << endl; // 65

    cout << "Casting example" << endl;
    double price = 100.9999;
    char newPrice = (char)price;
    cout << newPrice << endl; // 100
    return 0;
}