#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	char c[1000];
	printf("nhap chuoi ki ty ");
	fgets(c,1000,stdin);
	c[strcspn(c,"\n")]='\0';
	int len = strlen(c);
	for(int i=0;i<len;i++){
		if(i==0 || c[i-1]==' ' ){
			c[i] = toupper(c[i]);
		}
	}
	printf("%s",c);
	
}


