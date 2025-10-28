#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	char c;
	char ket_qua;
	printf("nhap ki tu bat ky ");
	scanf("%c",&c);
		
		if (c>='a' && c<='z'){
			ket_qua =c-32;
			printf("chu_cai_hoa la '%c' ",ket_qua);
		}else if(c>='A' && c<= 'Z'){
			ket_qua = c+32;
			printf("chu cai thuong la : %c",ket_qua);
		}else{
				printf("loi ky tu");
		}
	
	return 0;
	
}


