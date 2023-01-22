#include <iostream>
using namespace std;

class A
{
    int x;
    int y;

public:
    A() {}
    A(int a, int b)
    {
        x = a;
        y = b;
    }

    A(A &a) // copy constructor
    {
        cout << "Copy constructor called" << endl;
        x = a.x;
        y = a.y;
    }

    void display()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

// !important --> if we don't create copy constructor, compiler will create its own copy constructor
// note --> when there is no copy constructor, compiler will create its own copy constructor

int main()
{
    A a1(5, 6), a2(10, 20);
    a1.display();
    a2.display();

    // two ways to call copy constructor
    A a3 = a1; // copy constructor is called
    a3.display();

    A a4(a2); // copy constructor is called
    a4.display();
    return 0;
}