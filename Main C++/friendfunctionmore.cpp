#include <iostream>
using namespace std;

// forward declaration
class B;

class A
{
    int a;
    friend void add(A, B);
public:
    void setA(int x)
    {
        a = x;
    }
};

class B
{
    int a;
    friend void add(A, B);

public:
    void setA(int x)
    {
        a = x;
    }
};

void add(A a1, B b1)
{
    cout << "Sum is " << a1.a + b1.a << endl;
}

int main()
{
    A a;
    B b;
    a.setA(5);
    b.setA(10);
    add(a, b);
    return 0;
}