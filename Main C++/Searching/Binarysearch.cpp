#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

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
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    int key;
    cin >> key;

    cout << "Index of " << key << " is: " << binarySearch(arr, 7, key) << endl;
    return 0;
}