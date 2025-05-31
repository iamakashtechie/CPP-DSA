#include <iostream>
using namespace std;
// it means use "std" from "namespace" (for now think of namespace as a file)
// if we don't use this line then we will have to use like this —
// std::cout << "Hello" << endl;

int main()
{
    int x = 0, y;
    std::cout << "Hi there, I'm Akash" << endl;
    cin >> x;
    cin >> y;
    cout << x + y << endl;
    return 0;
}