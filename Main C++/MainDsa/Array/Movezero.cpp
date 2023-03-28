#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {0, 1, 0, 3, 12};

    int i = 0;
    for (int j = 0; j < 5; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}