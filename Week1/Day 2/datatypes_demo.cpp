/**
 * @file datatypes_demo.cpp
 * @brief Demonstrates various C++ data types, variables, and I/O operations
 *
 * This program serves as a comprehensive example of:
 * 1. Different data types in C++
 * 2. Variable declarations and initialization
 * 3. User input/output operations
 * 4. Type conversions
 * 5. Basic arithmetic operations
 */

#include <iostream>
using namespace std;

// Function declarations
void demonstrateIntegerTypes();
void demonstrateFloatingPointTypes();
void demonstrateCharacterTypes();
void demonstrateBooleanTypes();
void demonstrateStringTypes();
void demonstrateUserInput();
void demonstrateArithmeticOperations();
void demonstrateTypeConversion();

int main()
{
    cout << "=== C++ Data Types and Operations Demo ===\n"
         << endl;

    // Section 1: Integer Types
    cout << "\n[Section 1] Integer Types Demonstration" << endl;
    cout << "----------------------------------------" << endl;
    demonstrateIntegerTypes();

    // Section 2: Floating-Point Types
    cout << "\n[Section 2] Floating-Point Types Demonstration" << endl;
    cout << "----------------------------------------" << endl;
    demonstrateFloatingPointTypes();

    // Section 3: Character Types
    cout << "\n[Section 3] Character Types Demonstration" << endl;
    cout << "----------------------------------------" << endl;
    demonstrateCharacterTypes();

    // Section 4: Boolean Types
    cout << "\n[Section 4] Boolean Types Demonstration" << endl;
    cout << "----------------------------------------" << endl;
    demonstrateBooleanTypes();

    // Section 5: String Types and User Input
    cout << "\n[Section 5] String Types and User Input" << endl;
    cout << "----------------------------------------" << endl;
    demonstrateStringTypes();
    demonstrateUserInput();

    // Section 6: Arithmetic Operations
    cout << "\n[Section 6] Arithmetic Operations" << endl;
    cout << "----------------------------------------" << endl;
    demonstrateArithmeticOperations();

    // Section 7: Type Conversion
    cout << "\n[Section 7] Type Conversion" << endl;
    cout << "----------------------------------------" << endl;
    demonstrateTypeConversion();

    return 0;
}

// Function implementations
void demonstrateIntegerTypes()
{
    int age = 25;
    short smallNumber = 32767;   // Maximum value for short
    long bigNumber = 2147483647; // Maximum value for long

    cout << "int value: " << age << endl;
    cout << "short value: " << smallNumber << endl;
    cout << "long value: " << bigNumber << endl;
}

void demonstrateFloatingPointTypes()
{
    float pi = 3.14159f;
    double precisePi = 3.14159265359;

    cout << "float pi: " << pi << endl;
    cout << "double pi: " << precisePi << endl;
}

void demonstrateCharacterTypes()
{
    char grade = 'A';
    cout << "Character grade: " << grade << endl;
    cout << "ASCII value: " << static_cast<int>(grade) << endl;
}

void demonstrateBooleanTypes()
{
    bool isStudent = true;
    cout << "Boolean value: " << (isStudent ? "true" : "false") << endl;
}

void demonstrateStringTypes()
{
    string name = "John Doe";
    cout << "String example: " << name << endl;
}

void demonstrateUserInput()
{
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
}

void demonstrateArithmeticOperations()
{
    int a = 10, b = 3;
    float x = 5.5, y = 2.2;

    cout << "Integer arithmetic:" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;

    cout << "\nFloating-point arithmetic:" << endl;
    cout << "x + y = " << (x + y) << endl;
    cout << "x - y = " << (x - y) << endl;
    cout << "x * y = " << (x * y) << endl;
    cout << "x / y = " << (x / y) << endl;
}

void demonstrateTypeConversion()
{
    float pi = 3.14159f;
    int intPi = static_cast<int>(pi);
    double doublePi = static_cast<double>(pi);

    cout << "Original float pi: " << pi << endl;
    cout << "Converted to int: " << intPi << endl;
    cout << "Converted to double: " << doublePi << endl;
}