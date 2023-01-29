#include <iostream>
using namespace std;

class Base
{
public:
    int x;
    void print()
    {
        cout << "Base "
             << "and x is: " << x << endl;
    }
};

class Derived1 : public Base
{
public:
    int y;
    void print()
    {
        cout << "Base class"
             << " and x is: " << x << endl; // base class member accessed by derived class object
        cout << "Derived1"
             << " and y is: " << y << endl;
    }
};

int main()
{
    Base *pBase;
    Base base_obj;
    Derived1 derived1_obj;

    pBase = &derived1_obj; // baseclass pointer pointing to derivedclass object
    pBase->x = 10;         // baseclass pointer accessing baseclass member
    // pBase->y = 20; // this will give error baseclass pointer cannot access derivedclass member

    // If we make a base class pointer pointing to dervied class oject and
    // try to access the derived class member, it will not work. it will run base class member only.
    // because the pointer is of base class that's why it will run base class member only.
    pBase->print();

    Derived1 *pDerived1;
    pDerived1->y = 20;
    // This is runtime polymorphism
    // ----------This is called late binding------------
    pDerived1->x = 34;
    pDerived1->print();
    return 0;
}