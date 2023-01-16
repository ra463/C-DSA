#include <iostream>
using namespace std;

// voloume of cylinder
int volume(float r, int h)
{
    return (3.14 * r * r * h);
}

// voloume of cube
int volume(int a)
{
    return (a * a * a);
}

// voloume of rectangular/cuboid box
int volume(int l, double b, int h)
{
    return (l * b * h);
}

int main()
{
    cout << "The volume of cylinder is " << volume(2.7, 3) << endl;
    cout << "The volume of cube is " << volume(2) << endl;
    cout << "The volume of rectangular/cuboid box is " << volume(2, 3.5, 4) << endl;
    return 0;
}