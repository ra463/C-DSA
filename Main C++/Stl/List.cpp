#include <iostream>
#include <list>
using namespace std;

void display(list<int> &l)
{
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> l1; // empty list of 0 length

    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);

    display(l1);

    // how to insert elements in the list
    list<int> l2(3); // list of 5 integer elements
    list<int>::iterator it;
    it = l2.begin();
    int j;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the value of " << i << "th element: ";
        cin >> j;
        *it = j;
        it++;
    }
    display(l2);
    // l2.pop_back();
    // l2.pop_front();
    // l2.remove(2);
    l2.sort();
    l1.merge(l2);
    l1.reverse();
    display(l1);

    return 0;
}