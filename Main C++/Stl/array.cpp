#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5}; // array of size 5

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Element in 2nd index is: " << arr.at(2) << endl;

    cout << "Array is empty or not: " << arr.empty() << endl; // 0 means false

    cout << "First elemt in array is: " << arr.front() << endl; // first element

    cout << "last elemt in array is: " << arr.back() << endl; // last element

    return 0;
}