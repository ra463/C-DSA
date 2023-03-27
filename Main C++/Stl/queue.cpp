#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q1;

    q1.push(1);
    q1.push(2);
    q1.push(3);

    cout << q1.front() << endl; // Get the front element
    cout << q1.back() << endl;  // Get the back element
    cout << q1.size() << endl;  // Get the size of the queue

    q1.pop(); // Remove the front element

    cout << q1.front() << endl; // Get the front element
    cout << q1.back() << endl;  // Get the back element
    cout << q1.size() << endl;  // Get the size of the queue

    return 0;
}