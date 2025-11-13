#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
void inputString(char c[]){
	printf("nhap chuoi 1 : ");
	gets(c);
}
void nhapchuoi2(char s[]){
	printf("nhap chuoi 2 :");
	gets(s);
}

void noichuoi(char c[],char s[]){
	strcat(c,s);
	printf("%s\n",c);
}
int main (){
	char c[1000];
	char s[1000];
	inputString(c);
	nhapchuoi2(s);
	noichuoi(c,s);
}
