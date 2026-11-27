#include <iostream>
#include <stdexcept>
using namespace std;
// Interpret "withdrawal amount/balance" as books requested/books available.
class LibraryAccount {
    int availableBooks;
public:
    explicit LibraryAccount(int books) : availableBooks(books) {
        if (books < 0) throw invalid_argument("Available books cannot be negative.");
    }
    void issueBook(int quantity) {
        if (quantity <= 0) throw invalid_argument("Quantity must be positive.");
        if (quantity > availableBooks) throw out_of_range("Not enough books available.");
        availableBooks -= quantity;
    }
    int getAvailableBooks() const { return availableBooks; }
};
int main() {
    LibraryAccount account(5);
    cout << "Available books: " << account.getAvailableBooks() << '\n';
    try {
        int quantity;
        cout << "Enter number of books to issue: ";
        if (!(cin >> quantity)) throw invalid_argument("Quantity must be an integer.");
        account.issueBook(quantity);
        cout << "Books issued successfully.\n";
    } catch (const exception& error) { cout << "Error: " << error.what() << '\n'; }
    cout << "Remaining books: " << account.getAvailableBooks() << '\n';
}
