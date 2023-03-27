#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l1;
    list<int> l2(5, 10); // 5 elements with value 10

    l1.push_back(1);
    l1.push_front(2);

    l1.erase(l1.begin()); // Erase the first element

    for (int i : l1)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int i : l2)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Size: " << l1.size() << endl;
    return 0;
}