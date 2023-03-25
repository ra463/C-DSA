#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vect{29, 72, 98, 13, 87, 66, 52, 51, 36};

    // for (int i = 0; i < vect.size() - 1; i++) its correct
    for (int i = 0; i < vect.size() - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < vect.size() - i - 1; j++)
        {
            if (vect[j] > vect[j + 1])
            {
                swap(vect[j], vect[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            // if no two elements were swapped by inner loop, then break
            // it means array is already sorted
            break;
        }
    }

    cout << "Sorted array is: ";
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << " ";
    }

    return 0;
}