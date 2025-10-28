#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main(){
	int n,tuoi,tien_ve ;
	n = 20000;
	printf("nhap tuoi");
	scanf("%d",&tuoi);
		if(tuoi < 0 ){
			printf("tuoi khong hop le");
		}else if (tuoi < 6){
			tien_ve = n*0/100;
			printf("so tien ve : %dVND",tien_ve);
		}else if (tuoi <= 18){
			tien_ve = n*50/100 ; 
			printf("so tien ve la: %dVND",tien_ve);
		}else if (tuoi <= 60){
			tien_ve = n;
			printf("so tien ve la: %dVND",tien_ve);
		}else{
			tien_ve = n * 70/100;
			printf("so tien ve la : %dVND",tien_ve);
		return 0;
}  
}
