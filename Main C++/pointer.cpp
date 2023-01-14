#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    int *p = &a;
    //& is the address of operator
    // * is the dereference operator

    cout << "The value of a is " << *p << endl;
    cout << "The address of a is " << p << endl;
    cout << "The address of a is " << &a << endl;

    // Pointer to pointer
    int **q = &p;

    cout << "The value of a is " << **q << endl;
    cout << "The address of a is " << *q << endl;
    return 0;
}