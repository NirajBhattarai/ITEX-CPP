#include <iostream>
#include <string>
using namespace std;

class MyClass
{
public:
    int classVar;
    string classString;

    MyClass(int var, string str) : classVar(var), classString(str) {}

    void showClassVariables()
    {
        cout << "classVar = " << classVar << ", Address = " << &classVar << endl;
        cout << "classString = " << classString << ", Address = " << &classString << endl;
    }
};

int main()
{
    MyClass obj(42, "MyClass Object");
    obj.showClassVariables();
    return 0;
}