#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;

    char ch;
    cout << "Enter the operator" << endl;
    cin >> ch;

    switch (ch)
    {
    case '+':
        cout << "a+b = " << a + b << endl;
        break;
    case '-':
        cout << "a-b = " << a - b << endl;
        break;
    case '*':
        cout << "a*b = " << a * b << endl;
        break;
    case '/':
        if (b == 0)
        {
            cout << "Cannot divide by zero" << endl;
        }
        else
        {
            cout << "a/b = " << a / b << endl;
        }
        break;
    case '%':
        cout << "a%b = " << a % b << endl;
        break;
    default:
        cout << "Invalid operator" << endl;
    }

    return 0;
}