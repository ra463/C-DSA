#include <iostream>
using namespace std;

void sortArray(int arr[], int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        while (arr[start] == 0 && start < end)
        {
            start++;
        }
        while (arr[end] == 1 && start < end)
        {
            end--;
        }

        if (start < end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int a[8] = {1, 0, 1, 1, 0, 1, 1, 0};

    sortArray(a, 8);
    return 0;
}