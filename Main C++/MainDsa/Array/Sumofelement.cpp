#include <iostream>
using namespace std;

int printSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int size;
    cin >> size;

    int arr[10];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Sum of all elements of Array is " << printSum(arr, size) << endl;

    return 0;
}