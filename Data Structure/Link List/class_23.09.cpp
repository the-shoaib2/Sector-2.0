#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

// Book structure
struct Book
{
    string title;
    string author;
    string genre;
    string ISBN;
    bool availability;

    // Constructor
    Book(string t, string a, string g, string i, bool av) : title(t), author(a), genre(g), ISBN(i), availability(av) {}
};

// Global variables
vector<Book> library;
stack<Book> borrowedBooks;
queue<pair<string, string>> reservations;

// Function to add a book to the library
void addBook()
{
    string title, author, genre, ISBN;
    cout << "Enter book title: ";
    cin.ignore();
    getline(cin, title);
    cout << "Enter author: ";
    getline(cin, author);
    cout << "Enter genre: ";
    getline(cin, genre);
    cout << "Enter ISBN: ";
    cin >> ISBN;

    library.push_back(Book(title, author, genre, ISBN, true));
    cout << "Book added successfully." << endl;
}

// Function to remove a book from the library
void removeBook()
{
    string ISBN;
    cout << "Enter ISBN of the book to remove: ";
    cin >> ISBN;

    auto it = find_if(library.begin(), library.end(), [ISBN](const Book &book)
                      { return book.ISBN == ISBN; });

    if (it != library.end())
    {
        library.erase(it);
        cout << "Book removed successfully." << endl;
    }
    else
    {
        cout << "Book not found." << endl;
    }
}

// Function to search for books
void searchBook()
{
    string keyword;
    cout << "Enter search keyword (title, author, genre, ISBN): ";
    cin.ignore();
    getline(cin, keyword);

    cout << "Matching books:" << endl;
    for (const Book &book : library)
    {
        if (book.title.find(keyword) != string::npos ||
            book.author.find(keyword) != string::npos ||
            book.genre.find(keyword) != string::npos ||
            book.ISBN.find(keyword) != string::npos)
        {
            cout << "Title: " << book.title << endl;
            cout << "Author: " << book.author << endl;
            cout << "Genre: " << book.genre << endl;
            cout << "ISBN: " << book.ISBN << endl;
            cout << "Availability: " << (book.availability ? "Available" : "Not Available") << endl;
            cout << endl;
        }
    }
}

// Function to borrow a book
void borrowBook()
{
    string ISBN;
    cout << "Enter ISBN of the book to borrow: ";
    cin >> ISBN;

    auto it = find_if(library.begin(), library.end(), [ISBN](const Book &book)
                      { return book.ISBN == ISBN; });

    if (it != library.end())
    {
        if (it->availability)
        {
            it->availability = false;
            borrowedBooks.push(*it);
            cout << "Book borrowed successfully." << endl;
        }
        else
        {
            cout << "Book is not available for borrowing." << endl;
        }
    }
    else
    {
        cout << "Book not found." << endl;
    }
}

// Function to return a book
void returnBook()
{
    if (!borrowedBooks.empty())
    {
        Book book = borrowedBooks.top();
        borrowedBooks.pop();
        auto it = find_if(library.begin(), library.end(), [book](const Book &b)
                          { return b.ISBN == book.ISBN; });

        if (it != library.end())
        {
            it->availability = true;
            cout << "Book returned successfully." << endl;
        }
    }
    else
    {
        cout << "No books to return." << endl;
    }
}

void reserveBook()
{
    string ISBN, userName;
    cout << "Enter ISBN Book reserve: ";
    cin >> ISBN;
    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, userName);

    auto it = find_if(library.begin(), library.end(), [ISBN](const Book &book)
                      { return book.ISBN == ISBN; });

    if (it != library.end())
    {
        if (!it->availability)
        {
            reservations.push(make_pair(userName, ISBN));
            cout << "Book reserved successfully." << endl;
        }
        else
        {
            cout << "You cannot reserve an available book." << endl;
        }
    }
    else
    {
        cout << "Book not found." << endl;
    }
}


int main()
{

    addBook();
    removeBook();
    searchBook();
    borrowBook();
    returnBook();
    reserveBook();
    
    return 0;
}
