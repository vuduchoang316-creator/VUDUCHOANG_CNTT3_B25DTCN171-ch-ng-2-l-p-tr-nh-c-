#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (){
	int canh_day_tam_giac , chieu_cao_tam_giac;
	
	printf("nhap canh tam giac\n");
	scanf("%d",&canh_day_tam_giac);
	
	printf("nhap chieu cao tam giac");
	scanf("%d",&chieu_cao_tam_giac);
	
	float dien_tich_tam_giac= canh_day_tam_giac * chieu_cao_tam_giac /2;
	printf("dien tich tam giac bang %.2f",dien_tich_tam_giac);
	
	return 0;
	
}


