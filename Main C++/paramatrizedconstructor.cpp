#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;
    friend void distance(Point, Point);
public:
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
};

void distance(Point p1, Point p2)
{
    int square = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
    cout << "Distance between two points is: " << square << endl;
}

int main()
{
    Point p1(0, 1), p2(0, 6); // implicit call
    distance(p1, p2);
    return 0;
}
