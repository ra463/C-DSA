// Stock Span Problem
#include <iostream>
// #include <stack>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int a[] = {100, 80, 60, 70, 60, 75, 85}, n = 7;
    int a[] = {10, 4, 5, 90, 120, 80, 85}, n = 6;

    // stack<int> s;
    // vector<int> v;

    // for (int i = 0; i < n; i++)
    // {
    //     if (s.empty())
    //     {
    //         v.push_back(-1);
    //     }
    //     else if (!s.empty() && a[s.top()] > a[i])
    //     {
    //         v.push_back(s.top());
    //     }
    //     else if (!s.empty() && a[s.top()] <= a[i])
    //     {
    //         while (!s.empty() && a[s.top()] <= a[i])
    //         {
    //             s.pop();
    //         }
    //         if (s.empty())
    //         {
    //             v.push_back(-1);
    //         }
    //         else
    //         {
    //             v.push_back(s.top());
    //         }
    //     }
    //     s.push(i);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     v[i] = i - v[i];
    //     cout << v[i] << " ";
    // }

    stack<pair<int, int>> s;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        while (s.empty() == false && s.top().first <= a[i])
            {
                s.pop();
            }
        if (s.empty() == true)
        {
            v.push_back(i+1);
        }
        else
        {
            v.push_back(i-s.top().second);
        }

        s.push({a[i], i});
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}