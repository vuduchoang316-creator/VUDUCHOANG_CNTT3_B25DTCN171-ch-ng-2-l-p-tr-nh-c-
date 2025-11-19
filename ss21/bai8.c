#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

struct Product {
    char id[10]; 
    char name[100];
    float importPrice; 
    float sellPrice;   
    int quantity;
};

float g_totalRevenue = 0.0;

void hienThiMenu();
void nhapSoLuongVaThongTin(struct Product arr[], int *n);
void hienThiDanhSach(struct Product arr[], int n);
void nhapSanPham(struct Product arr[], int *n);
void capNhatThongTin(struct Product arr[], int n);
void sapXepTheoGia(struct Product arr[], int n);
void timKiemSanPham(struct Product arr[], int n);
void banSanPham(struct Product arr[], int n);
void hienThiDoanhThu();

int findProductIndex(struct Product arr[], int n, const char searchID[]);
void clearInputBuffer();

int main() {
    struct Product products[MAX_SIZE];
    int currentSize = 0; 
    int choice;

    do {
        hienThiMenu();
        printf("Lua chon cua ban: ");
        if (scanf("%d", &choice) != 1) {
            printf("\nLoi nhap lieu. Vui long nhap lai so.\n");
            clearInputBuffer();
            continue;
        }

        switch (choice) {
            case 1:
                nhapSoLuongVaThongTin(products, &currentSize);
                break;
            case 2:
                hienThiDanhSach(products, currentSize);
                break;
            case 3:
                nhapSanPham(products, &currentSize);
                break;
            case 4:
                capNhatThongTin(products, currentSize);
                break;
            case 5:
                sapXepTheoGia(products, currentSize);
                break;
            case 6:
                timKiemSanPham(products, currentSize);
                break;
            case 7:
                banSanPham(products, currentSize);
                break;
            case 8:
                hienThiDoanhThu();
                break;
            case 9:
                printf("\n--- Chuong trinh ket thuc. Tam biet! ---\n");
                break;
            default:
                printf("\nLua chon khong hop le. Vui long chon lai.\n");
        }
        printf("\n----------------------------------------\n");
    } while (choice != 9);

    return 0;
}

void hienThiMenu() {
    printf("\n\n=============== M E N U ===============");
    printf("\n1. Nhap so luong va thong tin san pham ban dau.");
    printf("\n2. Hien thi danh sach san pham.");
    printf("\n3. Nhap san pham (them vao ton kho).");
    printf("\n4. Cap nhat thong tin san pham.");
    printf("\n5. Sap xep san pham theo gia ban (tang/giam).");
    printf("\n6. Tim kiem san pham.");
    printf("\n7. Ban san pham.");
    printf("\n8. Doanh thu hien tai.");
    printf("\n9. Thoat.");
    printf("\n=======================================\n");
}

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int findProductIndex(struct Product arr[], int n, const char searchID[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(arr[i].id, searchID) == 0) {
            return i;
        }
    }
    return -1;
}

void nhapSoLuongVaThongTin(struct Product arr[], int *n) {
    int count;
    printf("Nhap so luong san pham muon them: ");
    scanf("%d", &count);
    
    if (*n + count > MAX_SIZE) {
        printf("Khong the them. Mang da day.\n");
        return;
    }
    
    for (int i = 0; i < count; i++) {
        printf("\nNhap thong tin cho san pham thu %d:\n", *n + 1);
        
        clearInputBuffer(); 

        printf("Ma san pham (ID): ");
        fgets(arr[*n].id, 10, stdin);
        arr[*n].id[strcspn(arr[*n].id, "\n")] = 0;
        
        printf("Ten san pham (Name): ");
        fgets(arr[*n].name, 100, stdin);
        arr[*n].name[strcspn(arr[*n].name, "\n")] = 0;

        printf("Gia nhap (Import Price): ");
        scanf("%f", &arr[*n].importPrice);

        printf("Gia ban (Sell Price): ");
        scanf("%f", &arr[*n].sellPrice);
        
        printf("So luong ton kho (Quantity): ");
        scanf("%d", &arr[*n].quantity);
        
        (*n)++;
    }
    printf("\nDa them %d san pham ban dau vao danh sach.\n", count);
}

void hienThiDanhSach(struct Product arr[], int n) {
    if (n == 0) {
        printf("Danh sach san pham hien tai rong.\n");
        return;
    }
    printf("\n%-10s %-30s %-15s %-15s %-10s\n", "MA SP", "TEN SAN PHAM", "GIA NHAP", "GIA BAN", "SO LUONG");
    printf("----------------------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-10s %-30s %-15.2f %-15.2f %-10d\n", 
               arr[i].id, 
               arr[i].name, 
               arr[i].importPrice, 
               arr[i].sellPrice, 
               arr[i].quantity);
    }
}

