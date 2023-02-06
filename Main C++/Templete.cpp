#include <iostream>
using namespace std;

template <class T>

class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }

    T product(vector &v)
    {
        T p = 0;
        for (int i = 0; i < size; i++)
        {
            p += arr[i] * v.arr[i];
        }
        return p;
    }
};

int main()
{
    vector<int> v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 2;
    v1.arr[2] = 3;

    vector<int> v2(3);
    v2.arr[0] = 4;
    v2.arr[1] = 5;
    v2.arr[2] = 6;

    int p = v1.product(v2);
    cout << "The Product is " << p << endl;

    vector<float> v1(3);
    v1.arr[0] = 1.4;
    v1.arr[1] = 2.58;
    v1.arr[2] = 3.39;

    vector<float> v2(3);
    v2.arr[0] = 4.1;
    v2.arr[1] = 5.8;
    v2.arr[2] = 6.73;

    float p = v1.product(v2);
    cout << "The Product is " << p << endl;
    return 0;
}