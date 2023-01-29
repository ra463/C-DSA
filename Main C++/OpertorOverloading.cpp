#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A(int a)
    {
        this->a = a;
    }
    void operator++()
    {
        a = a + 5;
    }
    void display()
    {
        cout << "value of a is " << a << endl;
    }
};

int main()
{
    A obj(10);
    obj.display();
    ++obj;
    obj.display();
    return 0;
}