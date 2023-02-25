#include <iostream>
using namespace std;

int main()
{
    int amount;
    cin >> amount;

    int rs_100, rs_50, rs_20, rs_10, rs_5, rs_2, rs_1;

    switch (1)
    {
    case 1:
        rs_100 = amount / 100;
        amount = amount % 100;
        cout << "Rs 100 note required is: " << rs_100 << endl;
        // break;
    case 2:
        rs_50 = amount / 50;
        amount = amount % 50;
        cout << "Rs 50 note required is: " << rs_50 << endl;
        // break;

    case 3:
        rs_20 = amount / 20;
        amount = amount % 20;
        cout << "Rs 20 note required is: " << rs_20 << endl;
        // break;

    case 4:
        rs_10 = amount / 10;
        amount = amount % 10;
        cout << "Rs 10 note required is: " << rs_10 << endl;
        // break;

    case 5:
        rs_5 = amount / 5;
        amount = amount % 5;
        cout << "Rs 5 note required is: " << rs_5 << endl;
        // break;

    case 6:
        rs_2 = amount / 2;
        amount = amount % 2;
        cout << "Rs 2 note required is: " << rs_2 << endl;
        // break;

    case 7:
        rs_1 = amount / 1;
        amount = amount % 1;
        cout << "Rs 1 note required is: " << rs_1 << endl;
        break;

    default:
        cout << "Invalid input" << endl;
    }
    return 0;
}