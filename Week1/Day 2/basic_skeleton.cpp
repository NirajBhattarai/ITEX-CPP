// Single line comment example
/*
   Multi-line comment example
   This is a basic C++ program skeleton
*/

// Basic include
#include <iostream>

// Using namespace
using namespace std;

// Function declaration (prototype)
void sayHello();

// Function with direct definition
void printNumber(int num)
{
    cout << "Number is: " << num << endl;
}

// Main function
int main()
{
    // Variable declaration
    int number = 42;

    // Function calls
    sayHello();
    printNumber(number);

    return 0;
}

// Function definition
void sayHello()
{
    cout << "Hello, World!" << endl;
}