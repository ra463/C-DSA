#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int a = 10;
    cout << a << endl;
    // // a = 45; // Error as constant is used so value cant be changed
    cout << a << endl;

    // Manipulators

    int a = 1, b = 22, c = 333, d = 4444;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    // setw will set the width(format the data in right) of the output

    cout << setw(4) << a << endl;
    cout << setw(4) << b << endl;
    cout << setw(4) << c << endl;
    cout << setw(4) << d << endl;

    // operator precedence

    int x = 3, y = 4;

    // int z = x * 8 + y * 2 - 45 / 5 + 2; not right way to do it

    int z = (x * 8) + (y * 2) - (45 / 5) + 2; // right way to do it

    cout << z << endl;

    return 0;
}