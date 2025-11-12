#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (){
	char c[1000];
	int count = 1;
	printf("nhap chuoi ki tu: ");
	fgets(c,1000,stdin);
	for(int i =0;i<strlen(c);i++){
		if(c[i]==' '){
			count++;
		}
	}
		printf("so tu trong chuoi la : %d",count);	
}


