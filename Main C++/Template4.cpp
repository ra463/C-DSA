#include <iostream>
using namespace std;

template <class T1, class T2>
float avg(T1 a, T2 b)
{
    return (a + b) / 2.0;
}

template <class T>
swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;

    return 0;
}

int main()
{
    float res = avg(4, 5.5);
    cout << "The average of two number is " << res << endl;

    float res1 = avg(5, 5.5);
    cout << "The average of two number is " << res1 << endl;

    int a = 8, b = 9;
    swapp(a,b);
    cout << "The value of a and b is " << a << " " << b << endl;
    return 0;
}