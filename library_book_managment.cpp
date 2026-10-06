#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    int availableCopies;

public:
    // Function to input book details
    void inputDetails() {
        cout << "=== Enter Book Details ===" << endl;
        cout << "Enter Book Title: ";
        getline(cin >> ws, title); // ws consumes any leading whitespace/newlines
        cout << "Enter Author Name: ";
        getline(cin, author);
        cout << "Enter Available Copies: ";
        cin >> availableCopies;
    }

    // Function to handle borrowing a book
    void borrowBook() {
        int copiesToBorrow;
        cout << "\nEnter number of copies to borrow: ";
        cin >> copiesToBorrow;

        if (copiesToBorrow <= 0) {
            cout << "Invalid number of copies!" << endl;
        } else if (copiesToBorrow <= availableCopies) {
            availableCopies -= copiesToBorrow;
            cout << "Successfully borrowed " << copiesToBorrow << " copy/copies." << endl;
        } else {
            cout << "Sorry, not enough copies available! Current available copies: " << availableCopies << endl;
        }
    }

    // Function to display book details
    void displayDetails() {
        cout << "\n=== Book Information ===" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Available Copies: " << availableCopies << endl;
    }
};

int main() {
    // Create an object of class Book
    Book myBook;

    // 1. Input book details
    myBook.inputDetails();

    // Display initial details
    myBook.displayDetails();

    // 2. Borrow a book
    myBook.borrowBook();

    // 3. Display updated book details
    myBook.displayDetails();

    return 0;
}