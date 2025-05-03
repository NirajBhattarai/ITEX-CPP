# Memory Spaces in C++ Programs

This directory contains three programs that demonstrate different aspects of memory management in C++:

## 1. Local Variables (local_variables.cpp)
This program demonstrates variables stored in the **Stack Memory**:
- All variables (`localInt`, `localDouble`, `localChar`, `localBool`) are stored in the stack
- Stack memory is automatically allocated when the function is called
- Memory is automatically deallocated when the function returns
- Variables are stored in Last-In-First-Out (LIFO) order
- Each variable has its own memory address in the stack

## 2. Static Variables (static_variables.cpp)
This program demonstrates variables stored in the **Static/Global Memory**:
- `staticVar` is stored in static memory because it's declared as `static` in the class
- Static memory persists throughout the program's execution
- The variable is shared across all instances of the class
- Memory is allocated at compile time
- The value can be modified and the change is visible to all instances

## 3. Class Objects (class_objects.cpp)
This program demonstrates a mix of memory spaces:
- The class object itself is stored in the **Stack Memory**
- Member variables (`classVar` and `classString`) are part of the object's memory layout
- The string object (`classString`) internally uses **Heap Memory** for its dynamic content
- The object's memory is automatically managed when it goes out of scope

## Memory Space Characteristics

### Stack Memory
- Fast access
- Limited size
- Automatic memory management
- LIFO (Last-In-First-Out) allocation
- Used for local variables and function calls

### Static/Global Memory
- Persists throughout program execution
- Shared across all functions
- Fixed size and location
- Initialized before program starts
- Used for global variables and static class members

### Heap Memory
- Dynamic allocation
- Larger size available
- Manual memory management required
- Used for dynamic data structures
- Slower access than stack

## How to Run the Programs
1. Compile each program using g++:
   ```bash
   g++ local_variables.cpp -o local_variables
   g++ static_variables.cpp -o static_variables
   g++ class_objects.cpp -o class_objects
   ```

2. Run the executables:
   ```bash
   ./local_variables
   ./static_variables
   ./class_objects
   ```

## Visualizing Memory
You can use Python Tutor (https://pythontutor.com/) to visualize the memory layout of these programs. Copy and paste the code into the online editor to see how variables are stored in different memory spaces.

# C++ Compilation Process and Memory Management

## Step-by-Step Compilation Process

1. **Preprocessing**
   - The preprocessor handles all preprocessor directives (starting with #)
   - Expands macros and includes header files
   - Removes comments
   - Example: `#include <iostream>` is replaced with the actual content of the iostream header

2. **Compilation**
   - The compiler converts preprocessed code into assembly language
   - Performs syntax and semantic analysis
   - Generates intermediate assembly code
   - Example: C++ code is converted to assembly instructions

3. **Assembly**
   - The assembler converts assembly code into object code (machine code)
   - Creates object files (.o or .obj)
   - Contains binary instructions that the CPU can understand

4. **Linking**
   - The linker combines all object files and libraries
   - Resolves external references
   - Creates the final executable file

## Memory Layout Visualization

![Memory Layout Diagram](https://images.viblo.asia/eccce77d-6b51-4792-b544-a058f013b43d.png)

The above diagram shows how different parts of a C++ program are stored in memory:

1. **Code Segment (Text Segment)**
   - Contains the compiled program code
   - Read-only memory
   - Shared among all instances of the program
   - Stores function definitions and instructions

2. **Data Segment**
   - **Initialized Data**: Global and static variables with initial values
   - **Uninitialized Data (BSS)**: Global and static variables without initial values
   - Example:
     ```cpp
     int globalVar = 10;    // Initialized data
     static int staticVar;  // BSS segment
     ```

3. **Heap**
   - Dynamic memory allocation
   - Grows upward
   - Managed by programmer (new/delete in C++)
   - Example:
     ```cpp
     int* ptr = new int(5);  // Allocated on heap
     delete ptr;             // Manual deallocation
     ```

4. **Stack**
   - Function calls and local variables
   - Grows downward
   - Automatic memory management
   - Example:
     ```cpp
     void function() {
         int localVar = 5;  // Stored on stack
     }
     ```

## Memory Layout During Execution

1. **Code Segment (Text Segment)**
   - Contains the compiled program code
   - Read-only memory
   - Shared among all instances of the program

2. **Data Segment**
   - **Initialized Data**: Global and static variables with initial values
   - **Uninitialized Data (BSS)**: Global and static variables without initial values
   - Example:
     ```cpp
     int globalVar = 10;    // Initialized data
     static int staticVar;  // BSS segment
     ```

3. **Heap**
   - Dynamic memory allocation
   - Grows upward
   - Managed by programmer (new/delete in C++)
   - Example:
     ```cpp
     int* ptr = new int(5);  // Allocated on heap
     delete ptr;             // Manual deallocation
     ```

4. **Stack**
   - Function calls and local variables
   - Grows downward
   - Automatic memory management
   - Example:
     ```cpp
     void function() {
         int localVar = 5;  // Stored on stack
     }
     ```

## Sample Code with Memory Explanation

```cpp
#include <iostream>
using namespace std;

// Global variable - stored in initialized data segment
int globalVar = 100;

// Static variable - stored in BSS segment
static int staticVar;

// Function - code stored in code segment
void processData() {
    // Local variable - stored on stack
    int localVar = 50;
    
    // Dynamic allocation - stored on heap
    int* heapVar = new int(200);
    
    cout << "Local variable: " << localVar << endl;
    cout << "Heap variable: " << *heapVar << endl;
    
    // Must manually free heap memory
    delete heapVar;
}

int main() {
    // Stack variables
    int mainLocal = 10;
    
    // Call function (creates new stack frame)
    processData();
    
    return 0;
}
```

## Memory Management Best Practices

1. **Stack Usage**
   - Use for small, temporary data
   - Automatic cleanup when scope ends
   - Limited size (typically a few MB)

2. **Heap Usage**
   - Use for large data or when lifetime exceeds function scope
   - Always pair new with delete
   - Consider using smart pointers in modern C++
   - Watch for memory leaks

3. **Global/Static Variables**
   - Minimize use of global variables
   - Use static for file-scope variables
   - Be aware of initialization order

## Common Memory Issues

1. **Memory Leaks**
   - Forgetting to delete heap-allocated memory
   - Solution: Use RAII or smart pointers

2. **Stack Overflow**
   - Too much stack memory usage
   - Solution: Use heap for large data

3. **Dangling Pointers**
   - Accessing deleted memory
   - Solution: Set pointers to nullptr after deletion

4. **Buffer Overflow**
   - Writing beyond allocated memory
   - Solution: Use bounds checking and safe containers 