#include <iostream>
#include <fstream> // for file handling
using namespace std;

/*
Types of classes for working with files in C++:
    1. fstreambase
    2. ifstream --> derived from fstreambase
    3. ofstream --> derived from fstreambase

    In the above classes, the first letter represents the direction of the flow of data.

    In order to work with files, we need to create objects of these classes.
    There are two ways to create objects of these classes:
        1. Associating the file with the stream object
        2. Opening a file and associating it with the stream object

    File handling in C++
    1. Create and open a file
    2. Write to a file
    3. Read from a file
    4. Close a file
*/

int main()
{
    string st = "This is a sample text file.";
    // 1. Create and open a file
    // we can make object as per our choice like..
    // ofstream out;
    ofstream out("sampleFile.txt"); // this will create a file named sampleFile.txt

    // Write to a file
    out << st;

    // *Read operation
    ifstream in("sampleFile.txt");
    string st1;
    // in >> st1; this read only the first word
    getline(in, st1); // reads the entire line
    cout << st1 << endl;

    return 0;
}