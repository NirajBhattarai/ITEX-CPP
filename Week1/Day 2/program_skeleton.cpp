/**
 * @file program_skeleton.cpp
 * @brief Basic C++ program skeleton with common elements
 *
 * This skeleton demonstrates:
 * 1. Basic program structure
 * 2. Common includes
 * 3. Function declarations
 * 4. Main function structure
 * 5. Basic I/O operations
 */

// Common C++ includes
#include <iostream> // For input/output operations
#include <string>   // For string operations
#include <vector>   // For vector operations
#include <cmath>    // For mathematical operations

// Using standard namespace
using namespace std;

// Function declarations (prototypes)
void displayWelcome();
int getUserInput();
void processData(int input);
void displayResults(int result);

/**
 * @brief Main function - program entry point
 * @return int - program exit status (0 for success)
 */
int main()
{
    // 1. Program initialization
    displayWelcome();

    // 2. Get user input
    int userInput = getUserInput();

    // 3. Process the data
    processData(userInput);

    // 4. Display results
    displayResults(userInput);

    // 5. Program cleanup and exit
    return 0;
}

/**
 * @brief Displays welcome message
 */
void displayWelcome()
{
    cout << "=== Welcome to the Program ===" << endl;
    cout << "This is a basic program skeleton." << endl;
}

/**
 * @brief Gets input from the user
 * @return int - user input value
 */
int getUserInput()
{
    int input;
    cout << "\nEnter a number: ";
    cin >> input;
    return input;
}

/**
 * @brief Processes the input data
 * @param input - the input value to process
 */
void processData(int input)
{
    // Example processing
    cout << "\nProcessing input: " << input << endl;
}

/**
 * @brief Displays the results
 * @param result - the result to display
 */
void displayResults(int result)
{
    cout << "\n=== Results ===" << endl;
    cout << "Final value: " << result << endl;
    cout << "Program completed successfully!" << endl;
}