#include <iostream>
using namespace std;

char getMaxOccrance(string s)
{
    int arr[26] = {0}; // a->0,b->1,c->2,....z->25

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        if (ch >= 'a' && ch <= 'z') // loer case
        {
            number = ch - 'a';
        }
        else if (ch >= 'A' && ch <= 'Z') // upper case
        {
            number = ch - 'A';
        }
        arr[number]++; // increment the count of that character
    }

    int max = 0, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            ans = i;
        }
    }

    char fch = ans + 'a';
    return fch;
}

int main()
{
    string s;
    cin>>s;

    cout << "Max Occurance is: " << getMaxOccrance(s) << endl;
    return 0;
}