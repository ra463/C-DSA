#include <iostream>
using namespace std;

// Forward declaration
class Student;

class Teacher
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumComplex(Student s1, Student s2);
    int sumCompComplex(Student s1, Student s2);
};

class Student
{
    int a, b;

    // declaring a friend function individually
    // friend int Teacher::sumComplex(Student s1, Student s2);
    // friend int Teacher::sumCompComplex(Student s1, Student s2);

    // declaring a friend function collectively i.e declaring a whole class as friend
    friend class Teacher;

public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }

    void displayData()
    {
        cout << "a = " << a << " b = " << b << endl;
    }
};

int Teacher::sumComplex(Student s1, Student s2)
{
    return (s1.a + s2.a);
}

int Teacher::sumCompComplex(Student s1, Student s2)
{
    return (s1.b + s2.b);
}

int main()
{
    Student s1, s2;
    s1.set(3, 5);
    s2.set(8, 9);

    Teacher t1;
    int totalA = t1.sumComplex(s1, s2);
    cout << "The addition of a is: " << totalA << endl;

    int totalB = t1.sumCompComplex(s1, s2);
    cout << "The addition of b is: " << totalB << endl;
    return 0;
}