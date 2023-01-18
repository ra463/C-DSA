#include <iostream>
using namespace std;

class Math
{
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    // we have passed objects as function argument
    void getDataAsComplex(Math m1, Math m2)
    {
        a = m1.a + m2.a;
        b = m1.b + m2.b;
    }
    void PrintFun()
    {
        cout << "The complex number is " << a << " + " << b << "i " << endl;
    }
};

int main()
{
    Math m1, m2, m3;

    m1.setData(1, 2);
    m1.PrintFun();

    m2.setData(3, 4);
    m2.PrintFun();

    m3.getDataAsComplex(m1, m2);
    m3.PrintFun();

    return 0;
}