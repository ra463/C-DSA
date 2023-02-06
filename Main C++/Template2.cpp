#include <iostream>
using namespace std;

template <class T1, class T2, class T3>

class A
{
    T1 a;
    T2 b;
    T3 c;

public:
    A(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void displayData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
    T2 product()
    {
        return this->a * this->b * this->c;
    }

    void print()
    {
        cout << "The product of a, b and c is " << product() << endl;
    }
};

int main()
{
    A<float,float,float> a1(4.34, 6.79, 8.45);
    a1.displayData();
    a1.product();
    a1.print();

    A<float,float,int> a2(5.89, 7.56, 8);
    a2.displayData();
    a2.product();
    a2.print();

    A<int,int,int> a3(5, 7, 8);
    a3.displayData();
    a3.product();
    a3.print();
    return 0;
}