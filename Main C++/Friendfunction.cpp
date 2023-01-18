#include <iostream>
using namespace std;

class Student
{
    int a, b;

public:
    void setvalue(int x, int y)
    {
        a = x;
        b = y;
    }

    friend Student sumValue(Student s1, Student s2);

    void PrintValue()
    {
        cout << "a = " << a << " b = " << b << endl;
    }
};

Student sumValue(Student s1, Student s2)
{
    Student s3;
    s3.a = s1.a + s2.a;
    s3.b = s1.b + s2.b;
    return s3;
}

int main()
{
    Student s1, s2, sum;

    s1.setvalue(10, 20);
    s1.PrintValue();

    s2.setvalue(30, 40);
    s2.PrintValue();

    sum = sumValue(s1, s2);
    sum.PrintValue();

    return 0;
}