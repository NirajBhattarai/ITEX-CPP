#include <iostream>
using namespace std;

void showLocalVariables()
{
    int localInt = 100;
    double localDouble = 3.14;
    char localChar = 'B';
    bool localBool = false;

    cout << "Local Variables and their Memory:\n";
    cout << "localInt = " << localInt << ", Address = " << &localInt << endl;
    cout << "localDouble = " << localDouble << ", Address = " << &localDouble << endl;
    cout << "localChar = " << localChar << ", Address = " << static_cast<void *>(&localChar) << endl;
    cout << "localBool = " << localBool << ", Address = " << &localBool << endl;
}

int main()
{
    showLocalVariables();
    return 0;
}