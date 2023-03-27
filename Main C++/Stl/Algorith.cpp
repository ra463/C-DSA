#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);

    cout << "Element are present or not: " << binary_search(v1.begin(), v1.end(), 3) << endl;

    cout << "Lower bound of 3 is: " << lower_bound(v1.begin(), v1.end(), 3) - v1.begin() << endl;
    cout << "Upper bound of 3 is: " << upper_bound(v1.begin(), v1.end(), 3) - v1.begin() << endl;

    int a = 5, b = 10;

    cout << "Greatest number less than 5 is: " << __gcd(a, b) << endl;
    cout << "Max is: " << max(a, b) << endl;
    cout << "Min is: " << min(a, b) << endl;

    swap(a, b);

    cout << "After swap a is: " << a << " b is: " << b << endl;

    // rotate the vector
    rotate(v1.begin(), v1.begin() + 2, v1.end());

    for (auto i : v1)
        cout << i << " ";

    cout << endl;
    string ab = "rachit";
    reverse(ab.begin(), ab.end());
    cout << "Reverse string is: " << ab << endl;

    sort(v1.begin(), v1.end());
    for (auto i : v1)
        cout << i << " ";

    return 0;
}