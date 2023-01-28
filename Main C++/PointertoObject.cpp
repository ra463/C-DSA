#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    A()
    {
        cout << "Constructor called" << endl;
    }
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << "a=" << a << endl
             << "b=" << b << endl;
    }
};

int main()
{
    // A obj;
    // A *ptr; Pointer to object--> we can store address of object
    // we can also create object using pointer with new keyword in this way also
    A *ptr = new A;
    // (*ptr).setData(3, 4); is also called by this way i.e. ARROW OPERATOR ptr->setData(3, 4);
    ptr->setData(3, 4);
    (*ptr).showData();
    return 0;
}