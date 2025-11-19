#include <stdio.h>
#include <string.h>

// 1. Khai báo struct Product
struct Product {
    char name[50];
    float price;
    int quantity;
};

int main() {
   
    const int num_products = 5;
    struct Product products[num_products];
    int i;
    
    float totalValue = 0.0; 

    printf("***** CHUONG TRINH QUAN LY GIA TRI SAN PHAM *****\n");
    
    
    for (i = 0; i < num_products; i++) {
        printf("\n--- Nhap thong tin cho san pham so %d ---\n", i + 1);
        
        
        int c;
        while ((c = getchar()) != '\n' && c != EOF); 

        printf("  Ten san pham (Name): ");
        fgets(products[i].name, 50, stdin);
       
        products[i].name[strcspn(products[i].name, "\n")] = 0; 

        printf("  Gia (Price): ");
        scanf("%f", &products[i].price);

        printf("  So luong (Quantity): ");
        scanf("%d", &products[i].quantity);
    }

    for (i = 0; i < num_products; i++) {
        totalValue += (products[i].price * products[i].quantity);
      
    }


    printf("\n***** KET QUA *****\n");
    printf("Tong gia tri cua tat ca %d san pham la: %.2f VND\n", num_products, totalValue);

    return 0;
}


