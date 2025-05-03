#include <iostream>
using namespace std;

// Base class
class Shape
{
protected:
    string color;

public:
    Shape(string c) : color(c) {}

    // Pure virtual function
    virtual double calculateArea() = 0;

    // Virtual function
    virtual void display()
    {
        cout << "Color: " << color << endl;
    }
};

// Derived class
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(string c, double r) : Shape(c), radius(r) {}

    double calculateArea() override
    {
        return 3.14159 * radius * radius;
    }

    void display() override
    {
        cout << "Circle:" << endl;
        Shape::display();
        cout << "Radius: " << radius << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

// Another derived class
class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle(string c, double l, double w)
        : Shape(c), length(l), width(w) {}

    double calculateArea() override
    {
        return length * width;
    }

    void display() override
    {
        cout << "Rectangle:" << endl;
        Shape::display();
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main()
{
    Circle circle("Red", 5.0);
    Rectangle rectangle("Blue", 4.0, 6.0);

    cout << "Shape Information:" << endl;
    cout << "----------------" << endl;

    circle.display();
    cout << endl;
    rectangle.display();

    return 0;
}