#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y) // Parametrized constructor
    {
        a = x;
        b = y;
    }
    Complex(int x) // Parametrized constructor
    {
        a = x;
        b = 0;
    }
    Complex() // Default constructor
    {
        a = 0;
        b = 0;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{ // Implicit call
    Complex a(4, 6);
    a.printNumber();

    Complex b(5);
    b.printNumber();

    Complex c;
    c.printNumber();

    return 0;
}