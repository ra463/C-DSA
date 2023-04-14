#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int maxi = INT_MIN;
    int rowIndex = 0;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << "The sum of " << i + 1 << "st row is: " << sum << endl;

        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << "The maximum sum is: " << maxi << " and the row index is: " << rowIndex << endl;

    cout << endl;
    for (int j = 0; j < 3; j++)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += arr[i][j];
        }
        cout << "The sum of " << j + 1 << "st column is: " << sum << endl;
    }
    return 0;
}