#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	int diem_toan , diem_van , diem_anh;
	printf("nhap diem toan ",diem_toan);
	scanf("%d",&diem_toan);
	printf("nhap diem van ",diem_van);
	scanf("%d",&diem_van);
	printf("nhap diem anh ",diem_anh);
	scanf("%d",&diem_anh);

int tong_diem = diem_toan+diem_van+diem_anh;
float diem_trung_binh = (tong_diem)/3;
    
    printf("tong diem %d\n diem trung binh %f",tong_diem,diem_trung_binh);


	
	
}

