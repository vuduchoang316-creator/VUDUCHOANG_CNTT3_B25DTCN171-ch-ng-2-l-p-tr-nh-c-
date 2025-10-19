#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main () {
	printf("nhap ban kinh hinh tron :");
	int a; 
	scanf("%d",&a);
	
	float PI = M_PI;

	float chu_vi = 2*a*PI;
	printf("chu vi %.2f \n",chu_vi );
	float dien_tich = pow(a,2)*PI;
	printf("dien tich %.2f",dien_tich);
	 return 0;
	
	
	
	
}



