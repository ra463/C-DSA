#include <iostream>
using namespace std;

class Person
{
    int id;
    static int roll;

public:
    void setData(void)
    {
        cout << "Enter the id: ";
        cin >> id;
    }
    void getData(void)
    {
        cout << "The id of this person is " << id << endl;
        cout << "The roll of this person is " << roll++ << endl;
    }
};

int Person::roll = 131;

int main()
{
    // Person R,I,S,P;
    // R.setData();
    // R.getData();

    // Array of object
    Person P[4];

    for (int i = 0; i < 4; i++)
    {
        P[i].setData();
        P[i].getData();
    }

    return 0;
}