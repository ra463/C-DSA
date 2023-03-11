#include <iostream>
using namespace std;

int square(int x)
{
    int s = 0, e = x;
    int mid = s + (e - s) / 2;
    int ans = 0;

    while (s < e)
    {
        int sq = mid * mid;
        if (sq == x)
        {
            return mid;
        }
        if (sq > x)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
            ans = mid;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double pointSol(int x, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < x; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int n = sizeof(arr) / sizeof(arr[0]);
    int x = 11;
    int tempSol = square(x);
    cout << "The square of integer " << x << " is: " << tempSol << endl;
    cout << "The square of upto 3 decimal of " << x << " is: " << pointSol(x, 3, tempSol) << endl;
    return 0;
}