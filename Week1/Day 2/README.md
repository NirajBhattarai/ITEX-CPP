# Day 2: Basic C++ Program Structure

## Definitions

### Basic Terms
- **Variable**: A named storage location in memory that can hold a value
- **Data Type**: Defines the type of data a variable can hold
- **Scope**: The region of code where a variable is accessible
- **Lifetime**: The duration for which a variable exists in memory
- **Memory**: The computer's storage space where variables are stored

### Variable Types
- **Primitive Types**: Basic built-in types (int, float, char, etc.)
- **User-Defined Types**: Types created by the programmer (struct, class, enum)
- **Derived Types**: Types derived from other types (arrays, pointers, references)

## Program Structure

### Basic Program Skeleton (`basic_skeleton.cpp`)

This is a minimal C++ program that demonstrates the fundamental structure and elements of a C++ program.

### Program Elements

1. **Comments**
   ```cpp
   // Single line comment
   /* Multi-line 
      comment */
   ```

2. **Include and Namespace**
   ```cpp
   #include <iostream>
   using namespace std;
   ```

3. **Function Types**
   ```cpp
   // Function declaration (prototype)
   void sayHello();

   // Function with direct definition
   void printNumber(int num) {
       cout << "Number is: " << num << endl;
   }

   // Function definition
   void sayHello() {
       cout << "Hello, World!" << endl;
   }
   ```

4. **Main Function**
   ```cpp
   int main() {
       int number = 42;
       sayHello();
       printNumber(number);
       return 0;
   }
   ```

## Data Types and Memory (`datatypes_memory.cpp`)

This program demonstrates C++ data types, their memory spaces, and practical examples.

### Data Types Table
| Data Type | Size | Range | Example |
|-----------|------|-------|---------|
| int | 4 bytes | -2^31 to 2^31-1 | 42 |
| short | 2 bytes | -2^15 to 2^15-1 | 32767 |
| long | 4 bytes | -2^31 to 2^31-1 | 2147483647 |
| long long | 8 bytes | -2^63 to 2^63-1 | 9223372036854775807 |
| float | 4 bytes | ±3.4E-38 to ±3.4E+38 | 3.14159f |
| double | 8 bytes | ±1.7E-308 to ±1.7E+308 | 3.14159265359 |
| char | 1 byte | -128 to 127 | 'A' |
| bool | 1 byte | true/false | true |

## User-Defined Data Types (`user_defined_types.cpp`)

This program demonstrates how to create and use custom data types in C++.

### 1. Structures (struct)
```cpp
struct Student {
    string name;
    int age;
    float gpa;
    char grade;
};
```
- Groups related variables
- All members are public by default
- Used for simple data grouping

### 2. Enumerations (enum)
```cpp
enum DayOfWeek {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    // ...
};
```
- Set of named constants
- Automatically assigns values
- Improves code readability

### 3. Type Definitions (typedef)
```cpp
typedef unsigned long long ULL;
typedef string Name;
```
- Creates aliases for existing types
- Improves code readability
- Makes code maintenance easier

### 4. Classes
```cpp
class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w);
    double getArea();
    double getPerimeter();
};
```
- Blueprint for objects
- Supports encapsulation
- Can have private and public members
- Includes constructors and methods

### When to Use Each Type

1. **Structures**
   - When you need to group related data
   - For simple data containers
   - When all members should be public

2. **Enums**
   - For a set of related constants
   - When you need named values
   - For switch statements

3. **Typedefs**
   - To create meaningful type names
   - To simplify complex type names
   - For better code readability

4. **Classes**
   - For object-oriented programming
   - When you need encapsulation
   - When you need methods and constructors

### Key Points to Remember

1. **Program Structure**
   - Comments for documentation
   - Include necessary headers
   - Declare functions before use
   - Define main function
   - Implement other functions

2. **Basic Elements**
   - `#include` for adding libraries
   - `using namespace std` for standard library
   - Function declarations and definitions
   - Variable declarations
   - Basic I/O with `cout`

