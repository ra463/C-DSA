#include <iostream>
using namespace std;

class A
{
    int a, b, c;

public:
    A(int x, int y = 5, int z = 3)
    {
        a = x;
        b = y;
        c = z;
    }

    void Print();
};

void A::Print()
{
    cout << "a = " << a << " b = " << b << " c = " << c << endl;
}

int main()
{
    A a(4, 6, 2);
    a.Print();

    A b(7, 4); // as c is not initialized, it will take the default value
    b.Print();

    A c(7); // as b and c is not initialized, it will take the default value
    c.Print();
    return 0;
}