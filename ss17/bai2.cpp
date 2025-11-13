#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
void inputString(char c[]){
	printf("nhap ky tu :");
	gets(c);
	
}
void chuyendoi(char c[]){
		int type;
		int i;
	do{
	
	printf("\n--------------------menu-----------------------\n");
	printf("nhap lua chon 1.in chu hoa ;2.in chu thuong\n");
	printf("chon chuc nang :\n");
	scanf("%d",&type);
	switch(type){
		case 1:{
			for( i=0 ; i<strlen(c); i++){
					c[i]=toupper(c[i]);
			}
			printf("%s",c);
			break;
		}
		case 2:{
			for(i =0;i<strlen(c);i++){
				c[i]=tolower(c[i]);
			}
			printf("%s",c);
			
			break;
		}	
		
	}
	}while(1);
}

int main(){
	char c[1000];
	
	inputString(c);
	
	chuyendoi(c);
	
}
