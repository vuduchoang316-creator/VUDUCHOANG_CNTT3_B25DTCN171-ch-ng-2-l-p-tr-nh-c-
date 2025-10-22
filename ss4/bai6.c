#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main(){
	int n,m;
	printf("nhap so dien da dung");
	scanf("%d",&n);
	
	 if (n>=0 && n<50){
	 	 m=n*10000;
	 	 	
	 }else if(n >= 50 && n<100){
	 	m=10000*50+(n-50)*15;
	 	
	 }else if(n>=100 && n<150){
	 	m =10000*50+15000*50+(n-100)*20000;
	 	
	 }else if (n>=150 && n<200){
	 	m=10000*50+15000*50+20000*50+(n-150)*25000;
	 	
	 }else{
	 	m=10000*50+20000*50+15000*50+25000*50+(n-200)*300;
	 }
	printf("tong tien phai tra %d",m);
	
	return 0;
}


