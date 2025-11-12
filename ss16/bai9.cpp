#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	char c[1000];
	printf("nhap ky tu :");
	fgets(c,1000,stdin);
	int len = strlen(c);
	for(int i=0;i<len;i++){
		if(i==0 || c[i-1]==' ' && isalpha(c[i])){
			c[i]= toupper(c[i]);
		}
	}
	char x;
		int j ;
		
	printf("nhap phan tu can xoa :");
	scanf("%c",&x);
	for(int i =0;i<len;i++){
		if(c[i]==x){
			for( j=i;j<len;j++){
				c[j]=c[j+1];	
			}
			len--;
			j--;
		}
	}
	printf("sau khi xoa %s",c);
}


