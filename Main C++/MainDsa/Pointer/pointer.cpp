#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int *p = &a;

    cout << "Address of a is: " << p << endl;
    cout << "Value of a is: " << *p << endl;

    cout << "Size of a is: " << sizeof(a) << endl;
    cout << "Size of p is: " << sizeof(p) << endl;

    (*p)++;
    cout<<"After Value of a is: "<<a<<endl;

    return 0;
}