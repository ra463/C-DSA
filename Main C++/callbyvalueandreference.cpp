#include <iostream>
using namespace std;

// call by value
// this will not swap the values of x and y 
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// call by reference using pointer
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// call by reference using reference variable
void swapPointerVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    cout << "Before swap: " << x << " " << y << endl;
    // swap(x, y); this will not swap the values of x and y
    // swapPointer(&x, &y); this will swap the values of x and y and is called call by reference using pointer
    swapPointerVar(x, y); // this will swap the values of x and y and is called call by reference using reference variable
    cout << "After swap: " << x << " " << y << endl;
    return 0;
}