#include <iostream>
using namespace std;

template <class T>

class A
{
    T a, b;

public:
    A(T x, T y)
    {
        a = x;
        b = y;
    }

    void displayData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }

    T sum()
    {
        return a + b;
    }

    void print()
    {
        cout << "The sum of a and b is " << sum() << endl;
    }
};

int main()
{
    A<float> a1(4.34, 6.79);
    a1.displayData();
    a1.sum();
    a1.print();

    A<int> a2(4, 6);
    a2.displayData();
    a2.sum();
    a2.print();
    return 0;
}