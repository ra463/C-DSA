#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    while (i <= 5)
    {
        int j = 1;
        while (j <= 5 - i + 1)
        {
            cout << j;
            j++;
        }

        int star = i - 1;
        while (star)
        {
            cout << "*";
            star--;
        }

        int star2 = i - 1;
        while (star2)
        {
            cout << "*";
            star2--;
        }

        int k = 5 - i + 1;
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