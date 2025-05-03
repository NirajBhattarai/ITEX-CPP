/**
 * @file binary_storage.cpp
 * @brief Demonstrates binary storage of different data types
 */

#include <iostream>
#include <bitset>
#include <iomanip>
using namespace std;

// Function to print binary representation
void printBinary(const char *type, const void *value, size_t size)
{
    cout << "\n"
         << type << " (" << size << " bytes):" << endl;

    // Print each byte
    const unsigned char *bytes = static_cast<const unsigned char *>(value);
    for (int i = size - 1; i >= 0; i--)
    {
        cout << "Byte " << i << ": " << bitset<8>(bytes[i]) << " ";
    }
    cout << endl;
}

int main()
{
    cout << "=== Binary Storage of Data Types ===\n"
         << endl;

    // 1. Integer Types
    cout << "1. Integer Types:" << endl;

    // Short (2 bytes = 16 bits)
    short shortNum = 32767; // Maximum value for short
    printBinary("Short", &shortNum, sizeof(shortNum));
    cout << "Value: " << shortNum << endl;
    cout << "Range: -32,768 to 32,767 (-2^15 to 2^15-1)" << endl;

    // Int (4 bytes = 32 bits)
    int intNum = 2147483647; // Maximum value for int
    printBinary("Int", &intNum, sizeof(intNum));
    cout << "Value: " << intNum << endl;
    cout << "Range: -2,147,483,648 to 2,147,483,647 (-2^31 to 2^31-1)" << endl;

    // Long Long (8 bytes = 64 bits)
    long long longNum = 9223372036854775807LL; // Maximum value for long long
    printBinary("Long Long", &longNum, sizeof(longNum));
    cout << "Value: " << longNum << endl;
    cout << "Range: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 (-2^63 to 2^63-1)" << endl;

    // 2. Floating Point Types
    cout << "\n2. Floating Point Types:" << endl;

    // Float (4 bytes = 32 bits)
    float floatNum = 3.14159f;
    printBinary("Float", &floatNum, sizeof(floatNum));
    cout << "Value: " << floatNum << endl;
    cout << "IEEE 754 Format: 1 bit sign, 8 bits exponent, 23 bits mantissa" << endl;

    // Double (8 bytes = 64 bits)
    double doubleNum = 3.14159265359;
    printBinary("Double", &doubleNum, sizeof(doubleNum));
    cout << "Value: " << doubleNum << endl;
    cout << "IEEE 754 Format: 1 bit sign, 11 bits exponent, 52 bits mantissa" << endl;

    // 3. Memory Layout Explanation
    cout << "\n3. Memory Layout Explanation:" << endl;
    cout << "Integer Types:" << endl;
    cout << "  Short (16 bits):  [Sign bit(1)] [Value bits(15)]" << endl;
    cout << "  Int (32 bits):    [Sign bit(1)] [Value bits(31)]" << endl;
    cout << "  Long Long (64 bits): [Sign bit(1)] [Value bits(63)]" << endl;

    cout << "\nFloating Point Types (IEEE 754):" << endl;
    cout << "  Float (32 bits):  [Sign(1)] [Exponent(8)] [Mantissa(23)]" << endl;
    cout << "  Double (64 bits): [Sign(1)] [Exponent(11)] [Mantissa(52)]" << endl;

    // 4. Example with negative numbers
    cout << "\n4. Negative Number Example:" << endl;
    int negativeNum = -42;
    printBinary("Negative Int", &negativeNum, sizeof(negativeNum));
    cout << "Value: " << negativeNum << endl;
    cout << "Note: Negative numbers use two's complement representation" << endl;

    return 0;
}