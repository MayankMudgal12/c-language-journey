#include <stdio.h>

struct Book {
    int book_id;
    char title[100];
    char author_name[100];
    float price;
};

void printBookDetails(struct Book b) {
    printf("Book ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author_name);
    printf("Price: %.2f\n", b.price);
}

int main() {
    struct Book book1 = {101, "The Art of Programming", "Donald Knuth", 59.99f};

    printBookDetails(book1);

    return 0;
}
