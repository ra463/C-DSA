#include <iostream>
using namespace std;

class Complex
{
public:
    int a, b;

public:
    // Complex(void); we can call constructor outside the class also
    Complex(void)
    {
        a = 3;
        b = 4;
    }

    void printNumber(void)
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

// we can initialize the constructor outside the class also
// Complex ::Complex(void)
// {
//     a = 2;
//     b = 3;
// };

int main()
{
    Complex c;
    c.printNumber();
    return 0;
}