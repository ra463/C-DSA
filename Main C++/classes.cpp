#include <iostream>
using namespace std;

class Student
{
private:
    int a, b, c;

public:
    int x, y;
    void setData(int a1, int b1, int c1); // Declaration
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "value of x is " << x << endl;
        cout << "value of y is " << y << endl;
    }
};

void Student :: setData(int a1, int b1, int c1) // Defination
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Student S;
    S.x = 10;
    S.y = 20;
    S.setData(2, 3, 4);
    S.getData();
    return 0;
}