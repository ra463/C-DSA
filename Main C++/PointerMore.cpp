#include <iostream>
using namespace std;

int main()
{
    // Basic Pointer
    int a = 10;
    int *p = &a;

    cout << "The value of a is " << *p << endl;

    // new keyword
    int *ptr = new int(17);
    cout << "The value of ptr is " << *ptr << endl;

    // Array using new keyword
    int *arr = new int[3];

    arr[0] = 1;
    // *(arr + 1) = 2; we can also use this
    arr[1] = 2;
    arr[2] = 3;
    // ++arr;
    // ++arr;

    // delete keyword
    // delete arr;
    delete[] arr; // this will delete the memory allocated to the array

    cout << "The value of arr[0] is " << arr[0] << endl;

    return 0;
}