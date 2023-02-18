#include <iostream>
using namespace std;

int main()
{
    // int i = 1;
    // while (i <= 3)
    // {
    //     int j = 1;
    //     int count = i;
    //     // char start = 'A' + 3 - i;
    //     while (j <= 3)
    //     {
    //         char ch = 'A' + count - 1;
    //         cout << ch << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    int i = 1;
    while (i <= 5)
    {

        // space print karo
        int space = 5 - i;
        while (space)
        {
            cout << " ";
            space--;
        }

        // print 1st triangle
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }

        // print 2nd triangle
        int k = i - 1;
        while (k)
        {
            cout << k;
            k--;
        }
        cout << endl;
        i++;
    }
    return 0;
}