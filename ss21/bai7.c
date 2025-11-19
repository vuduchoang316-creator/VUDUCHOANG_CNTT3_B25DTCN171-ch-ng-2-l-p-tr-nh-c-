#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define MAX_SIZE 100


struct Book {
    char id[10]; 
    char title[100];
    char author[50];
    float price;
    char genre[30];
};

void hienThiMenu();
void nhapSoLuongVaThongTin(struct Book arr[], int *n);
void hienThiThongTin(struct Book arr[], int n);
void themSach(struct Book arr[], int *n);
void xoaSach(struct Book arr[], int *n);
void capNhatThongTin(struct Book arr[], int n);
void sapXepTheoGia(struct Book arr[], int n);
void timKiemTheoTen(struct Book arr[], int n);

int main() {
    struct Book books[MAX_SIZE];
    int currentSize = 0; 
    int choice;

    do {
        hienThiMenu();
        printf("Lua chon cua ban: ");
        if (scanf("%d", &choice) != 1) {
            printf("\nLoi nhap lieu. Vui long nhap lai so tu 1 den 8.\n");
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            continue;
        }

        switch (choice) {
            case 1:
                nhapSoLuongVaThongTin(books, &currentSize);
                break;
            case 2:
                hienThiThongTin(books, currentSize);
                break;
            case 3:
                themSach(books, &currentSize);
                break;
            case 4:
                xoaSach(books, &currentSize);
                break;
            case 5:
                capNhatThongTin(books, currentSize);
                break;
            case 6:
                sapXepTheoGia(books, currentSize);
                break;
            case 7:
                timKiemTheoTen(books, currentSize);
                break;
            case 8:
                printf("\n--- Chuong trinh ket thuc. Tam biet! ---\n");
                break;
            default:
                printf("\nLua chon khong hop le. Vui long chon lai.\n");
        }
        printf("\n----------------------------------------\n");
    } while (choice != 8);

    return 0;
}

void hienThiMenu() {
    printf("\n\n=============== M E N U ===============");
    printf("\n1. Nhap so luong va thong tin sach.");
    printf("\n2. Hien thi thong tin sach.");
    printf("\n3. Them sach vao vi tri.");
    printf("\n4. Xoa sach theo ma sach.");
    printf("\n5. Cap nhat thong tin sach theo ma sach.");
    printf("\n6. Sap xep sach theo gia (tang/giam).");
    printf("\n7. Tim kiem sach theo ten sach.");
    printf("\n8. Thoat.");
    printf("\n=======================================\n");
}

// Ham nay thay the cho readString de xoa \n
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// 1. Nhap so luong va thong tin
void nhapSoLuongVaThongTin(struct Book arr[], int *n) {
    int count;
    printf("Nhap so luong sach muon them: ");
    scanf("%d", &count);
    
    if (*n + count > MAX_SIZE) {
        printf("Khong the them. Mang da day.\n");
        return;
    }
    
    for (int i = 0; i < count; i++) {
        printf("\nNhap thong tin cho sach thu %d:\n", *n + 1);
        
        // Luon xoa bo dem truoc khi nhap chuoi sau khi dung scanf
        clearInputBuffer(); 

        printf("Ma sach (ID): ");
        fgets(arr[*n].id, 10, stdin);
        arr[*n].id[strcspn(arr[*n].id, "\n")] = 0;

        printf("Ten sach (Title): ");
        fgets(arr[*n].title, 100, stdin);
        arr[*n].title[strcspn(arr[*n].title, "\n")] = 0;

        printf("Tac gia (Author): ");
        fgets(arr[*n].author, 50, stdin);
        arr[*n].author[strcspn(arr[*n].author, "\n")] = 0;

        printf("Gia tien (Price): ");
        scanf("%f", &arr[*n].price);

        // Luon xoa bo dem sau khi dung scanf de tranh anh huong den fgets tiep theo
        clearInputBuffer(); 
        
        printf("The loai (Genre): ");
        fgets(arr[*n].genre, 30, stdin);
        arr[*n].genre[strcspn(arr[*n].genre, "\n")] = 0;

        (*n)++;
    }
    printf("\nDa them %d sach vao danh sach.\n", count);
}

// 2. Hien thi thong tin
void hienThiThongTin(struct Book arr[], int n) {
    if (n == 0) {
        printf("Danh sach sach hien tai rong.\n");
        return;
    }
    printf("\n%-10s %-30s %-20s %-10s %-15s\n", "MA SACH", "TEN SACH", "TAC GIA", "GIA", "THE LOAI");
    printf("----------------------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-10s %-30s %-20s %-10.2f %-15s\n", 
               arr[i].id, 
               arr[i].title, 
               arr[i].author, 
               arr[i].price, 
               arr[i].genre);
    }
}

