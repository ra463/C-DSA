#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s1;
    stack<string> s2;

    s1.push(1);
    s1.push(2);
    s1.push(3);

    s2.push("itzz");
    s2.push("rp");
    s2.push("here");

    cout << s1.top() << endl;  // Get the top element
    cout << s1.size() << endl; // Get the size of the stack

    s1.pop(); // Remove the top element
    s2.pop();

    cout << s2.top() << endl;
    cout << s2.size() << endl;

    cout << "Empty: " << s1.empty() << endl; // Check if the stack is empty

    return 0;
}