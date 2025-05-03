#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Stack
{
private:
    vector<T> elements;
    size_t capacity;

public:
    Stack(size_t size = 10) : capacity(size) {}

    void push(const T &element)
    {
        if (elements.size() < capacity)
        {
            elements.push_back(element);
        }
        else
        {
            cout << "Stack is full!" << endl;
        }
    }

    T pop()
    {
        if (!elements.empty())
        {
            T element = elements.back();
            elements.pop_back();
            return element;
        }
        else
        {
            cout << "Stack is empty!" << endl;
            return T();
        }
    }

    T peek() const
    {
        if (!elements.empty())
        {
            return elements.back();
        }
        else
        {
            cout << "Stack is empty!" << endl;
            return T();
        }
    }

    bool isEmpty() const
    {
        return elements.empty();
    }

    bool isFull() const
    {
        return elements.size() == capacity;
    }

    size_t size() const
    {
        return elements.size();
    }
};

int main()
{
    // Integer stack
    Stack<int> intStack(5);

    cout << "Integer Stack Operations:" << endl;
    cout << "----------------------" << endl;

    intStack.push(1);
    intStack.push(2);
    intStack.push(3);

    cout << "Stack size: " << intStack.size() << endl;
    cout << "Top element: " << intStack.peek() << endl;

    cout << "Popping elements: ";
    while (!intStack.isEmpty())
    {
        cout << intStack.pop() << " ";
    }
    cout << endl;

    // String stack
    Stack<string> stringStack(3);

    cout << "\nString Stack Operations:" << endl;
    cout << "----------------------" << endl;

    stringStack.push("Hello");
    stringStack.push("World");

    cout << "Stack size: " << stringStack.size() << endl;
    cout << "Top element: " << stringStack.peek() << endl;

    cout << "Popping elements: ";
    while (!stringStack.isEmpty())
    {
        cout << stringStack.pop() << " ";
    }
    cout << endl;

    return 0;
}