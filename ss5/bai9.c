#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main  (){
	float he_so_luong;
	int so_ngay_cong,chuc_vu;
	long luong,thuong;
	long phu_cap=0;
	
	printf("nhap chuc vu 1:cn , 2:tt, 3:ql ");
	scanf("%d",&chuc_vu);
	
	printf("nhap so ngay cong");
	scanf("%d",&so_ngay_cong);
	
	printf("nhap he so luong");
	scanf("%f",&he_so_luong);
	
	

	
	
	switch(chuc_vu){
		case 1 :
				phu_cap=500000;
			if (so_ngay_cong >26){
				phu_cap=500000;
				thuong = (so_ngay_cong-26)*200000;
			}
			break;
			
		
		case 2:
				phu_cap = 1000000;
			
			if (so_ngay_cong >26){
				
				thuong = (so_ngay_cong-26)*200000;
			}
			break;
		case 3:
				phu_cap=2000000;
			if (so_ngay_cong > 26 ){
				
				thuong = (so_ngay_cong-26)*200000;
			}
			break;
		}
	 
		
		long 	tong_luong =  so_ngay_cong*160000*he_so_luong + phu_cap + thuong;
		printf("tong luong la :%ldVND ",tong_luong);
	return 0;
}
