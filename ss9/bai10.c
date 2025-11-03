#include <stdio.h>

int main() {
    int n, i, j, k;
    
    printf("Nhap vao so phan tu cua mang: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("So luong phan tu khong hop le hoac la 0.\n");
        return 0;
    }
    
    int arr[n];
    int temp_arr[n];
    int frequency[n];
    
    for (i = 0; i < n; i++) {
        printf("Nhap vao arr[%d]=", i);
        scanf("%d", &arr[i]);
        temp_arr[i] = arr[i];
        frequency[i] = 0;
    }
    
    printf("\nMang vua nhap: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int max_frequency = 0;
    
    for (i = 0; i < n; i++) {
        
        if (temp_arr[i] == -99999) {
            continue;
        }

        int current_count = 1;
        
        for (j = i + 1; j < n; j++) {
            
            if (temp_arr[i] == temp_arr[j]) {
                current_count++;
                temp_arr[j] = -99999;
            }
        }
        
        frequency[i] = current_count;
        
        if (current_count > max_frequency) {
            max_frequency = current_count;
        }
    }
    
    if (n <= 1) {
        max_frequency = 1;
    }
    
    printf("\n---");
    printf("\nTan suat lon nhat tim duoc la: **%d**\n", max_frequency);
    printf("Cac phan tu co tan suat %d lan la: ", max_frequency);
    
    int printed_values[n];
    int print_count = 0;

    for (i = 0; i < n; i++) {
        
        if (frequency[i] == max_frequency) {
            
            int current_value = arr[i];
            int already_printed = 0;

            for (k = 0; k < print_count; k++) {
                if (current_value == printed_values[k]) {
                    already_printed = 1;
                    break;
                }
            }
            
            if (already_printed == 0) {
                printf("%d ", current_value);
                printed_values[print_count++] = current_value;
            }
        }
    }
    
    printf("\n");
    return 0;	
}
