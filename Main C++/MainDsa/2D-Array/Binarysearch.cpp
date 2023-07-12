#include <iostream>
#include <vector>
using namespace std;

bool binarysearch(vector<vector<int>> &vec, int target)
{
    int row = vec.size();
    int col = vec[0].size();

    int start = 0;
    int end = row * col - 1;

    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (vec[mid / col][mid % col] == target)
        {
            return mid;
        }

        if (vec[mid / col][mid % col] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return false;
}

int main()
{
    vector<vector<int>> vec{{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
                            {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
                            {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
                            {31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
                            {41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
                            {51, 52, 53, 54, 55, 56, 57, 58, 59, 60},
                            {61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
                            {71, 72, 73, 74, 75, 76, 77, 78, 79, 80},
                            {81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
                            {91, 92, 93, 94, 95, 96, 97, 98, 99, 100}};

    int target;
    cin >> target;

    if (binarysearch(vec, target))
    {
        cout << "Found" << endl;
        // cout << "Index of " << target << " is: " << binarysearch(vec, target) << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
}