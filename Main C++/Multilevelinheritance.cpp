#include <iostream>
using namespace std;

class A
{
protected:
    int roll_no;

public:
    A()
    {
        cout << "Constructor of class A" << endl;
    }
    void set_roll_no(int);
    void get_roll_no();
};

void A::set_roll_no(int x)
{
    roll_no = x;
}

void A::get_roll_no()
{
    cout << "The Roll no is = " << roll_no << endl;
}

class B : public A
{
protected:
    float maths_marks, physics_marks;

public:
    int a;
    B(int x)
    {
        a = x;
        cout << "a = " << a << endl;
        cout << "Constructor of class B" << endl;
    }

    void set_marks(float, float);
    void get_marks();
};

void B::set_marks(float x, float y)
{
    maths_marks = x;
    physics_marks = y;
}

void B::get_marks()
{
    cout << "The marks obtained in maths are = " << maths_marks << endl;
    cout << "The marks obtained in physics are = " << physics_marks << endl;
}

class C : public B
{
protected:
    float percent;

public:
    int b;
    C(int x, int y) : B(x) // This is the constructor of class B
    {
        b = y;
        cout << "b = " << b << endl;
        cout << "Constructor of class C" << endl;
    }

    void display();
};

void C::display()
{
    percent = ((maths_marks + physics_marks) / 200) * 100;
    cout << "The percentage obtained is = " << percent << "%"<< endl;
}

int main()
{
    C obj(10, 20);
    obj.set_roll_no(131);
    obj.get_roll_no();
    obj.set_marks(92.5,82.7);
    obj.get_marks();
    obj.display();
    return 0;
}