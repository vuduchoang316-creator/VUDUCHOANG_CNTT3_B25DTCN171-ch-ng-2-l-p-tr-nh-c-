#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
int a,b,c,d , S;
 printf(" nhap so n ");
 int n;
 scanf("%d",&n);
 
	a = n%10;
	b= (n/10)%10;
	c= (n/100)%10;
	d = n/1000;
	
	S= a+b+c+d; 

 printf("S=%d",S);

	return 0;
}

