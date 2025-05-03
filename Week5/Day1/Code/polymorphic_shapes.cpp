#include <iostream>
#include <vector>
using namespace std;

// Abstract base class
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

    // Virtual destructor
    virtual ~Shape()
    {
        cout << "Shape destructor called" << endl;
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

    ~Circle() override
    {
        cout << "Circle destructor called" << endl;
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

    ~Rectangle() override
    {
        cout << "Rectangle destructor called" << endl;
    }
};

int main()
{
    // Using base class pointers
    vector<Shape *> shapes;

    shapes.push_back(new Circle("Red", 5.0));
    shapes.push_back(new Rectangle("Blue", 4.0, 6.0));

    cout << "Shape Information:" << endl;
    cout << "----------------" << endl;

    for (Shape *shape : shapes)
    {
        shape->display();
        cout << endl;
    }

    // Cleanup
    for (Shape *shape : shapes)
    {
        delete shape;
    }

    return 0;
}