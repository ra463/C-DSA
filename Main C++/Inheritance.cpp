#include <iostream>
#include <string>
using namespace std;

// Base class
class Person
{
public:
    int id;
    string name;
    int rollno;
    int age;

    Person(){}; // default constructor/
    Person(int a)
    {
        age = a;
        cout << "Person class constructor called" << endl;
        cout<<"Age: "<<age<<endl;
    }
    // void setdata(int i, string n, int r)
    // {
    //     id = i;
    //     name = n;
    //     rollno = r;
    // }
    // void display()
    // {
    //     cout << "ID: " << id << endl;
    //     cout << "Name: " << name << endl;
    //     cout << "Roll No: " << rollno << endl;
    // }
    void set()
    {
        cout << "Inheritance called" << endl;
    }
};

// Derived class
// class derived-class-name : access-mode/visibility-mode base-class-name
// default access specifier/visibility-mode of derived class is private
// private members of base class are not inherited

class Student : public Person
{
public:
    int marks;
    int grade;

    Student(int a)
    {
        age = a;
        cout << "Student class constructor called" << endl;
        cout<<"Age: "<<age<<endl;
    }
    void setdata(int i, string n, int r, int m, int g)
    {
        id = i;
        name = n;
        rollno = r;
        marks = m;
        grade = g;
    }
    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    Person p1(20);
    Student s1(10);
    s1.set();
    s1.setdata(1, "Rahul", 101, 90, 10);
    s1.display();
    return 0;
}