/**
 * @file user_defined_types.cpp
 * @brief Demonstrates user-defined data types in C++
 */

#include <iostream>
#include <string>
using namespace std;

// 1. Structure (struct) - Group of related variables
struct Student
{
    string name;
    int age;
    float gpa;
    char grade;
};

// 2. Enumeration (enum) - Set of named constants
enum DayOfWeek
{
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

// 3. Type Definition (typedef) - Creating alias for existing types
typedef unsigned long long ULL;
typedef string Name;

// 4. Class - Blueprint for objects
class Rectangle
{
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    // Member functions
    double getArea()
    {
        return length * width;
    }

    double getPerimeter()
    {
        return 2 * (length + width);
    }
};

// Function to print student information
void printStudent(const Student &s)
{
    cout << "Student Information:" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "GPA: " << s.gpa << endl;
    cout << "Grade: " << s.grade << endl;
}

// Function to print day name
string getDayName(DayOfWeek day)
{
    switch (day)
    {
    case MONDAY:
        return "Monday";
    case TUESDAY:
        return "Tuesday";
    case WEDNESDAY:
        return "Wednesday";
    case THURSDAY:
        return "Thursday";
    case FRIDAY:
        return "Friday";
    case SATURDAY:
        return "Saturday";
    case SUNDAY:
        return "Sunday";
    default:
        return "Unknown";
    }
}

int main()
{
    cout << "=== User-Defined Data Types in C++ ===\n"
         << endl;

    // 1. Structure Example
    cout << "1. Structure Example:" << endl;
    Student s1 = {"John Doe", 20, 3.8, 'A'};
    printStudent(s1);
    cout << "Size of Student struct: " << sizeof(Student) << " bytes\n"
         << endl;

    // 2. Enumeration Example
    cout << "2. Enumeration Example:" << endl;
    DayOfWeek today = WEDNESDAY;
    cout << "Today is: " << getDayName(today) << endl;
    cout << "Enum value: " << today << endl;
    cout << "Size of enum: " << sizeof(DayOfWeek) << " bytes\n"
         << endl;

    // 3. Typedef Example
    cout << "3. Typedef Example:" << endl;
    ULL bigNumber = 18446744073709551615ULL;
    Name personName = "Alice Smith";
    cout << "Big Number (ULL): " << bigNumber << endl;
    cout << "Person Name (Name): " << personName << endl;
    cout << "Size of ULL: " << sizeof(ULL) << " bytes\n"
         << endl;

    // 4. Class Example
    cout << "4. Class Example:" << endl;
    Rectangle rect(5.0, 3.0);
    cout << "Rectangle Area: " << rect.getArea() << endl;
    cout << "Rectangle Perimeter: " << rect.getPerimeter() << endl;
    cout << "Size of Rectangle class: " << sizeof(Rectangle) << " bytes\n"
         << endl;

    // Memory Layout Example
    cout << "Memory Layout Information:" << endl;
    cout << "Student struct: " << sizeof(Student) << " bytes" << endl;
    cout << "  - name (string): " << sizeof(string) << " bytes" << endl;
    cout << "  - age (int): " << sizeof(int) << " bytes" << endl;
    cout << "  - gpa (float): " << sizeof(float) << " bytes" << endl;
    cout << "  - grade (char): " << sizeof(char) << " bytes" << endl;

    return 0;
}