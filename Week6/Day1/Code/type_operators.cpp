#include <iostream>
#include <typeinfo>
using namespace std;

// Base class
class Animal
{
protected:
    string name;

public:
    Animal(string n) : name(n) {}

    virtual void makeSound()
    {
        cout << "Some sound" << endl;
    }

    virtual ~Animal() {}
};

// Derived class
class Dog : public Animal
{
public:
    Dog(string n) : Animal(n) {}

    void makeSound() override
    {
        cout << "Woof!" << endl;
    }
};

// Another derived class
class Cat : public Animal
{
public:
    Cat(string n) : Animal(n) {}

    void makeSound() override
    {
        cout << "Meow!" << endl;
    }
};

int main()
{
    Animal *animals[] = {
        new Dog("Buddy"),
        new Cat("Whiskers"),
        new Animal("Generic")};

    cout << "Type Information and Dynamic Binding:" << endl;
    cout << "-----------------------------------" << endl;

    for (Animal *animal : animals)
    {
        // Using typeid operator
        cout << "Type: " << typeid(*animal).name() << endl;

        // Using dynamic_cast
        if (Dog *dog = dynamic_cast<Dog *>(animal))
        {
            cout << "This is a Dog" << endl;
        }
        else if (Cat *cat = dynamic_cast<Cat *>(animal))
        {
            cout << "This is a Cat" << endl;
        }
        else
        {
            cout << "This is a generic Animal" << endl;
        }

        // Dynamic binding
        animal->makeSound();
        cout << endl;
    }

    // Cleanup
    for (Animal *animal : animals)
    {
        delete animal;
    }

    return 0;
}