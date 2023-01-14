#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    a[0] = 10; // you can also change the value of the array

    cout << "The value of a[0] is " << a[0] << endl;
    cout << "The value of a[1] is " << a[1] << endl;
    cout << "The value of a[2] is " << a[2] << endl;
    cout << "The value of a[3] is " << a[3] << endl;
    cout << "The value of a[4] is " << a[4] << endl;

    // print array with loop

    for (int i = 0; i < 5; i++)
    {
        cout << "The value of a[" << i << "] is " << a[i] << endl;
    }

    int i = 0;
    while (i < 5)
    {
        cout << "the value of array is" << a[i] << endl;
        i++;
    }

    // pointer to array

    int *p = a;

    cout << "The value of a[0] is " << *p << endl;
    cout << "The value of a[1] is " << *(p + 1) << endl;
    cout << "The value of a[2] is " << *(p + 2) << endl;
    cout << "The value of a[3] is " << *(p + 3) << endl;
    cout << "The value of a[4] is " << *(p + 4) << endl;

    // to change the address of the pointer
    cout << *(p++) << endl; // 10
    cout << *p << endl;     // 2
    cout << *(++p) << endl; // 3

    return 0;
}