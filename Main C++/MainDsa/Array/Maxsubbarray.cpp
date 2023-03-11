#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int k = 2;
        int i = 0, j = 0;
        int count = 0;
        int sum = 0;
        int mul = 1;
        while (k <=n)
        {
          
            sum = sum + arr[j];
            mul = mul * arr[j];

            cout<<"sum:"<<sum<<endl;
            cout<<"mul:"<<mul<<endl;

            if (j - i + 1 < k)
                j++;
            if (j - i + 1 == k)
            {
                if (sum == mul)
                    count++;
                sum = sum - arr[i];
               
                mul = mul/arr[i];
                 i++;
                j++;
            }
            if (j ==n)
            {
                k++;
                sum = 0;
                mul = 1;
                i = 0;
                j = 0;
            }
        }
        cout<<count+n<<endl;
    }
    return 0;
}