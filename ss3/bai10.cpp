#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (){
	
	printf(" nhap hai so nguyen a ");
	int a,b;
	scanf("%d",&a);
	printf("nhap so nguyen b");
	scanf("%d",&b);
	
	double S ;
	
	S = sqrt(a + sqrt(b + 1.0)) + sqrt(b + sqrt( pow(a,2) + pow(b,2)));
	printf("%.2f",S);
		return 0;
	
}

