/**
 * @file variables_demo.cpp
 * @brief Demonstrates different types of variables in C++
 */

#include <iostream>
using namespace std;

// Global variable - accessible throughout the program
int globalVar = 100;

// Static global variable - only accessible in this file
static int staticGlobalVar = 200;

// Function to demonstrate local variables
void demonstrateLocalVars()
{
    // Local variable - only accessible within this function
    int localVar = 10;
    cout << "Local variable: " << localVar << endl;

    // Static local variable - retains value between function calls
    static int staticLocalVar = 0;
    staticLocalVar++;
    cout << "Static local variable: " << staticLocalVar << endl;
}

// Function to demonstrate variable scope
void demonstrateScope()
{
    int x = 5; // Local variable x

    {
        int x = 10; // New scope, new variable x
        cout << "Inner x: " << x << endl;
    }

    cout << "Outer x: " << x << endl;
}

// Function to demonstrate const variables
void demonstrateConst()
{
    // Constant variable - cannot be modified
    const int MAX_VALUE = 100;
    cout << "Constant value: " << MAX_VALUE << endl;

    // Const pointer to non-const data
    int value = 50;
    const int *ptr1 = &value;
    cout << "Value through const pointer: " << *ptr1 << endl;

    // Non-const pointer to const data
    int const *ptr2 = &value;
    cout << "Value through pointer to const: " << *ptr2 << endl;
}

// Function to demonstrate reference variables
void demonstrateReferences()
{
    int original = 42;
    int &ref = original; // Reference to original

    cout << "Original value: " << original << endl;
    cout << "Reference value: " << ref << endl;

    ref = 100; // Modifying through reference
    cout << "After modification - Original: " << original << endl;
}

// Function to demonstrate auto keyword
void demonstrateAuto()
{
    auto number = 42;    // int
    auto decimal = 3.14; // double
    auto letter = 'A';   // char
    auto text = "Hello"; // const char*

    cout << "Auto int: " << number << endl;
    cout << "Auto double: " << decimal << endl;
    cout << "Auto char: " << letter << endl;
    cout << "Auto string: " << text << endl;
}

int main()
{
    cout << "=== C++ Variables Demonstration ===\n"
         << endl;

    // 1. Global and Static Variables
    cout << "1. Global and Static Variables:" << endl;
    cout << "Global variable: " << globalVar << endl;
    cout << "Static global variable: " << staticGlobalVar << endl;
    cout << endl;

    // 2. Local Variables
    cout << "2. Local Variables:" << endl;
    demonstrateLocalVars();
    demonstrateLocalVars(); // Call twice to show static local behavior
    cout << endl;

    // 3. Variable Scope
    cout << "3. Variable Scope:" << endl;
    demonstrateScope();
    cout << endl;

    // 4. Const Variables
    cout << "4. Const Variables:" << endl;
    demonstrateConst();
    cout << endl;

    // 5. Reference Variables
    cout << "5. Reference Variables:" << endl;
    demonstrateReferences();
    cout << endl;

    // 6. Auto Variables
    cout << "6. Auto Variables:" << endl;
    demonstrateAuto();
    cout << endl;

    // Memory addresses
    cout << "Memory Addresses:" << endl;
    cout << "Global variable address: " << &globalVar << endl;
    cout << "Static global variable address: " << &staticGlobalVar << endl;

    return 0;
}