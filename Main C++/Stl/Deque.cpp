#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d1;

    d1.push_back(1);
    d1.push_back(2);
    d1.push_front(4);
    d1.push_back(3);

    for (int i = 0; i < d1.size(); i++)
    {
        cout << d1[i] << " ";
    }

    cout << endl;

    d1.pop_back();
    d1.pop_front();

    for (int i = 0; i < d1.size(); i++)
    {
        cout << d1[i] << " ";
    }

    cout << endl;

    cout << d1.front() << endl;
    cout << d1.back() << endl;
    cout << d1.at(1) << endl;

    cout << "Empty or not: " << d1.empty() << endl;
    cout << "Size: " << d1.size() << endl;

    // how to delete element in deque
    d1.erase(d1.begin(), d1.begin() + 1);
    cout << "Size: " << d1.size() << endl;

    return 0;
}