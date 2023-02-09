#include <iostream>
#include <vector>
using namespace std;

template <class T>

void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v1;    // zero length vector
    vector<int> v2(5); // 5 int length vector

    vector<char> v3(5);      // 5 char length vector
    vector<char> v3(5, 'a'); // 5 char length vector with all elements as 'a'
    v3.push_back('a');       // it will push the elements at the end of the vector
    display(v3);

    vector<int> v4(v3); // it will copy the elements of v3 to v4

    vector<int> v4(5, 10); // 5 int length vector with all elements as 10
    display(v4);

    int j, size;
    cout << "Enter the elements of the vector" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element" << endl;
        cin >> j;
        v1.push_back(j);
    }
    display(v1);
    v1.pop_back();
    vector<int>::iterator iter = v1.begin(); // iterator is a pointer which points to the first element of the vector
    v1.insert(iter, 8);                      // it will insert 8 at the 0th index
    v1.insert(iter + 3, 8);                  // it will insert 8 at the 3rd index
    v1.insert(iter + 3, 3, 8);               // it will insert 8 at the 3rd index 3 times
    display(v1);

    return 0;
}