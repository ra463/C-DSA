#include <iostream>
using namespace std;

int unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}

int main()
{
    int arr[6] = {2, 2, 4, 3, 3};

    cout << unique(arr, 6) << endl;
    return 0;
}