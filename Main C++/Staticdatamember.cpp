#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    static int count; // by default it is initialized to 0. so we don't need to initialize it in the class
public:
    void setData(void)
    {
        cout << "Enter the id: ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void)
    {
       // cout << id; // this will give an error because static function can only access static data members
        cout << "The value of count is " << count << endl;
    }
};

int Employee::count; // this is the way to initialize the static data member outside the class

int main()
{
    Employee Rachit, Ishank, Pranjal;

    Rachit.setData();
    Rachit.getData();
    Employee::getCount(); // we can also call the static function using the class name

    Ishank.setData();
    Ishank.getData();
    Employee::getCount();

    Pranjal.setData();
    Pranjal.getData();
    Employee::getCount();

    return 0;
}