#include <iostream>
using namespace std;

class A
{
    int a;

public:
    // default constructor
    A()
    {
        a = 10;
    }

    // paramatrized constructor
    A(int x)
    {
        a = x;
    }
    void show()
    {
        cout << "a = " << a << endl;
    }
};

int main()
{
    // implicit call
    A a(20);
    a.show();

    // explicit call
    A b = A(30);
    b.show();
    return 0;
}