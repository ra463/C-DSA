#include <iostream>
using namespace std;

class A
{
    int a;

public:
    int b;
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
    }
    void print();
    int data1();
    int data2();
};

int A::data1()
{
    return a;
}

int A::data2()
{
    return b;
}

void A::print()
{
    cout << "After single inheritance" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}

class B : public A
{
    int c;

public:
    void setdata(int x, int y, int z)
    {
        A::setdata(x, y);
        c = z;
    }
    void display()
    {
        A::display();
        cout << "c: " << c << endl;
    }
    void multiply();
};

void B::multiply()
{
    cout << "Multiplication of a, b and c is: " << data1() * data2() * c << endl;
}

int main()
{
    B b1;
    b1.setdata(1, 2, 3);
    b1.display();
    b1.print();
    b1.multiply();
    return 0;
}