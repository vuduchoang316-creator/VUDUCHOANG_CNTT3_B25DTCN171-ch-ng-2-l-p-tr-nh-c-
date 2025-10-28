#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(){
	double  a , b, ket_qua ;
	printf("nhap so a");
	scanf("%lf",&a);
	printf("nhap so b");
	scanf("%lf",&b);
	char toan_tu;
	 printf("nhap vao 1 toan tu (+ , - ,* ,/  ):");
	 scanf(" %c",&toan_tu);
	switch(toan_tu){
		case '+' :
			ket_qua = a+b ;
			printf("%2.lf+%2.lf = %2.lf",a,b,ket_qua);
				break;
		case'-':
			ket_qua=a-b;
			printf("%2.lf-%2.lf = %2.lf",a,b,ket_qua);
				break;
		case'*':
			ket_qua=a*b;
			printf("%2.lf*%2.lf = %2.lf",a,b,ket_qua);
				break;
		case '/' :	
			ket_qua= a/b;
			printf("%.2lf / %.2lf = %.2lf",a,b,ket_qua);
				break;
	}
	
	
	
	return 0;
	
}


