#include <iostream>
#include <cstring>
using namespace std;

class Study
{
protected:
    string title;
    float rating;

public:
    Study(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void print()
    {
        cout<<"Namaste"<<endl;
    }
};

class Book : public Study
{
    int pages;

public:
    Book(string s, float r, int p) : Study(s, r)
    {
        pages = p;
    }
    void print()
    {
        cout << "This book has title " << title << " and rating out of 5 star is " << rating << endl;
        cout << "The pages in the book is " << pages << endl;
    }
};

class BookWord : public Study
{
    int words;

public:
    BookWord(string s, float r, int w) : Study(s, r)
    {
        words = w;
    }
    void print()
    {
        cout << "This class book has title " << title << endl;
        cout << "The rating of the book is " << rating << endl;
        cout << "The no of words in the book is " << words << endl;
    }; // virtual function
};

int main()
{
    string title;
    float rating;
    int pages, words;

    //
    title = "The greatest of all time";
    rating = 4.5;
    pages = 500;
    words = 10000;

    BookWord b1(title, rating, words);
    // b1.print();

    //
    title = "The greatest of all time nextOne";
    rating = 3.5;
    pages = 500;

    Book b2(title, rating, pages);
    // b2.print();

    //
    Study *ptr[2];
    ptr[0] = &b1;
    ptr[1] = &b2;

    ptr[0]->print();
    ptr[1]->print();
    return 0;
}