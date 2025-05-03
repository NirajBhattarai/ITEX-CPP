#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    // Constructors
    Complex() : real(0), imag(0) {}
    Complex(float r, float i) : real(r), imag(i) {}

    // Operator overloading
    Complex operator+(const Complex &c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(const Complex &c)
    {
        return Complex(real - c.real, imag - c.imag);
    }

    Complex operator*(const Complex &c)
    {
        return Complex(real * c.real - imag * c.imag,
                       real * c.imag + imag * c.real);
    }

    // Friend function for stream operator
    friend ostream &operator<<(ostream &out, const Complex &c)
    {
        out << c.real;
        if (c.imag >= 0)
            out << " + ";
        out << c.imag << "i";
        return out;
    }

    // Friend function for input operator
    friend istream &operator>>(istream &in, Complex &c)
    {
        cout << "Enter real part: ";
        in >> c.real;
        cout << "Enter imaginary part: ";
        in >> c.imag;
        return in;
    }
};

int main()
{
    Complex c1, c2;

    cout << "Enter first complex number:" << endl;
    cin >> c1;

    cout << "Enter second complex number:" << endl;
    cin >> c2;

    cout << "\nFirst complex number: " << c1 << endl;
    cout << "Second complex number: " << c2 << endl;

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex product = c1 * c2;

    cout << "\nSum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << product << endl;

    return 0;
}