#include <stdio.h>
#include <string.h>

struct Book {
    int pages;
    int currentPage;
    char title[64];
    char author[64];
    int year;
    int price;
};

void nextPage(struct Book *book) {
    if (book->currentPage < book->pages) {
        book->currentPage++;
    }
}

void prevPage(struct Book *book) {
    if (book->currentPage > 1) {
        book->currentPage--;
    }
}

int main() {
    struct Book book;

    strcpy(book.title, "The Horus Heresy: Horus Rising");
    strcpy(book.author, "Dan Abnett");
    book.pages = 816;
    book.currentPage = 1;
    book.year = 2006;
    book.price = 20;

    nextPage(&book);
    printf("Current page: %d\n", book.currentPage);

    book.currentPage = book.pages;
    printf("Current page: %d\n", book.currentPage);

    nextPage(&book);
    printf("Current page: %d\n", book.currentPage);

    book.currentPage = 1;

    prevPage(&book);
    prevPage(&book);
    printf("Current page: %d\n", book.currentPage);

    return 0;
}
