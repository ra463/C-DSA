#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v{29, 72, 98, 13, 87, 66, 52, 51, 36};

    for (int i = 1; i < v.size(); i++)
    {
        int key = v[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (v[j] > key)
            {
                // shift element to right
                v[j + 1] = v[j];
            }
            else
            {
                // if element is smaller than key, then break
                break;
            }
        }
        v[j + 1] = key;
    }

    cout << "Sorted array is: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}