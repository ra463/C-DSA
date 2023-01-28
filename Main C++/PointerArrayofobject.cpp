#include <iostream>
using namespace std;

class A
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }

    void getData()
    {
        cout << "Id is " << id << endl;
        cout << "Price is " << price << endl;
    }
};

int main()
{
    // A *ptr = new A[3]; we can also write like this
    int size = 3;
    A *ptr = new A[size];
    // A *ptr1 = ptr;

    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "Enter id and price of product " << i + 1 << endl;
        cin >> p >> q;
        (ptr+i)->setData(p, q); // we can also write like this
        // ptr->setData(p, q);
        // ptr++;
    }

    for ( i = 0; i < size; i++)
    {
        cout << "Data of product " << i + 1 << endl;
        (ptr+i)->getData(); // we can also write like this
        // ptr1->getData();
        // ptr1++;
    }
    
    return 0;
}