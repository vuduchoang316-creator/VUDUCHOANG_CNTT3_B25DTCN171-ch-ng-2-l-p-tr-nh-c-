#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
void inputString(char c[]){
	printf("nhap ki tu :");
	gets(c);
	printf("chuoi vua nhap %s",c);
}

void xoakytu(char c[]){
	char x;
	printf("\nnhap vao ki tu vua xoa:");
	scanf("%c",&x);
	int i;
	int n = strlen(c);
	for(i=0;i<n;i++){
		if(c[i]==x){
			for(int j=i;j<n-1;j++){
				c[j]=c[j+1];
			}
			c[n-1]='\0';\
			n--;
			i--;
		}
		
	}
	printf("\nchuoi sau khi xoa : %s",c);
}
int main (){
	char c[1000];
	inputString(c);
	xoakytu(c);
}
