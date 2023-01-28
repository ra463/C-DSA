#include <iostream>
using namespace std;

class A
{
    int a, b;
    float c;

public:
    // If we don't use "&" then it will return a copy of the object
    // and not the original object
    A &SetC(float c)
    {
        this->c = c;
        return *this;
    }

    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};

int main()
{
    A a;
    a.setData(3, 4);
    a.SetC(3.14).getData();
    // a.getData();
    // we can use this because SetC() returns a reference to the object
    // so we can use the object directly by using the dot operator, we can not do this with the setData() function because it has argument and it returns void

    return 0;
}