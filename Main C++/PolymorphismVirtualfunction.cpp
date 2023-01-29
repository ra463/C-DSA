#include <iostream>
using namespace std;

class Base
{
public:
    int x;
    virtual void print()
    {
        cout << "Base class print function" << endl;
    }
    void show()
    {
        cout << "Base class show function" << endl;
    }
    void display()
    {
        cout << "Value of x is: " << x << endl;
    }
};

class Derived : public Base
{
public:
    int y;
    void print()
    {
        cout << "Derived class print function" << endl;
    }
    void show()
    {
        cout << "Derived class show function" << endl;
    }
    void display()
    {
        cout << "Value of x is: " << x << endl;
        cout << "Value of y is: " << y << endl;
    }
};

int main()
{
    Base *ptr;
    Base base_obj;
    Derived derived_obj;

    ptr = &derived_obj;
    ptr->x = 24;
    ptr->print();
    ptr->show();
    ptr->display();

    Derived *ptr1;
    ptr1 = &derived_obj;
    ptr1->x = 65;
    ptr1->y = 34;
    ptr1->print();
    ptr1->show();
    ptr1->display();
    return 0;
}