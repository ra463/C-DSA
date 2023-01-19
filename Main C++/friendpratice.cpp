#include <iostream>
using namespace std;

// forward declaration
class Random2;

class Random
{
    static int count;
    int itemId;
    int itemPrice;
    int no1;
    friend void add(Random, Random2);

public:
    void setData()
    {
        cout << "Enter itemId " << endl;
        cin >> itemId;
        cout << "Enter itemPrice " << endl;
        cin >> itemPrice;
        count++;
    }

    void getData()
    {
        cout << "Item Id is " << itemId << endl;
        cout << "Item Price is " << itemPrice << endl;
    }

    void display()
    {
        cout << "Enter no1 " << endl;
        cin >> no1;
        cout << "No 1 is " << no1 << endl;
    }

    static void getCount()
    {
        // cout << id; // this will give an error because static function can only access static data members
        cout << "The value of count is " << count << endl;
    }
};

int Random::count = 1;

class Random2
{
    int no2;
    friend void add(Random, Random2);

public:
    void Display()
    {
        cout << "Enter no2 " << endl;
        cin >> no2;
        cout << "No 2 is " << no2 << endl;
    }
};

void add(Random r1, Random2 r2)
{
    cout << "The sum is " << r1.no1 + r2.no2 << endl;
}

int main()
{
    Random o1, o2, o3;

    o1.setData();
    o1.getData();
    Random::getCount();

    o2.setData();
    o2.getData();
    Random::getCount();

    o3.setData();
    o3.getData();
    Random::getCount();

    Random2 r1;

    o1.display();
    r1.Display();

    add(o1, r1);
    return 0;
}