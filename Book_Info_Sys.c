#include <stdio.h>

int main() {
    char title[50], author[50], publisher[50];
    int isbn, year;
    float price;

    printf("Enter Book Title: ");
    scanf("%s", title);
    printf("Enter Author Name: ");
    scanf("%s", author);
    printf("Enter ISBN: ");
    scanf("%d", &isbn);
    printf("Enter Price: ");
    scanf("%f", &price);
    printf("Enter Publisher: ");
    scanf("%s", publisher);
    printf("Enter Year of Publication: ");
    scanf("%d", &year);

    printf("\n--- Book Information ---\n");
    printf("Title: %s\nAuthor: %s\nISBN: %d\nPrice: %.2f\nPublisher: %s\nYear: %d\n",
           title, author, isbn, price, publisher, year);
    return 0;
}
