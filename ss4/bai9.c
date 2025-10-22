#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int is_leap(int y){
	if((y % 4 ==0 && y % 100 !=0) || (y % 400 == 0 )){
		return 1;
	}
	return 0;
}
int main (){
	int day,month,year,max_day;
	printf("nhap ngay ");
	scanf("%d",&day);
	printf("nhap thang ");
	scanf("%d",&month);
	printf("nhap nam ");
	scanf("%d",&year);
	
	if(year <= 0){
		printf("ngay thang nam khong hop le\n ");
		return 0;
	}
	
	if(month <1 || month > 12){
		printf("ngay thang nam khong hop le\n");
		return 0;
	}
	
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			max_day=31;
			break;
			
		case 2:
		if(is_leap(year)){
			max_day=29;
		}else{
			max_day=28;
		}		
			break;
			
			case 4:
			case 6:
			case 9:
			case 11:
				max_day=30;
				break;
	}
	if(day>=1 && day <= max_day){
		printf("ngay thang nam hop le");
		
	}else{
		printf("ngay thang nam khong hop le");
		
	}
	return 0;
	
} 

