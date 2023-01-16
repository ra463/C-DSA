#include <iostream>
using namespace std;

// Function prototyping
int multiply(int a, int b);
void fun();

int main()
{
    int x, y;
    // here x and y are called actual parameters
    cout << "Enter first number: " << endl;
    cin >> x;
    cout << "Enter second number: " << endl;
    cin >> y;
    cout << "The product of two numbers is: " << multiply(x, y) << endl;
    fun();
    return 0;
}

int multiply(int a, int b)
{
    // here a and b are called formal parameters
    int c = a * b;
    return c;
}

void fun()
{
    cout << "Hello World" << endl;
}