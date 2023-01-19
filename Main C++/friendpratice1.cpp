#include <iostream>
using namespace std;

// forward declaration
class c2;

class c1
{
    int a;
    friend void swap(c1 &, c2 &);

public:
    void setdata(int x)
    {
        a = x;
    }
    void display()
    {
        cout << "the value of a is " << a << endl;
    }
};

class c2
{
    int b;
    friend void swap(c1 &, c2 &);
public:
    void setdata(int y)
    {
        b = y;
    }
    void display()
    {
        cout << "the value of b is " << b << endl;
    }
};

void swap(c1 &x, c2 &y)
{
    int temp = x.a;
    x.a = y.b;
    y.b = temp;
}

int main()
{
    c1 o1;
    c2 o2;

    o1.setdata(10);
    o2.setdata(20);

    cout << "Before swap ";
    o1.display();
    cout << "Before swap ";
    o2.display();

    swap(o1, o2);

    cout << "After swap ";
    o1.display();
    cout << "After swap ";
    o2.display();

    return 0;
}