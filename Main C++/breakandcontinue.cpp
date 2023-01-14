#include <iostream>
using namespace std;

int main()
{

    // break statement
    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            break;
        }
        cout << i << endl;
    }

    // continue statement
    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}