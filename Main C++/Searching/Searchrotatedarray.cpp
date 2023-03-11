#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarySearch(int arr[], int start, int end, int key)
{
    int s = start;
    int e = end;

    int mid = s + (e - s) / 2; // (s+e)/2

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {6, 7, 8, 9, 1, 2, 3}; // rotated array
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cin >> key;

    int pivot = getPivot(arr, n);

    if (key >= arr[pivot] && key <= arr[n - 1])
    {
        cout << "The target " << key << " is present in index: " << binarySearch(arr, pivot, n - 1, key);
    }
    else
    {
        cout << "The target " << key << " is present in index: " << binarySearch(arr, 0, pivot - 1, key);
    }
    return 0;
}