void nhapSanPham(struct Product arr[], int *n) {
    char searchID[10];
    int addedQuantity;
    float importPrice;

    clearInputBuffer();
    printf("Nhap Ma san pham (ID) muon nhap them: ");
    fgets(searchID, 10, stdin);
    searchID[strcspn(searchID, "\n")] = 0;
    
    printf("Nhap so luong can nhap: ");
    scanf("%d", &addedQuantity);

    printf("Nhap gia nhap (de tinh lai von): ");
    scanf("%f", &importPrice);
    
    int index = findProductIndex(arr, *n, searchID);

    if (index != -1) {
        arr[index].quantity += addedQuantity;
        arr[index].importPrice = importPrice; 
        g_totalRevenue -= (float)addedQuantity * importPrice;
        
        printf("Da cap nhat so luong cua san pham %s. So luong moi: %d.\n", arr[index].name, arr[index].quantity);
    } else {
        if (*n >= MAX_SIZE) {
            printf("Mang da day, khong the them san pham moi.\n");
            return;
        }

        printf("\nSan pham moi. Nhap thong tin day du:\n");
        strcpy(arr[*n].id, searchID);
        
        clearInputBuffer();
        printf("Ten san pham (Name): ");
        fgets(arr[*n].name, 100, stdin);
        arr[*n].name[strcspn(arr[*n].name, "\n")] = 0;
        
        arr[*n].importPrice = importPrice;
        
        printf("Gia ban (Sell Price): ");
        scanf("%f", &arr[*n].sellPrice);
        
        arr[*n].quantity = addedQuantity;
        
        g_totalRevenue -= (float)addedQuantity * importPrice;

        (*n)++;
        printf("Da them san pham moi '%s' vao danh sach.\n", arr[*n - 1].name);
    }
}

void capNhatThongTin(struct Product arr[], int n) {
    if (n == 0) {
        printf("Danh sach rong, khong co gi de cap nhat.\n");
        return;
    }

    char searchID[10];
    clearInputBuffer();
    printf("Nhap Ma san pham (ID) can cap nhat: ");
    fgets(searchID, 10, stdin);
    searchID[strcspn(searchID, "\n")] = 0;

    int index = findProductIndex(arr, n, searchID);

    if (index != -1) {
        printf("\nTim thay san pham: %s. Bat dau cap nhat...\n", arr[index].name);
        
        printf("Ten san pham moi (Name): ");
        fgets(arr[index].name, 100, stdin);
        arr[index].name[strcspn(arr[index].name, "\n")] = 0;
        
        printf("Gia nhap moi (Import Price): ");
        scanf("%f", &arr[index].importPrice);
        
        printf("Gia ban moi (Sell Price): ");
        scanf("%f", &arr[index].sellPrice);
        
        printf("So luong moi (Quantity): ");
        scanf("%d", &arr[index].quantity);

        printf("Cap nhat thong tin san pham thanh cong.\n");
    } else {
        printf("Khong tim thay san pham co Ma san pham '%s'.\n", searchID);
    }
}

void sapXepTheoGia(struct Product arr[], int n) {
    if (n <= 1) {
        printf("Khong can sap xep.\n");
        return;
    }

    struct Product temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].sellPrice > arr[j + 1].sellPrice) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Da sap xep san pham theo gia ban tang dan.\n");
    hienThiDanhSach(arr, n);
}

void timKiemSanPham(struct Product arr[], int n) {
    if (n == 0) {
        printf("Danh sach rong, khong the tim kiem.\n");
        return;
    }

    char searchName[100];
    clearInputBuffer();
    printf("Nhap Ten san pham can tim: ");
    fgets(searchName, 100, stdin);
    searchName[strcspn(searchName, "\n")] = 0;

    int foundCount = 0;
    
    printf("\nKET QUA TIM KIEM SAN PHAM THEO TEN CHUA '%s':\n", searchName);
    printf("%-10s %-30s %-15s %-15s %-10s\n", "MA SP", "TEN SAN PHAM", "GIA NHAP", "GIA BAN", "SO LUONG");
    printf("----------------------------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        if (strstr(arr[i].name, searchName) != NULL) {
            printf("%-10s %-30s %-15.2f %-15.2f %-10d\n", 
                   arr[i].id, 
                   arr[i].name, 
                   arr[i].importPrice, 
                   arr[i].sellPrice, 
                   arr[i].quantity);
            foundCount++;
        }
    }

    if (foundCount == 0) {
        printf("Khong tim thay san pham nao co ten chua '%s'.\n", searchName);
    }
}

void banSanPham(struct Product arr[], int n) {
    if (n == 0) {
        printf("Danh sach rong, khong co san pham de ban.\n");
        return;
    }

    char searchID[10];
    int sellQuantity;

    clearInputBuffer();
    printf("Nhap Ma san pham (ID) can ban: ");
    fgets(searchID, 10, stdin);
    searchID[strcspn(searchID, "\n")] = 0;
    
    int index = findProductIndex(arr, n, searchID);

    if (index != -1) {
        printf("San pham: %s. So luong ton kho: %d.\n", arr[index].name, arr[index].quantity);
        printf("Nhap so luong can ban: ");
        scanf("%d", &sellQuantity);
        
        if (arr[index].quantity == 0) {
            printf("SAN PHAM HET HANG.\n");
        } else if (sellQuantity > arr[index].quantity) {
            printf("KHONG DU HANG. Chi con %d san pham.\n", arr[index].quantity);
        } else {
            arr[index].quantity -= sellQuantity;
            
            float transactionRevenue = (float)sellQuantity * arr[index].sellPrice;
            g_totalRevenue += transactionRevenue;
            
            printf("Da ban thanh cong %d san pham %s.\n", sellQuantity, arr[index].name);
            printf("Doanh thu tu giao dich nay: %.2f.\n", transactionRevenue);
        }
    } else {
        printf("Khong tim thay san pham co Ma san pham '%s'.\n", searchID);
    }
}

void hienThiDoanhThu() {
    printf("\nTONG DOANH THU (Von da tru): %.2f\n", g_totalRevenue);
}
