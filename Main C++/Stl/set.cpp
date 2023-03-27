#include <iostream>
#include <set>
using namespace std;

// A set is a type of associative container in which each element has to be unique, because the value of the element identifies it. The value of the element cannot be modified once it is added to the set, though it is possible to remove and add the modified value of that element.

int main()
{
    set<int> s;

    s.insert(10);
    s.insert(20); // only unique elements are inserted
    s.insert(20);
    s.insert(20);
    s.insert(30);
    s.insert(0);
    s.insert(5);

    for (int i : s)
    {
        cout << i << " ";
    }

    cout << endl;
    set<int>::iterator it = s.begin();
    it++;        // it will point to 2nd element
    s.erase(it); // erase by index

    for (int i : s)
    {
        cout << i << " ";
    }

    cout << endl;

    // to check if an element is present in set or not
    s.count(5) ? cout << "10 is present" : cout << "10 is not present";

    // find function returns an iterator to the element if it is present in the set, else it returns the iterator to the end of the set

    cout << endl;
    // set<int>::iterator it2 = s.find(20);
    auto it2 = s.find(20);

    for (auto it = it2; it != s.end(); it++)
        cout << *it << " ";
    return 0;
}