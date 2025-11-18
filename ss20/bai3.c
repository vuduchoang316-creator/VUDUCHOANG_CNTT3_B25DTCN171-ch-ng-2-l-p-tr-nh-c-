#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
typedef struct student {
	char name[50];
	char phoneNumber[50];
	int age;
}SinhVien;

int main (){
	SinhVien sv[5];
	printf("--nhap thong tin sinh vien--\n ");
	
	for(int i=0;i<5;i++){
		printf("\nsinh vien thu %d\n",i+1);
		printf("ten:");
		gets(sv[i].name);
		printf("tuoi:");
		scanf("%d",&sv[i].age);
		fflush(stdin);
		printf("so dien thoai :");
		gets(sv[i].phoneNumber);
	}
	printf("\n***********danh sach sinh vien**********\n");
	for(int i=0;i<5;i++){
		printf("sinh vien thu %d",i+1);
		printf("\nten :%s",sv[i].name);
		printf("\ntuoi:%d",sv[i].age);
		printf("\nso dien thoai :%d",sv[i].phoneNumber);
		printf("\n----------------\n");
	}
	
	
}

