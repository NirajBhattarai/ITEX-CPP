#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;
    float marks;
    static int totalStudents; // Static member

public:
    // Default constructor
    Student()
    {
        name = "Unknown";
        rollNumber = 0;
        marks = 0.0;
        totalStudents++;
    }

    // Parameterized constructor
    Student(string n, int roll, float m)
    {
        name = n;
        rollNumber = roll;
        marks = m;
        totalStudents++;
    }

    // Member functions
    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }

    // Static member function
    static int getTotalStudents()
    {
        return totalStudents;
    }

    // Friend function
    friend void updateMarks(Student &s, float newMarks);
};

// Initialize static member
int Student::totalStudents = 0;

// Friend function implementation
void updateMarks(Student &s, float newMarks)
{
    s.marks = newMarks;
}

int main()
{
    // Create student objects
    Student s1;                    // Using default constructor
    Student s2("John", 101, 85.5); // Using parameterized constructor

    // Display student information
    cout << "Student 1 Information:" << endl;
    s1.displayInfo();
    cout << "\nStudent 2 Information:" << endl;
    s2.displayInfo();

    // Update marks using friend function
    updateMarks(s2, 90.0);
    cout << "\nAfter updating marks:" << endl;
    s2.displayInfo();

    // Display total number of students
    cout << "\nTotal Students: " << Student::getTotalStudents() << endl;

    return 0;
}