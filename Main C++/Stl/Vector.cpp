#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2(5, 1);
    vector<int> v3(v2);

    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    cout << v1.front() << endl;
    cout << v1.back() << endl;

    v1.pop_back();

    cout << v1.front() << endl;
    cout << v1.back() << endl;

    cout << v1.capacity() << endl;
    cout << v1.size() << endl;

    v1.clear(); // it will only clear the elements of the vector but not the capacity

    cout << v1.capacity() << endl;
    cout << v1.size() << endl;
    return 0;
}