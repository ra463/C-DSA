#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A's constructor called" << endl;
    }
    A(int x)
    {
        cout << "Value of X is: " << x << endl;
    }
};

class B
{
public:
    B()
    {
        cout << "B's constructor called" << endl;
    }
    B(int y)
    {
        cout << "Value of Y is: " << y << endl;
    }
};

class C : public B, public A
{
public:
    C()
    {
        cout << "C's constructor called" << endl;
    }
    C(int x, int y, int z) : A(x), B(y)
    {
        cout << "Value of Z is: " << z << endl;
    }
};

int main()
{
    A obj1;
    B obj2;
    C obj(1, 2, 3);
    // C.A::A(5);
    return 0;
}