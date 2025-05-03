/**
 * @file datatypes_memory.cpp
 * @brief Demonstrates C++ data types, their memory spaces, and examples
 */

#include <iostream>
#include <iomanip> // For setw() function
using namespace std;

// Function to print a line of dashes
void printLine()
{
    cout << setw(20) << setfill('-') << "" << endl;
    cout << setfill(' '); // Reset fill character
}

int main()
{
    // Table header
    cout << "\nC++ Data Types and Memory Spaces\n"
         << endl;
    cout << setw(15) << "Data Type" << setw(10) << "Size" << setw(15) << "Range" << setw(20) << "Example" << endl;
    printLine();

    // Integer Types
    cout << setw(15) << "int" << setw(10) << sizeof(int) << " bytes"
         << setw(15) << "-2^31 to 2^31-1" << setw(20) << "42" << endl;

    cout << setw(15) << "short" << setw(10) << sizeof(short) << " bytes"
         << setw(15) << "-2^15 to 2^15-1" << setw(20) << "32767" << endl;

    cout << setw(15) << "long" << setw(10) << sizeof(long) << " bytes"
         << setw(15) << "-2^31 to 2^31-1" << setw(20) << "2147483647" << endl;

    cout << setw(15) << "long long" << setw(10) << sizeof(long long) << " bytes"
         << setw(15) << "-2^63 to 2^63-1" << setw(20) << "9223372036854775807" << endl;

    printLine();

    // Floating Point Types
    cout << setw(15) << "float" << setw(10) << sizeof(float) << " bytes"
         << setw(15) << "±3.4E-38 to ±3.4E+38" << setw(20) << "3.14159f" << endl;

    cout << setw(15) << "double" << setw(10) << sizeof(double) << " bytes"
         << setw(15) << "±1.7E-308 to ±1.7E+308" << setw(20) << "3.14159265359" << endl;

    printLine();

    // Character Types
    cout << setw(15) << "char" << setw(10) << sizeof(char) << " byte"
         << setw(15) << "-128 to 127" << setw(20) << "'A'" << endl;

    cout << setw(15) << "unsigned char" << setw(10) << sizeof(unsigned char) << " byte"
         << setw(15) << "0 to 255" << setw(20) << "'B'" << endl;

    printLine();

    // Boolean Type
    cout << setw(15) << "bool" << setw(10) << sizeof(bool) << " byte"
         << setw(15) << "true/false" << setw(20) << "true" << endl;

    printLine();

    // Examples and explanations
    cout << "\nExamples and Explanations:\n"
         << endl;

    // Integer example
    int age = 25;
    cout << "Integer (int) Example:" << endl;
    cout << "age = " << age << " (uses " << sizeof(age) << " bytes)" << endl;
    cout << "Why int? For whole numbers like age, count, etc." << endl
         << endl;

    // Float example
    float pi = 3.14159f;
    cout << "Float Example:" << endl;
    cout << "pi = " << pi << " (uses " << sizeof(pi) << " bytes)" << endl;
    cout << "Why float? For decimal numbers with moderate precision" << endl
         << endl;

    // Double example
    double precisePi = 3.14159265359;
    cout << "Double Example:" << endl;
    cout << "precisePi = " << precisePi << " (uses " << sizeof(precisePi) << " bytes)" << endl;
    cout << "Why double? For decimal numbers requiring high precision" << endl
         << endl;

    // Char example
    char grade = 'A';
    cout << "Character Example:" << endl;
    cout << "grade = " << grade << " (uses " << sizeof(grade) << " bytes)" << endl;
    cout << "Why char? For single characters like grades, letters" << endl
         << endl;

    // Boolean example
    bool isStudent = true;
    cout << "Boolean Example:" << endl;
    cout << "isStudent = " << (isStudent ? "true" : "false") << " (uses " << sizeof(isStudent) << " byte)" << endl;
    cout << "Why bool? For true/false conditions" << endl;

    return 0;
}