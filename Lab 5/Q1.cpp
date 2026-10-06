#include <iostream>
using namespace std;

class Library {
public:
    void displayCatalog(string title) {
        cout << "Book Title: " << title << endl;
        cout << "Library Catalog" << endl;
    }
};

class EBook : public Library {
public:
    void displayEBook(string title, int fileSize) {
        displayCatalog(title);
        cout << "Type: E-Book" << endl;
        cout << "File Size: " << fileSize << " MB" << endl;
    }
};

int main() {
    EBook book;

    book.displayEBook("C++ Programming", 15);

    return 0;
}