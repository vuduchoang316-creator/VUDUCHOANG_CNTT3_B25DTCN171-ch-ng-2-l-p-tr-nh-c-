#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

struct Book {
    char title[100];
    char author[50];
    float price;
};

void inputBook(struct Book* bookPtr) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("  Ten sach (Title): ");
    fgets(bookPtr->title, 100, stdin);
    bookPtr->title[strcspn(bookPtr->title, "\n")] = 0;

    printf("  Tac gia (Author): ");
    fgets(bookPtr->author, 50, stdin);
    bookPtr->author[strcspn(bookPtr->author, "\n")] = 0;

    printf("  Gia (Price): ");
    if (scanf("%f", &bookPtr->price) != 1) {
        printf("Loi nhap lieu gia. Dang dat gia tri 0.0\n");
        bookPtr->price = 0.0;
        while ((c = getchar()) != '\n' && c != EOF);
    }
}

void displayBook(struct Book book) {
    printf("    -> Ten sach: %s\n", book.title);
    printf("    -> Tac gia: %s\n", book.author);
    printf("    -> Gia: %.2f VND\n", book.price); 
}

int main() {
    const int num_books = 3;
    struct Book books[num_books];
    int i;

    printf("***** CHUONG TRINH QUAN LY SACH *****\n");
    printf("Tong so cuon sach can nhap: %d\n", num_books);
    
    for (i = 0; i < num_books; i++) {
        printf("\n--- Nhap thong tin cho cuon sach so %d ---\n", i + 1);
        inputBook(&books[i]);
    }

    printf("\n***** THONG TIN CAC CUON SACH DA NHAP *****\n");
    for (i = 0; i < num_books; i++) {
        printf("\n--- Chi tiet cuon sach so %d ---\n", i + 1);
        displayBook(books[i]);
    }

    return 0;
}


