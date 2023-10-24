#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Library {
    int accessionNumber;
    char title[100];
    char author[100];
    float price;
    int isIssued;
};

struct Library books[MAX_BOOKS];
int count = 0;

void addBook() {
    if (count < MAX_BOOKS) {
        printf("Enter accession number: ");
        scanf("%d", &books[count].accessionNumber);
        printf("Enter title: ");
        scanf("%s", books[count].title);
        printf("Enter author name: ");
        scanf("%s", books[count].author);
        printf("Enter price: ");
        scanf("%f", &books[count].price);
        printf("Is the book issued? (1 for Yes, 0 for No): ");
        scanf("%d", &books[count].isIssued);
        count++;
    } else {
        printf("Library is full. Cannot add more books.\n");
    }
}

void displayBook(int index) {
    printf("\nBook Information\n");
    printf("Accession Number: %d\n", books[index].accessionNumber);
    printf("Title: %s\n", books[index].title);
    printf("Author: %s\n", books[index].author);
    printf("Price: %.2f\n", books[index].price);
    if (books[index].isIssued) {
        printf("Is Issued: Yes\n");
    } else {
        printf("Is Issued: No\n");
    }
}

void displayAllBooks() {
    if (count == 0) {
        printf("No books in the library.\n");
    } else {
        printf("\nAll Books in the Library\n");
        for (int i = 0; i < count; i++) {
            printf("%d. %s by %s\n", i + 1, books[i].title, books[i].author);
        }
    }
}

void listAllBooksByAuthor() {
    char authorName[100];
    printf("Enter author name: ");
    scanf("%s", authorName);
    printf("\nBooks by %s\n", authorName);
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].author, authorName) == 0) {
            printf("%d. %s\n", i + 1, books[i].title);
        }
    }
}

void listBookByAccession() {
    int accession;
    printf("Enter accession number: ");
    scanf("%d", &accession);
    for (int i = 0; i < count; i++) {
        if (books[i].accessionNumber == accession) {
            displayBook(i);
            return;
        }
    }
    printf("Book not found with the specified accession number.\n");
}

void listBookCount() {
    printf("Number of books in the library: %d\n", count);
}

void listBooksByAccession() {
    if (count == 0) {
        printf("No books in the library.\n");
    } else {
        printf("\nAll Books in the Library in the Order of Accession Number\n");
        for (int i = 0; i < count; i++) {
            displayBook(i);
        }
    }
}

int main() {
    int choice;
    do {
        printf("\nMenu\n");
        printf("1. Add book information\n");
        printf("2. Display book information\n");
        printf("3. List all books of given author\n");
        printf("4. List the title of book specified by accession number\n");
        printf("5. List the count of books in the library\n");
        printf("6. List the books in the order of accession number\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2: {
                if (count == 0) {
                    printf("No books in the library.\n");
                } else {
                    int accession;
                    printf("Enter accession number: ");
                    scanf("%d", &accession);
                    int found = 0;
                    for (int i = 0; i < count; i++) {
                        if (books[i].accessionNumber == accession) {
                            displayBook(i);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Book not found with the specified accession number.\n");
                    }
                }
                break;
            }
            case 3:
                listAllBooksByAuthor();
                break;
            case 4:
                listBookByAccession();
                break;
            case 5:
                listBookCount();
                break;
            case 6:
                listBooksByAccession();
                break;
            case 7:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid choice.\n");
        }
    } while (choice != 7);

    return 0;
}

