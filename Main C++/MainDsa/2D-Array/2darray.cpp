#include <iostream>
using namespace std;

bool search(int arr[][4], int row, int col, int key)
{
    // Search in row wise and column wise
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == key)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][4];

    // Input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    // Output
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // linear search

    cout << "Enter the key to search: ";
    int key;
    cin >> key;
    if (search(arr, 3, 4, key))
    {
        cout << "Key found" << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }

    return 0;
}