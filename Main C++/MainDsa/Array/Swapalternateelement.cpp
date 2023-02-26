#include <iostream>
using namespace std;

void alternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
            // i += 2;
        }
    }
}

int main()
{

    int even[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int odd[8] = {23,45,2,65,8,9,23,6};

    alternate(even, 9);
    alternate(odd, 8);

    cout << "The alternate swaped array is: ";
    for (int i = 0; i < 9; i++)
    {
        cout << even[i] << " ";
    }
    cout << endl;

    cout << "The alternate swaped array is: ";
    for (int i = 0; i < 8; i++)
    {
        cout << odd[i] << " ";
    }
    cout << endl;
    return 0;
}