3. **Compilation and Execution**
   ```bash
   g++ basic_skeleton.cpp -o basic_skeleton
   ./basic_skeleton
   
   g++ datatypes_memory.cpp -o datatypes_memory
   ./datatypes_memory
   
   g++ user_defined_types.cpp -o user_defined_types
   ./user_defined_types
   ```

### Learning Objectives
- Understand basic C++ program structure
- Learn different types of comments
- Understand function declaration vs definition
- Learn basic I/O operations
- Practice variable declaration and usage
- Understand different data types and their memory spaces
- Know when to use each data type
- Learn to create and use user-defined types
- Understand object-oriented concepts

### Output
```
Hello, World!
Number is: 42
```

## Variables in C++ (`variables_demo.cpp`)

### 1. Variable Types by Scope

#### Global Variables
```cpp
int globalVar = 100;  // Accessible throughout the program
```
**Definition**: Variables declared outside any function
- Accessible from any part of the program
- Exist for the entire program duration
- Stored in static memory
- Should be used sparingly

#### Static Variables
```cpp
static int staticGlobalVar = 200;  // File scope
static int staticLocalVar = 0;     // Function scope
```
**Definition**: Variables that retain their values between function calls
- Initialized only once
- Have different scopes (global or local)
- Stored in static memory
- Useful for maintaining state

#### Local Variables
```cpp
void function() {
    int localVar = 10;  // Only accessible within this function
}
```
**Definition**: Variables declared inside a function or block
- Only accessible within their scope
- Created when function is called
- Destroyed when function ends
- Stored in stack memory

### 2. Variable Modifiers

#### Const Variables
```cpp
const int MAX_VALUE = 100;  // Cannot be modified
const int* ptr1 = &value;   // Pointer to constant data
int const* ptr2 = &value;   // Constant pointer to data
```
**Definition**: Variables whose values cannot be changed after initialization
- Used for constants and parameters
- Helps prevent accidental modifications
- Improves code safety
- Can be used with pointers and references

#### Reference Variables
```cpp
int original = 42;
int& ref = original;  // Reference to original
```
**Definition**: An alias for another variable
- Must be initialized when declared
- Cannot be reassigned
- Provides an alternative name for a variable
- Useful for function parameters

#### Auto Variables
```cpp
auto number = 42;     // int
auto decimal = 3.14;  // double
```
**Definition**: Variables whose type is automatically deduced
- Type is determined by initializer
- Must be initialized when declared
- Useful for complex types
- Improves code readability

### 3. Variable Scope Rules

1. **Block Scope**
   - Variables declared inside a block `{}`
   - Only accessible within that block
   - Can shadow variables from outer scope
   - Memory is allocated when block is entered

2. **Function Scope**
   - Variables declared inside a function
   - Only accessible within that function
   - Parameters are function scope variables
   - Memory is allocated when function is called

3. **File Scope**
   - Variables declared outside any function
   - Accessible throughout the file
   - Can be made global with `extern`
   - Memory is allocated when program starts

4. **Program Scope**
   - Global variables
   - Accessible throughout the program
   - Should be used sparingly
   - Memory is allocated when program starts

### 4. Variable Lifetime

1. **Automatic Storage**
   - Local variables
   - Created when block is entered
   - Destroyed when block is exited
   - Stored in stack memory

2. **Static Storage**
   - Static variables
   - Created when program starts
   - Destroyed when program ends
   - Stored in static memory

3. **Dynamic Storage**
   - Created with `new`
   - Destroyed with `delete`
   - Manual memory management
   - Stored in heap memory

### Best Practices

1. **Variable Declaration**
   - Declare variables as close as possible to their use
   - Initialize variables when declaring
   - Use meaningful names
   - Choose appropriate types

2. **Scope and Lifetime**
   - Keep scope as small as possible
   - Avoid global variables
   - Be aware of variable lifetime
   - Clean up dynamic memory

3. **Memory Management**
   - Use automatic variables when possible
   - Be careful with dynamic memory
   - Avoid memory leaks
   - Use smart pointers when appropriate

### Compilation and Execution
```bash
g++ variables_demo.cpp -o variables_demo
./variables_demo
```

