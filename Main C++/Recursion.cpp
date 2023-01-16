#include <iostream>
using namespace std;

// recursive function -- factorial
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

// step by step solution of factorial(4) -- recursive function
// factorial(4) = 4 * factorial(3)
// factorial(4) = 4 * 3 * factorial(2)
// factorial(4) = 4 * 3 * 2 * factorial(1)
// factorial(4) = 4 * 3 * 2 * 1

// recursive function -- fibonacci

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{
    int a;
    cout << "Enter te value: " << endl;
    cin >> a;
    cout << "The factorial of " << a << " is " << factorial(a) << endl;

    // to find index of fibonacci series number
    cout << "The fabonacci series number " << a << " index is " << fibonacci(a) << endl;

    // to print the fibonacci series
    int x, i = 0;
    cout << "Enter the number of terms of series : ";
    cin >> x;
    cout << "\nFibonnaci Series : ";
    while (i < x)
    {
        cout << " " << fibonacci(i);
        i++;
    }

    return 0;
}