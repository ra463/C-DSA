#include <iostream>
using namespace std;

class A
{
    int count=1;

public:
    A()
    {
        cout << "Constructor" << endl;
        count++;
        cout << "Count = " << count << endl;
    }
    ~A()
    {
        cout << "Destructor" << endl;
    }
};

int main()
{
    A a1;
    {
        cout << "Inside block" << endl;
        A a2, a3;
        cout << "Leaving block" << endl;
    }
    cout << "Outside block" << endl;
    return 0;
}