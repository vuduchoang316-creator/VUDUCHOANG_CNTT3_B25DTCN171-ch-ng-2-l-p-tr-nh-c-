#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	char a[1000];
	printf("nhap chuoi a :");
	fgets(a,1000,stdin);
	char b[1000];
	printf("nhap chuoi b :");
	fgets(b,1000,stdin);
	int i,j;
	int found =0;
	for(i=0;i<strlen(a);i++){
		for(j=0;j<strlen(b);j++){
			if(a[i+j]!=b[j])
			break;
		}
		if(j==strlen(b)){
			found=1;
		}
	}
	if(found==1){
		printf("%s la chuoi con cua %s",b,a);
	}else{
		printf("%s khong la chuoi con cua %s",b,a);
	}
	 
}


