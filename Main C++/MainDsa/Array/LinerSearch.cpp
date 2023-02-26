#include <iostream>
using namespace std;

bool search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    // check whether the element is present in the array or not
    int arr[7] = {1, 4, 56, 2, -6, -1, 3};

    int key;
    cout << "Enter the element you want to search: ";
    cin >> key;

    bool isPresent = search(arr, 7, key);

    if (isPresent)
    {
        cout << "Element is present in the array" << endl;
    }
    else
    {
        cout << "Element is not present in the array" << endl;
    }
    return 0;
}