#include<iostream>
using namespace std;

class Publication
{
public:
    string title;
    float price;
    
    Publication() {
        cout << "Enter Title->" << endl;
        cin >> title;
        cout << "Enter Price->" << endl;
        cin >> price;
        try {
            if(price <= 0)
                throw 0;
        }
        catch (int) {
            cerr << "Price can't be free or negative!!" << endl;
        }
    }
};

class Book : virtual public Publication
{
public:
    int page;

    Book() {
        cout << "Enter number of pages in the book->" << endl;
        cin >> page;
        try {
            if(page <= 0)
                throw 0;
        }
        catch (int) {
            cerr << "Number of pages can't be 0 or negative!!" << endl;
        }
        display();
    }

    void display() {
        cout << "Details->" << endl;
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
        cout << "Number of Pages: " << page << endl;
    }

    ~Book() {
    }
};

class Tape : public Publication
{
public:
    float minutes;

    Tape() {
        cout << "Enter playtime of the tape in minutes->" << endl;
        cin >> minutes;
        try {
            if(minutes <= 0)
                throw 0;
        }
        catch (int) {
            cerr << "Playtime of the tape can't be 0 or negative!!" << endl;
        }
        display();
    }

    void display() {
        cout << "Details->" << endl;
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
        cout << "Playtime in Minutes: " << minutes << endl;
    }

    ~Tape() {
    }
};

int main()
{
    int choice;
    cout << "Enter 1 for Book and 2 for Tape: " << endl;
    cin >> choice;

    if (choice == 1) {
        Book b1;
    } else if (choice == 2) {
        Tape t1;
    }

    return 0;
}

