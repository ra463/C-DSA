#include <iostream>
using namespace std;

int main()
{
    int arr[32], i;
    int n;
    while (1)
    {
        cin >> n;
        for (i = 0; i < 32; i++)
        {
            arr[i] = 0;
        }
        if (n < 0)
        {
            int d;
            d = -n;
            int digit, bit, flag;
            flag = 0;
            i = 31;
            while (d != 0)
            {
                bit = d & 1;
                if (flag == 0)
                {
                    arr[i] = bit;
                    if (bit == 1)
                    {
                        flag = 1;
                    }
                }
                else
                {
                    arr[i] = (!bit);
                }
                d = d >> 1;
                i--;
            }
            while (i >= 0)
            {
                arr[i] = 1;
                i--;
            }
            for (i = 0; i < 32; i++)
            {
                cout << arr[i];
            }
        }
        else
        {
            int digit, bit;
            i = 31;
            while (n != 0)
            {
                bit = n & 1;
                arr[i] = bit;
                n = n >> 1;
                i--;
            }
            for (i = 0; i < 32; i++)
            {
                cout << arr[i];
            }
        }
        cout << endl;
    }
}