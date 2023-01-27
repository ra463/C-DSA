// Make the given array a reverse array by using pointer only

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    // reverse the array
    int size = sizeof(arr) / sizeof(*arr);
    cout << sizeof(arr) << endl;
    cout << "Length of array is: " << size << endl;

    int *ptrstart = arr;
    int *ptrend = arr + size - 1;

    while (ptrstart < ptrend)
    {
        int temp = *ptrstart;
        *ptrstart = *ptrend;
        *ptrend = temp;
        ptrstart++;
        ptrend--;
    }

    int i = 0;
    for (cout << "Reverse array is "; i < size; i++)
    {
        // cout << arr[i] << " "; we can do this also
        cout << *(arr + i) << " ";
    }
}