#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(){
	float thue;
	int n ;
//	muc_thu_nhap = n
	printf("nhap muc thu nhap trong thang");
	scanf("%d",&n);
	
		if(n <= 5){
		float	thue = (float)n * 5 /100;
		printf("thu thu nhap ca nhan la : %.2f",thue);
		}else if(n <= 10){
		float	thue =(float) n * 10 / 100;
		printf("thue thu nhap ca nhan la: %.2f ",thue);
		}else{
		float	thue = (float)n * 15 / 100;
		printf("thue thu nhap ca nhan la: %.2f",thue);
		}			
 	
	
	return 0;
}

