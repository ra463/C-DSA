#include <iostream>
#include <queue>
using namespace std;

// A C++ priority queue is a type of container adapter, specifically designed such that the first element of the queue is either the greatest or the smallest of all elements in the queue, and elements are in non-increasing or non-decreasing order (hence we can see that each element of the queue has a priority {fixed order}).
// By default, the container is a max heap, so the largest element is always the first element.
// Elements are in non-increasing order (the highest value is at the top) or in the case of min heap, in non-decreasing order (the lowest value is at the top).

int main()
{
    // max_heap
    priority_queue<int> maxi;

    // min_heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(10);
    maxi.push(20);
    maxi.push(30);
    maxi.push(0);
    maxi.push(5);

    mini.push(10);
    mini.push(20);
    mini.push(30);
    mini.push(0);
    mini.push(5);

    int n = maxi.size();
    int m = mini.size();

    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }

    cout<<endl;

    for (int i = 0; i < n; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }

    return 0;
}