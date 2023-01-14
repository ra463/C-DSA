#include <iostream>
using namespace std;

union student
{
    int roll;
    char name;
    char sec;
    float marks;
};

int main()
{
    student s1;
    s1.name = 'r';
    cout << "Roll: " << s1.name << endl;
    return 0;
}