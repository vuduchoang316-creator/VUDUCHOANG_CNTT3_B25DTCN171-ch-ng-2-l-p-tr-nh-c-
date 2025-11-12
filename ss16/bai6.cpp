#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	char c[1000];
	int count=0;
	printf("nhap ki tu :");
	fgets(c,1000,stdin);
	for(int i =0;i<strlen(c);i++){
		if(c[i]>='a' && c[i]<='z' || c[i]>='A' && c[i]<='Z'){
			count++;
		}
	}
	printf("so chu cai trong chuoi la %d",count);
}


