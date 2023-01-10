#include <iostream>
using namespace std;

int r = 20;

int main()
{
    int a, b, r;
    cout << "Enter the value of a: " << endl;
    cin >> a;
    cout << "Enter the value of b: " << endl;
    cin >> b;

    r = a + b;
    cout << "Sum of a anb b is: " << r << endl;

    cout << "Value of global r is: " << ::r << endl;

    // by default c++ takes decimal values as double
    // we have to add f to specify the number is float or double

    float f = 3.14f;
    double d = 3.14l;

    cout << "size of pi is: " << sizeof(3.14) << endl;
    cout << "size of pi is: " << sizeof(3.14f) << endl;
    cout << "size of pi is: " << sizeof(3.14l) << endl;
    cout << "size of f is: " << sizeof(f) << endl;
    cout << "size of d is: " << sizeof(d) << endl;

    // Reference Variables

    int x = 10;
    int &y = x;
    cout << "Value of x is: " << x << endl;
    cout << "Value of y is: " << y << endl;

    // Typecasting

    int m = 11;
    float n = 11.5;

    cout << "Value of m is: " << float(m) << endl;
    cout << "Value of n is: " << int(n) << endl;

    return 0;
}
