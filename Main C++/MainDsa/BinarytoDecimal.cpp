#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 0, ans = 0;
    while (n!= 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans += pow(2, i);
        }
        n = n / 10;
        i++;
    }
    cout << "Decimal: " << ans << endl;
    return 0;
}