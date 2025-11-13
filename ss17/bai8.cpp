#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	char c [1000];
	printf("moi nhap mat khau:");
	fgets(c,1000,stdin);
	c[strcspn(c,"\n")]='\0';
	int len = strlen(c);
	int chu_hoa=0;int chu_thuong=0;int ki_tu_dac_biet=0;
	int so =0;
	if(len<=8){
		printf(" khong hop le ");
	}
	for(int i=0;i<len;i++){
		if(c[i]>='A' && c[i]<='Z'){
		chu_hoa=1;
		}else if(c[i]>='a' && c[i]<='z'){
			chu_thuong=1;
		}else if(c[i]>='0' && c[i]<='9'){
			so=1;
		}else{
			ki_tu_dac_biet=1;
		}
	}
	if(chu_hoa && chu_thuong && so && ki_tu_dac_biet){
		printf("hop le");
	}else{
		printf("khong hop le");
	}
	
} 


