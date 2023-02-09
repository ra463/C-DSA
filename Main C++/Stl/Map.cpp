#include <iostream>
#include <map>
using namespace std;

int main()
{
    // map should have unique keys and it is sorted by default
    map<string, int> m1;
    // insert
    m1["abc"] = 1;
    m1["def"] = 2;
    m1["ghi"] = 3;
    m1.insert({{"rp", 6}, {"ef", 7}, {"gi", 8}});

    // print

    map<string, int>::iterator it;
    for (it = m1.begin(); it != m1.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    cout << "The size of map is " << m1.size() << endl;
    return 0;
}>