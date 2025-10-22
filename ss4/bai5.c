#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	
	int n;
	
	printf("nhap so dien");
	scanf("%d",&n );
	
	 if (n>=0 && n<50){
	 	 	printf("gia dien 10000(vnd/kWh)"); 
	 	 	
	 }else if(n >= 50 && n<100){
	 	printf("gia dien 15000(vnd/kWh)");
	 	
	 }else if(n>=100 && n<1500){
	 	printf("gia dien 20000(vnd/kWh)");
	 	
	 }else if (n>=150 && n<200){
	 	printf("gia dien 25000(vdn/kWh)");
	 	
	 }else{
	 	printf("gia dien 30000 (vdn/kWh)");
	 }
	 
	
	return 0;
}


