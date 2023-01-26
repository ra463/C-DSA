#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "Class A" << endl;
    }
};

class B
{
public:
    void show()
    {
        cout << "Class B" << endl;
    }
};

class C : public A, public B
{
    int a;

public:
    void show()
    {
        A::show(); // This is how we can call the show() function of class A
        B::show();
        cout << "Class C" << endl;
    }
};

int main()
{
    // A a;
    // a.show();
    // B b;
    // b.show();
    C c;
    c.show();
    return 0;
}