### Learning Objectives
- Understand different types of variables
- Learn variable scope and lifetime
- Practice using variable modifiers
- Understand memory management
- Learn best practices for variable usage
- Master variable declarations and initialization
- Understand memory allocation and deallocation 

## Binary Storage of Data Types

### Integer Types Memory Layout
1. **Short (2 bytes = 16 bits)**
   ```
   [Sign bit(1)] [Value bits(15)]
   ```
   - First bit: Sign (0=positive, 1=negative)
   - Remaining 15 bits: Value
   - Example: 32767 (maximum value)
     ```
     0 111 1111 1111 1111
     ```
   - Range: -32,768 to 32,767 (-2^15 to 2^15-1)

2. **Int (4 bytes = 32 bits)**
   ```
   [Sign bit(1)] [Value bits(31)]
   ```
   - First bit: Sign (0=positive, 1=negative)
   - Remaining 31 bits: Value
   - Example: 2147483647 (maximum value)
     ```
     0 111 1111 1111 1111 1111 1111 1111 1111
     ```
   - Range: -2,147,483,648 to 2,147,483,647 (-2^31 to 2^31-1)

3. **Long Long (8 bytes = 64 bits)**
   ```
   [Sign bit(1)] [Value bits(63)]
   ```
   - First bit: Sign (0=positive, 1=negative)
   - Remaining 63 bits: Value
   - Example: 9223372036854775807 (maximum value)
     ```
     0 111...1111 (64 bits total)
     ```
   - Range: -2^63 to 2^63-1

### Floating Point Types (IEEE 754)
1. **Float (4 bytes = 32 bits)**
   ```
   [Sign(1)] [Exponent(8)] [Mantissa(23)]
   ```
   - Sign bit: 0=positive, 1=negative
   - Exponent: 8 bits (biased by 127)
   - Mantissa: 23 bits (fractional part)
   - Example: 3.14159
     ```
     0 10000000 10010010000111111011011
     ```

2. **Double (8 bytes = 64 bits)**
   ```
   [Sign(1)] [Exponent(11)] [Mantissa(52)]
   ```
   - Sign bit: 0=positive, 1=negative
   - Exponent: 11 bits (biased by 1023)
   - Mantissa: 52 bits (fractional part)
   - Example: 3.14159265359
     ```
     0 10000000000 1001001000011111101101010100010001000010110100011000
     ```

### Negative Number Representation (Two's Complement)
1. **Steps to represent negative number:**
   - Convert to binary
   - Invert all bits (0→1, 1→0)
   - Add 1 to the result

2. **Example: -42**
   ```
   Step 1: 42 in binary    = 00101010
   Step 2: Invert bits     = 11010101
   Step 3: Add 1           = 11010110
   Final: -42 in binary    = 11010110
   ```

### Memory Organization
1. **Byte Order (Endianness)**
   - Little-endian: Least significant byte first
     ```
     Example: 0x12345678 stored as:
     78 56 34 12
     ```
   - Big-endian: Most significant byte first
     ```
     Example: 0x12345678 stored as:
     12 34 56 78
     ```

2. **Memory Alignment**
   - Data types are aligned to their size
   - Improves memory access efficiency
   - Example: 4-byte int aligned to 4-byte boundary

3. **Memory Efficiency Tips**
   - Choose smallest type that fits your needs
   - Consider memory alignment in structures
   - Be aware of padding in structures
   - Example structure padding:
     ```cpp
     struct Example {
         char c;    // 1 byte
         // 3 bytes padding
         int i;     // 4 bytes
         short s;   // 2 bytes
         // 2 bytes padding
     }; // Total: 12 bytes
     ```

### Key Points
1. **Memory Alignment**
   - Data types are aligned to their size
   - Improves memory access efficiency

2. **Endianness**
   - Little-endian: Least significant byte first
   - Big-endian: Most significant byte first
   - Most modern systems use little-endian

3. **Memory Efficiency**
   - Choose smallest type that fits your needs
   - Consider memory alignment in structures
   - Be aware of padding in structures

### Compilation and Execution
```bash
g++ binary_storage.cpp -o binary_storage
./binary_storage
``` 