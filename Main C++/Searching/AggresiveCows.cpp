#include <iostream>
using namespace std;

bool isPossible(int stalls[], int n, int c, int mid)
{
    int cows = 1;
    int last = stalls[0];
    for (int i = 0; i < n; i++)
    {
        if (stalls[i] - last >= mid)
        {
            cows++;
            if (cows == c)
                return true;
            last = stalls[i];
        }
    }
    return false;
}

int aggresiveCows(int stalls[], int n, int c)
{
    int s = 0;
    int max = stalls[n - 1];

    int e = max;
    int ans = 0;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(stalls, n, c, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[5] = {1, 2, 4, 8, 9};
    int n = 5;
    int c = 2;
    cout << aggresiveCows(arr, n, c) << endl;
    return 0;
}