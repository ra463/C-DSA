#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outp("sampleFile.txt");
    cout << "Enter the text to be written in the file: ";
    string st;
    cin >> st;

    outp << "My name is " + st;

    outp.close();

    ifstream inp("sampleFile.txt");
    // second way to open the file
    // ifstream inp;
    // inp.open("sampleFile.txt");
    string st1;

    // when there are multiple lines in the file, then use while loop to read the file
    while (inp.eof() == 0) // when the end of the file is reached, eof() returns 1
    {
        getline(inp, st1); // Read the content of the file
    }

    cout << "The content inside the file is: " << st1 << endl;

    inp.close();
    return 0;
}