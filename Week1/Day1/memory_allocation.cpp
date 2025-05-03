#include <iostream>
using namespace std;

// Global variables - get memory in data segment at compile time
int globalVar;        // Uninitialized global - gets memory in BSS segment
int globalVar2 = 100; // Initialized global - gets memory in data segment

// Static variables - get memory in data segment at compile time
static int staticVar;        // Uninitialized static - gets memory in BSS segment
static int staticVar2 = 200; // Initialized static - gets memory in data segment

// Function - code gets memory in code segment at compile time
void demonstrateMemory()
{
    // Local variables - get memory in stack when function is called
    int localVar;        // Uninitialized local - gets memory in stack
    int localVar2 = 300; // Initialized local - gets memory in stack

    // Dynamic allocation - gets memory in heap at runtime
    int *heapVar = new int;       // Uninitialized heap - gets memory in heap
    int *heapVar2 = new int(400); // Initialized heap - gets memory in heap

    cout << "Local variables (stack):" << endl;
    cout << "localVar (uninitialized): " << localVar << endl; // Will show garbage value
    cout << "localVar2 (initialized): " << localVar2 << endl;

    cout << "\nHeap variables:" << endl;
    cout << "heapVar (uninitialized): " << *heapVar << endl; // Will show garbage value
    cout << "heapVar2 (initialized): " << *heapVar2 << endl;

    // Clean up heap memory
    delete heapVar;
    delete heapVar2;
}

int main()
{
    cout << "Global variables (data segment):" << endl;
    cout << "globalVar (uninitialized): " << globalVar << endl; // Will show 0
    cout << "globalVar2 (initialized): " << globalVar2 << endl;

    cout << "\nStatic variables (data segment):" << endl;
    cout << "staticVar (uninitialized): " << staticVar << endl; // Will show 0
    cout << "staticVar2 (initialized): " << staticVar2 << endl;

    cout << "\nCalling function to demonstrate stack and heap memory:" << endl;
    demonstrateMemory();

    return 0;
}