#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	char c[1000];
	char s[1000];
	printf("nhap chuoi thu 1 :");
	gets(c);
	printf("nhap chuoi thu 2 :");
	gets(s);
	if(strcmpi(c,s)==0){
		printf("giong nhau");
	}else{
		printf("khac nhau ");
	}	
}


