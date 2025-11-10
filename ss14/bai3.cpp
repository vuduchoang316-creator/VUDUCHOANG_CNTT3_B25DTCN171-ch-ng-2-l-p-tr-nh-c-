#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int sum (int a , int b ){
	return a+b;
}

int main (){	
	int a , b ;
	printf("nhap 2 so a,b:");
	scanf("%d%d",&a,&b);
	int c = sum(a , b);
	printf("%d+%d=%d",a,b,c);
	
}
