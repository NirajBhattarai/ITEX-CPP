#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

// Custom exception classes
class DivisionByZero : public runtime_error
{
public:
    DivisionByZero() : runtime_error("Division by zero is not allowed") {}
};

class NegativeNumber : public runtime_error
{
public:
    NegativeNumber() : runtime_error("Negative numbers are not allowed") {}
};

// Calculator class with exception handling
class Calculator
{
public:
    double divide(double a, double b)
    {
        if (b == 0)
        {
            throw DivisionByZero();
        }
        return a / b;
    }

    double squareRoot(double number)
    {
        if (number < 0)
        {
            throw NegativeNumber();
        }
        return sqrt(number);
    }
};

int main()
{
    Calculator calc;

    try
    {
        // Test division
        cout << "Division Test:" << endl;
        cout << "10 / 2 = " << calc.divide(10, 2) << endl;
        cout << "10 / 0 = ";
        cout << calc.divide(10, 0) << endl; // This will throw an exception
    }
    catch (const DivisionByZero &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    try
    {
        // Test square root
        cout << "\nSquare Root Test:" << endl;
        cout << "sqrt(16) = " << calc.squareRoot(16) << endl;
        cout << "sqrt(-4) = ";
        cout << calc.squareRoot(-4) << endl; // This will throw an exception
    }
    catch (const NegativeNumber &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    // Nested try-catch
    try
    {
        try
        {
            cout << "\nNested Exception Test:" << endl;
            cout << "10 / 0 = ";
            cout << calc.divide(10, 0) << endl;
        }
        catch (const DivisionByZero &e)
        {
            cout << "Inner catch: " << e.what() << endl;
            throw; // Re-throwing the exception
        }
    }
    catch (const DivisionByZero &e)
    {
        cout << "Outer catch: " << e.what() << endl;
    }

    return 0;
}