#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(){
	float dtb;
	printf("nhap diem trung binh");
	scanf("%f",&dtb);
	
	if(dtb >= 8){
		printf("hoc luc gioi");		
	}else if(dtb >= 6.5){
		printf("hoc luc kha");
	}else if(dtb >5 ){
		printf("hoc luc trung binh");
	}else {
		printf("hoc luc yeu");
		
	}
	
	return 0;
}

