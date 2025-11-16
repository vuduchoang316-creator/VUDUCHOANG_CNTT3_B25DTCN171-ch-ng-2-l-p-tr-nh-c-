#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
void daochuoi(char *str ){
	char *start=str;
	char *end=str+strlen(str)-1;
	while(start<end){
		int temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	}
}
int main (){
 char c[1000];
	 printf("nhap chuoi:");
	 fgets(c,1000,stdin);
	 c[strcspn(c,"\n")]='\0';
	 printf("chuoi ban dau : %s\n",c);
	 daochuoi(c);
	 printf("chuoi sau dao nguoc la : %s",c);
}



