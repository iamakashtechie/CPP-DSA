#include <iostream>
using namespace std;

void fun2() {
    cout << "function 2\n";
}

void fun1() {
    fun2();
    cout << "function 1\n";
}

int main() {
    fun1();
    return 0;
}

// 🧠 Notes:
//  - The top of the stack is the currently running function.
//  - As new functions are called, they’re pushed onto the stack.
//  - When a function finishes, it’s popped off and control returns to the function below it.

// Program Start
// ┌──────────────────────────┐
// │        main()            │  ← main() called
// └──────────────────────────┘

// Call fun1()
// ┌──────────────────────────┐
// │        fun1()            │  ← fun1() pushed on top
// ├──────────────────────────┤
// │        main()            │
// └──────────────────────────┘

// Call fun2()
// ┌──────────────────────────┐
// │        fun2()            │  ← fun2() pushed on top
// ├──────────────────────────┤
// │        fun1()            │
// ├──────────────────────────┤
// │        main()            │
// └──────────────────────────┘

// Return from fun2()
// ┌──────────────────────────┐
// │        fun1()            │  ← fun2() popped
// ├──────────────────────────┤
// │        main()            │
// └──────────────────────────┘

// Return from fun1()
// ┌──────────────────────────┐
// │        main()            │  ← fun1() popped
// └──────────────────────────┘

// Return from main()
// (Program ends — stack is empty)
