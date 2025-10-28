#include <stdio.h>
int main (){
	float a,tong_tien;
	printf("moi nhap so nc");
	scanf("%f",&a);
	
	if (a<0){
		tong_tien=a*0;
	}else if (a<=10){
		tong_tien = a*6000;
	}else if (a <=20 ){
		tong_tien = 10*6000+(a-10)*7000;
	}else if (a <= 30){
		tong_tien = 10*6000+10*7000+(a-20)*8500;
	}else{
		tong_tien=10*6000+10*7000+10*8500+(a-30)*10000;
	}
	printf("tong tien phai tra la : %.2f",tong_tien);
	
	
	return 0;
}
