#include <iostream>
#include <vector>
using namespace std;

void merge(int arr1[], int m, int arr2[], int n, int arr3[])
{
    int i = 0, j = 0, k = 0;

    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    while (i < m)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    while (j < n)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr1[3] = {1, 3, 5};
    int arr2[5] = {2, 4, 6, 8, 10};

    int arr3[8] = {0};

    merge(arr1, 3, arr2, 5, arr3);

    print(arr3, 8);
    return 0;
}