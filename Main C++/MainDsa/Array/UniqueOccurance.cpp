// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    unordered_map<int, int> m;
    unordered_set<int> s;
    unordered_set<int> s1;
    for (int i = 0; i < arr.size(); i++)
    {
        m[arr[i]]++;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        s1.insert(arr[i]);
    }
    for (auto it = m.begin(); it != m.end(); it++)
    {
        s.insert(it->second);
    }
    if (s.size() == s1.size())
    {
        return true;
    }
    return false;
};

int main()
{

    vector<int> v1 = {1, 2, 2, 1, 1, 3};
    bool res = uniqueOccurrences(v1);

    if (res)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}