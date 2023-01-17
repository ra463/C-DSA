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
    // this is the way to initialize the static data member inside the class
    // static void getCount(void){
    //     cout<<"The value of count is "<<count<<endl;
    // }
};

int Employee::count; // this is the way to initialize the static data member outside the class

int main()
{
    Employee Rachit, Ishank, Pranjal;

    Rachit.setData();
    Rachit.getData();

    Ishank.setData();
    Ishank.getData();

    Pranjal.setData();
    Pranjal.getData();

    return 0;
}