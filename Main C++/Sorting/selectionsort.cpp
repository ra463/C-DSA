#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vect{29, 72, 98, 13, 87, 66, 52, 51, 36};
    // vect.push_back(10);
    // vect.push_back(20);
    // vect.push_back(30);
    for (int i = 0; i < vect.size() - 1; i++)
    {
        int mini = i;

        for (int j = i + 1; j < vect.size(); j++)
        {
            if (vect[j] < vect[mini])
            {
                mini = j;
            }
        }
        swap(vect[i], vect[mini]);
    }

    cout<<"Sorted array is: ";
    for (int i = 0; i < vect.size(); i++)
    {
        cout<<vect[i]<<" ";
    }

    return 0;
}