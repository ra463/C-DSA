#include <iostream>
using namespace std;

bool isvalid(int arr[], int n, int m, int mid)
{
    int student = 1; // student count
    int Pagesum = 0; // sum of pages
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            return false;
        }
        if (Pagesum + arr[i] > mid)
        {
            student++;       // increment student count
            if (student > m) // if student count is greater than m
            {
                return false;
            }
            Pagesum = arr[i];
        }
        else
        {
            Pagesum += arr[i];
        }
    }
    return true;
}

int allocatebook(int arr[], int n, int m)
{
    int start = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int end = sum;
    int ans = 0;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isvalid(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 2;
    cout << "The minimum no of pages are " << allocatebook(arr, n, m);

    return 0;
}