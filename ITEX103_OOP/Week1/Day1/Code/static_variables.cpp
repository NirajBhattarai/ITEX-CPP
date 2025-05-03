#include <iostream>
using namespace std;

class MyClass
{
public:
    static int staticVar;

    static void setStaticVar(int value)
    {
        staticVar = value;
    }

    void showStaticVariable()
    {
        cout << "staticVar = " << staticVar << ", Address = " << &staticVar << endl;
    }
};

int MyClass::staticVar = 100;

int main()
{
    MyClass obj;
    obj.showStaticVariable();   // Initial value
    MyClass::setStaticVar(200); // Modify staticVar
    obj.showStaticVariable();   // Modified value
    return 0;
}