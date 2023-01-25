#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void getRoll()
    {
        cout << "Enter Roll no:";
        cin >> roll;
    }
    void putRoll()
    {
        cout << "Roll: " << roll << endl;
    }
};

class Test
{
protected:
    float sub1, sub2;

public:
    void getMarks()
    {
        cout << "Enter marks of 2 subjects:";
        cin >> sub1 >> sub2;
    }
    void putMarks()
    {
        cout << "Marks obtained: " << endl
             << "Subject 1 = " << sub1 << endl
             << "Subject 2 = " << sub2 << endl;
    }
};

class Result : public Student, public Test
{
public:
    float total;
    float percentage;

    void display()
    {
        total = sub1 + sub2;
        cout << "Total Marks = " << total << endl;
        percentage = total / 2;
        cout << "Percentage = " << percentage << endl;
    }
};

int main()
{
    Result student1;
    student1.getRoll();
    student1.putRoll();
    student1.getMarks();
    student1.putMarks();
    student1.display();
    return 0;
}