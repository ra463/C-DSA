// Last and First Occurance of a number in a sorted array
#include <iostream>
using namespace std;

int firstOccurance(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = 0;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;

        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOccurance(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = 0;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[9] = {1, 2, 3, 4, 4, 4, 4, 4, 5};

    cout << "The First Occurance of key 4 is: " << firstOccurance(arr, 9, 4) << endl;
    cout << "The Last Occurance of key 4 is: " << lastOccurance(arr, 9, 4) << endl;
    cout << "Total number of Occurance of Key 4 is: " << lastOccurance(arr, 9, 4) - firstOccurance(arr, 9, 4) + 1 << endl;
    return 0;
}