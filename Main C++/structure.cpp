#include <iostream>
using namespace std;

// typedef struct student // typedef is a keyword which is used to give a new name to an existing data type
// {
//     int roll;
//     string name;
//     char sec;
//     float marks;
// } s;

struct student
{
    int roll;
    string name;
    char sec;
    float marks;
};

int main()
{
    student s1;
    cout << "Enter roll no. of student: ";
    cin >> s1.roll;
    cout << "Enter name of student: ";
    cin >> s1.name;
    cout << "Enter section of student: ";
    cin >> s1.sec;
    cout << "Enter marks of student: ";
    cin >> s1.marks;
    cout << "Roll no. of student is: " << s1.roll << endl;
    cout << "Name of student is: " << s1.name << endl;
    cout << "Section of student is: " << s1.sec << endl;
    cout << "Marks of student is: " << s1.marks << endl;

    student rachit;

    rachit.roll = 1;
    rachit.name = "Rachit";
    rachit.sec = 'a';
    rachit.marks = 100;

    cout << "Roll no. of student is: " << rachit.roll << endl;
    cout << "Name of student is: " << rachit.name << endl;
    cout << "Section of student is: " << rachit.sec << endl;
    cout << "Marks of student is: " << rachit.marks << endl;

    return 0;
}