#include <iostream>
using namespace std;

int getMax(int arr[], int n)
{
    int maximum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maximum = max(maximum, arr[i]);
    }
    return maximum;
}

int getMin(int arr[], int n)
{
    int minimum = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        minimum = min(minimum, arr[i]);
    }
    return minimum;
}

int main()
{

    int size;
    cin >> size;

    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "The max element is " << getMax(arr, size) << endl;
    cout << "The min element is " << getMin(arr, size) << endl;

    return 0;
}