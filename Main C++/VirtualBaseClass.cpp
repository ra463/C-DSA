#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void setRoll(int r)
    {
        roll = r;
    }
    void getRoll()
    {
        cout << "Roll: " << roll << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void setMarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void getMarks()
    {
        cout << "Marks obtained in "
             << "Maths is: " << maths
             << " and Physics is: " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void setScore(float sc)
    {
        score = sc;
    }
    void getScore()
    {
        cout << "Score in Sports is: " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        getRoll();
        getMarks();
        getScore();
        cout << "Total Score: " << total << endl;
    }
};

int main()
{
    Result r;
    r.setRoll(131);
    r.setMarks(87.5, 91.5);
    r.setScore(9.5);
    r.display();
    return 0;
}