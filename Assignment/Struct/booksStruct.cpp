// Create a structure Book with members:
// ● title (string)
// ● price (float)
// Dynamically allocate memory for a Book structure, take input for the members, and display the
// details using a pointer.

#include <iostream>

using namespace std;

struct Book {
    string title;
    float price;
};

int main() {
    Book *b = new Book;
    cout << "Enter title: ";
    cin >> b->title;
    cout << "Enter price: ";
    cin >> b->price;
    cout << "Book details:" << endl;
    cout << "Title: " << b->title << endl;
    cout << "Price: $" << b->price << endl;
    delete b;
    return 0;
}

