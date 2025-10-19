#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	
	printf("nhap so nguyen duong ");
	int n;
	scanf("%d",&n );
	double A;
	A = 1.0/((n - 1) * n) + 1.0/(n * (n + 1)) + 1.0/((n + 1) * (n + 2));

	printf("%.5f",A);
	
	
 
 
	
}



