#include <iostream>
#include <map>
using namespace std;

int main()
{
    // ele=ments are sorted by default according to the key
    // map should have unique keys and it is sorted by default
    map<string, int> m1;
    // insert
    m1["abc"] = 1;
    m1["def"] = 2;
    m1["ghi"] = 3;
    m1.insert({{"rp", 6}, {"ef", 7}, {"gi", 8}});

    // print

    // map<string, int>::iterator it;
    // for (it = m1.begin(); it != m1.end(); it++)
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }

    for (auto i : m1) // print only the keys
    {
        cout << i.first << " ";
    }

    cout << endl;

    for (auto i : m1) // print the keys and values of map
    {
        cout << i.first << " " << i.second << " ";
    }

    cout << "The size of map is " << m1.size() << endl;

    // count
    cout << "Present: " << m1.count("abc") << endl;

    // erase

    m1.erase("abc");
    cout << "Present: " << m1.count("abc") << endl;

    for (auto i : m1)
    {
        cout << i.first << " " << i.second << " ";
    }

    auto it = m1.find("ghi");

    cout<<endl;

    for (auto i = it; i != m1.end(); i++)
    {
        cout << (*i).first << " " << i->second << " ";
    }

    return 0;
}