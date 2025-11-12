#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


int main (){
	char string[50];
	printf("moi ban nhap chuoi ki tu: ");
	fgets(string,50,stdin);
	printf("ky tu duoc in ra : %s",string);
	printf("\ndo dai chuoi:%zu\n",strlen(string));

}