// 3. Them sach vao vi tri
void themSach(struct Book arr[], int *n) {
    if (*n >= MAX_SIZE) {
        printf("Khong the them. Mang da day.\n");
        return;
    }

    int pos;
    printf("Nhap vi tri muon them sach (0 den %d): ", *n);
    scanf("%d", &pos);

    if (pos < 0 || pos > *n) {
        printf("Vi tri khong hop le.\n");
        return;
    }

    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1]; 
    }
    
    printf("\nNhap thong tin sach moi:\n");
    clearInputBuffer(); 
    
    printf("Ma sach (ID): ");
    fgets(arr[pos].id, 10, stdin);
    arr[pos].id[strcspn(arr[pos].id, "\n")] = 0;
    
    printf("Ten sach (Title): ");
    fgets(arr[pos].title, 100, stdin);
    arr[pos].title[strcspn(arr[pos].title, "\n")] = 0;
    
    printf("Tac gia (Author): ");
    fgets(arr[pos].author, 50, stdin);
    arr[pos].author[strcspn(arr[pos].author, "\n")] = 0;
    
    printf("Gia tien (Price): ");
    scanf("%f", &arr[pos].price);
    
    clearInputBuffer(); 
    
    printf("The loai (Genre): ");
    fgets(arr[pos].genre, 30, stdin);
    arr[pos].genre[strcspn(arr[pos].genre, "\n")] = 0;
    
    (*n)++;
    printf("Da them sach vao vi tri %d.\n", pos);
}

// 4. Xoa sach theo ma sach
void xoaSach(struct Book arr[], int *n) {
    if (*n == 0) {
        printf("Danh sach rong, khong co gi de xoa.\n");
        return;
    }

    char searchID[10];
    clearInputBuffer();
    printf("Nhap Ma sach (ID) can xoa: ");
    fgets(searchID, 10, stdin);
    searchID[strcspn(searchID, "\n")] = 0;

    int foundIndex = -1;
    for (int i = 0; i < *n; i++) {
        if (strcmp(arr[i].id, searchID) == 0) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        for (int i = foundIndex; i < *n - 1; i++) {
            arr[i] = arr[i + 1]; 
        }
        (*n)--;
        printf("Da xoa sach co Ma sach '%s'.\n", searchID);
    } else {
        printf("Khong tim thay sach co Ma sach '%s'.\n", searchID);
    }
}

// 5. Cap nhat thong tin sach theo ma sach
void capNhatThongTin(struct Book arr[], int n) {
    if (n == 0) {
        printf("Danh sach rong, khong co gi de cap nhat.\n");
        return;
    }

    char searchID[10];
    clearInputBuffer();
    printf("Nhap Ma sach (ID) can cap nhat: ");
    fgets(searchID, 10, stdin);
    searchID[strcspn(searchID, "\n")] = 0;

    int foundIndex = -1;
    for (int i = 0; i < n; i++) {
        if (strcmp(arr[i].id, searchID) == 0) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        printf("\nTim thay sach: %s. Bat dau cap nhat...\n", arr[foundIndex].title);
        
        // Luon xoa bo dem truoc khi nhap chuoi sau khi dung scanf hoac truoc do
        clearInputBuffer();
        
        printf("Ten sach moi (Title): ");
        fgets(arr[foundIndex].title, 100, stdin);
        arr[foundIndex].title[strcspn(arr[foundIndex].title, "\n")] = 0;
        
        printf("Tac gia moi (Author): ");
        fgets(arr[foundIndex].author, 50, stdin);
        arr[foundIndex].author[strcspn(arr[foundIndex].author, "\n")] = 0;
        
        printf("Gia tien moi (Price): ");
        scanf("%f", &arr[foundIndex].price);
        
        clearInputBuffer();
        
        printf("The loai moi (Genre): ");
        fgets(arr[foundIndex].genre, 30, stdin);
        arr[foundIndex].genre[strcspn(arr[foundIndex].genre, "\n")] = 0;

        printf("Cap nhat thong tin sach thanh cong.\n");
    } else {
        printf("Khong tim thay sach co Ma sach '%s'.\n", searchID);
    }
}

// 6. Sap xep sach theo gia
void sapXepTheoGia(struct Book arr[], int n) {
    if (n <= 1) {
        printf("Khong can sap xep.\n");
        return;
    }

    struct Book temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].price > arr[j + 1].price) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Da sap xep sach theo gia tang dan.\n");
    hienThiThongTin(arr, n);
}

// 7. Tim kiem sach theo ten
void timKiemTheoTen(struct Book arr[], int n) {
    if (n == 0) {
        printf("Danh sach rong, khong the tim kiem.\n");
        return;
    }

    char searchTitle[100];
    clearInputBuffer();
    printf("Nhap Ten sach can tim: ");
    fgets(searchTitle, 100, stdin);
    searchTitle[strcspn(searchTitle, "\n")] = 0;

    int foundCount = 0;
    
    printf("\nKET QUA TIM KIEM SACH THEO TEN '%s':\n", searchTitle);
    printf("%-10s %-30s %-20s %-10s %-15s\n", "MA SACH", "TEN SACH", "TAC GIA", "GIA", "THE LOAI");
    printf("----------------------------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        if (strstr(arr[i].title, searchTitle) != NULL) {
            printf("%-10s %-30s %-20s %-10.2f %-15s\n", 
                   arr[i].id, 
                   arr[i].title, 
                   arr[i].author, 
                   arr[i].price, 
                   arr[i].genre);
            foundCount++;
        }
    }

    if (foundCount == 0) {
        printf("Khong tim thay sach nao co ten chua '%s'.\n", searchTitle);
    }
}
