#include <iostream>
using namespace std;

template <class T>
class Rachit
{
public:
    T a;
    T b;
    Rachit(T x, T y)
    {
        a = x;
        b = y;
    }

    void display();
};

template <class T>
void Rachit<T>::display()
{
    cout << "The value of a and b is " << a << "," << b << endl;
}

int main()
{
    Rachit<int> r1(4, 5);
    r1.display();
    return 0;
}