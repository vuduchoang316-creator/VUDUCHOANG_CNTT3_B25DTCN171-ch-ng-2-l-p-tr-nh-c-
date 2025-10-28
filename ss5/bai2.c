#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (){
	int a,b ;
	
	printf("nhap a: ");
	scanf("%d",&a);
	printf("nhap b: ");
	scanf("%d",&b);
	
	if( a==0 && b!=0 ){
		printf("phuong trinh vo nghiem");
		
	}else if(a==0 && b==0 ){
		printf("phuong trinh co vo so nghiem ");
	}else if (a!=0){
		float x = (float) - b / a ;
		printf("phuong trinh co nghiem duy nhat %.2f",x );
	}
	return 0;
}


