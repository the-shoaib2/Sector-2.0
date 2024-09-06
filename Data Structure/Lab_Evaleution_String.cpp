#include <bits/stdc++.h>

using namespace std;

struct Book {
    string name;
    float price;
    Book* next;
};

Book* head = nullptr;

void AddBook() {
    Book* newBook = new Book;
    cout << "Enter the book name: ";
    cin.ignore();
    getline(cin, newBook->name);
    cout << "Enter the price of the book: ";
    cin >> newBook->price;
    newBook->next = head;
    head = newBook;
    cout << "\"" << newBook->name << "\" added with a price of " << fixed << setprecision(2) << newBook->price << endl;
}

void RemoveBook(const string& bookName) {
    Book* current = head;
    Book* prev = nullptr;

    while (current != nullptr) {
        if (current->name == bookName) {
            if (prev != nullptr) {
                prev->next = current->next;
            } else {
                head = current->next;
            }
            cout << "\"" << current->name << "\" removed with a price of " << fixed << setprecision(2) << current->price << endl;
            delete current;
            return;
        }
        prev = current;
        current = current->next;
    }
    cout << "Book \"" << bookName << "\" not found." << endl;
}

void DisplayBooks() {
    cout << "Book Inventory:" << endl;
    Book* current = head;
    float total = 0.0;

    while (current != nullptr) {
        cout << current->name << " - " << fixed << setprecision(2) << current->price << endl;
        total += current->price;
        current = current->next;
    }

    cout << "Total price of all books: " << fixed << setprecision(2) << total << endl;
}

int main() {
    while (true) {
        cout << "Book Inventory Management:" << endl;
        cout << "1. Add a book" << endl;
        cout << "2. Remove a book" << endl;
        cout << "3. Display books" << endl;
        cout << "4. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                AddBook();
                break;
            case 2: {
                string bookName;
                cout << "Enter the name of the book to remove: ";
                cin.ignore();
                getline(cin, bookName);
                RemoveBook(bookName);
                break;
            }
            case 3:
                DisplayBooks();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }
    }
    return 0;
}












// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct Book
// {
//     char name[50];
//     float price;
//     Book *next;
// } Book;

// Book *head = NULL;

// void AddBook()
// {
//     Book *newBook = (Book *)malloc(sizeof(Book));
//     printf("Enter the book name: ");
//     scanf(" %[^\n]s", newBook->name);
//     printf("Enter the price of the book: ");
//     scanf("%f", &newBook->price);
//     newBook->next = head;
//     head = newBook;
//     printf("\"%s\" added with a price of %.2f\n", newBook->name, newBook->price);
// }

// void RemoveBook(const char *bookName)
// {
//     Book *current = head;
//     Book *prev = NULL;

//     while (current != NULL)
//     {
//         if (strcmp(current->name, bookName) == 0)
//         {
//             if (prev != NULL)
//             {
//                 prev->next = current->next;
//             }
//             else
//             {
//                 head = current->next;
//             }
//             printf("\"%s\" removed with a price of %.2f\n", current->name, current->price);
//             free(current);
//             return;
//         }
//         prev = current;
//         current = current->next;
//     }
//     printf("Book \"%s\" not found.\n", bookName);
// }

// void DisplayBooks()
// {
//     printf("Book Inventory:\n");
//     Book *current = head;
//     float total = 0.0;

//     while (current != NULL)
//     {
//         printf("%s - %.2f\n", current->name, current->price);
//         total += current->price;
//         current = current->next;
//     }

//     printf("Total price of all books: %.2f\n", total);
// }

// int main()
// {
//     while (1)
//     {
//         printf("Book Inventory Management:\n");
//         printf("1. Add a book\n");
//         printf("2. Remove a book\n");
//         printf("3. Display books\n");
//         printf("4. Exit\n");

//         int choice;
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             AddBook();
//             break;
//         case 2:
//         {
//             char bookName[50];
//             printf("Enter the name of the book to remove: ");
//             scanf(" %[^\n]s", bookName);
//             RemoveBook(bookName);
//             break;
//         }
//         case 3:
//             DisplayBooks();
//             break;
//         case 4:
//             exit(0);
//         default:
//             printf("Invalid choice. Please select a valid option.\n");
//         }
//     }
//     return 0;
// }
