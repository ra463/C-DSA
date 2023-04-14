#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    vector<int> ans;

    int row = arr.size();    // num of rows
    int col = arr[0].size(); // num of columns

    int count = 0;
    int total = row * col; // total elements

    int startrow = 0;
    int startcol = 0;
    int endrow = row - 1;
    int endcol = col - 1;

    while (count < total)
    {

        // print start row
        for (int i = startcol; count < total && i <= endcol; i++)
        {
            ans.push_back(arr[startrow][i]);
            count++;
        }
        startrow++;

        // print end col
        for (int i = startrow; count < total && i <= endrow; i++)
        {
            ans.push_back(arr[i][endcol]);
            count++;
        }
        endcol--;

        // print end row
        for (int i = endcol; count < total && i >= startcol; i--)
        {
            ans.push_back(arr[endrow][i]);
            count++;
        }
        endrow--;

        // print start col
        for (int i = endrow; count < total && i >= startrow; i--)
        {
            ans.push_back(arr[i][startcol]);
            count++;
        }
        startcol++;
    }

    // print vector ans

    cout << "The Sprial Print of 2D array is: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}