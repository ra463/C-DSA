#include <iostream>
using namespace std;

// inline function
inline int sum(int a, int b) // inline function increases the speed of the program
{
    return a + b;
}

// static variable
int sum1(int a, int b) // static variale
{
    static int c = 0; // static variable is initialized only once
    c = c + 1;        // c is not initialized again and again
    return a + b + c;
}

// default argument
float width(int a, float b = 2.5)
{
    // b = 2.5; // default argument
    return a * b;
}

int main()
{
    int x, y;
    cout << "Enter the value of x and y: ";
    cin >> x >> y;
    cout << "sum is: " << sum1(x, y) << endl;
    cout << "sum is: " << sum1(x, y) << endl;

    // if we wont give the value of b then it will take the default value of b
    cout << "The area of the rectangle is: " << width(5) << endl;
    // but if we give the value of b then it will take the value of b
    cout << "The area of the rectangle is: " << width(5, 3.5) << endl;

    // const variable
    const int myNum = 15; // myNum will always be 15
    myNum = 10;           // error: assignment of read-only variable 'myNum'

    return 0;
}