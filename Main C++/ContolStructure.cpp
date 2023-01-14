#include <iostream>
using namespace std;

int main()
{
    // int i = 0;
    // while (i < 10)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    int age;
    cout << "Enter your age: ";
    cin >> age;

    // selection control structure (if-else)
    if (age < 16)
    {
        cout << "You are not eligible to vote" << endl;
    }
    else if (age == 17)
    {
        cout << "You are eligible to vote on a condition" << endl;
    }
    else if (age == 18 || age == 19)
    {
        cout << "You are eligible to vote on a pass" << endl;
    }
    else
    {
        cout << "You are eligible to vote" << endl;
    }

    // selection control structure (switch-case)

    switch (age)
    {
    case 16:
        cout << "You are not eligible to vote" << endl;
        break;

    case 18:
        cout << "You are eligible to vote" << endl;
        break;

    default:
        cout << "You are criminal" << endl;
        break;
    }
    return 0;
}