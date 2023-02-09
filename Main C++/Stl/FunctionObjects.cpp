#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    // Function objects are objects that can be called like functions
    // They are used to pass functions as arguments to other functions
    // They are also used to store state
    // They are also used to overload operators
    // They are also used to create function objects

    int arr[] = {21, 12, 3, 74, 5};
    // "greater" is a function object that is used to sort in descending order
    sort(arr, arr + 5, greater<int>());
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}