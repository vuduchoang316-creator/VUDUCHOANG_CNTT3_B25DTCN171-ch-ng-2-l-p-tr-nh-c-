#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (){
	char str[]="hello world";
	int count = 0;
	char c;
	printf("moi nhap ki tu ");
	scanf("%c",&c);
	for(int i =0 ; i<strlen(str-1);i++){
		if(str[i]==c){
			count++;
		}
	}
	printf("phan tu %c xuat hien %d lan o ki tu da gan ",c,count);
	
}

