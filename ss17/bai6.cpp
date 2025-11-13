#include <stdio.h>
#include <string.h>

int main() {
    char c[1000];
    printf("Moi nhap chuoi: ");
    fgets(c, 1000, stdin);

    
    c[strcspn(c, "\n")] = '\0';

    
    int i = 0;
    while(c[i] == ' ') i++;
    int j = 0;
    while(c[i] != '\0') {
        c[j++] = c[i++];
    }
    c[j] = '\0';

  
    int len = strlen(c);
    while(len > 0 && c[len-1] == ' ') {
        c[len-1] = '\0';
        len--;
    }

    int n = strlen(c);
    int maxlength = 0;

    for(i = 0; i < n; ) {
        while(i < n && c[i] == ' ') i++;
        int start = i;
        while(i < n && c[i] != ' ') i++;
        int lenWord = i - start;
        if(lenWord > maxlength) maxlength = lenWord;
    }

    printf("Do dai lon nhat: %d\n", maxlength);
    printf("Cac tu dai nhat:\n");

    
    for(i = 0; i < n; ) {
        while(i < n && c[i] == ' ') i++;
        int start = i;
        while(i < n && c[i] != ' ') i++;
        int lenWord = i - start;
        if(lenWord == maxlength) {
            for(int k = start; k < i; k++)
                printf("%c", c[k]);
            printf("\n");
        }
    }

    return 0;
}

