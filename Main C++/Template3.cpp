#include <iostream>
using namespace std;

template <class T1 = float, class T2 = int, class T3 = char>
class myClass
{
    T1 a;
    T2 b;
    T3 c;

public:
    myClass(T1 x, T2 y, T3 z)
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
};

int main()
{
    myClass<> obj(4.34, 6, 'a');
    obj.displayData();

    myClass<char,char,int> obj1('r', 's', 9);
    obj1.displayData();
    return 0;
}