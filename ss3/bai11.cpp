#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (){
	int a ,b;
	printf("nhap so a ");
	scanf("%d",&a);
	
	printf("nhap so b ");
	scanf("%d",&b);
	
	 	 if (a<0,b<0 ){
	 	printf("nhap so > 0\n");
	 return 1;
}
    double S;
    S = (sqrt(pow(a,2) + pow(b,2)))/(a + b) + (sqrt(a)+sqrt(b))/(a*b);
	printf("%.2f",S);
	
	 return 0;
}


