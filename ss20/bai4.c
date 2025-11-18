#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
typedef struct student{
	int id;
	char name[50];
	char phoneNumber[50];
	int age;
}Sinhvien;

int main (){
	Sinhvien sv[5];
	for(int i=0;i<5;i++){
		printf("nhap thong tin sinh vien thu %d\n",i+1);
		sv[i].id=i+1;
		printf("msv:%d",sv[i].id);
		printf("\nnhap ten :");
		gets(sv[i].name);
		printf("\nnhap tuoi:");
		scanf("%d",&sv[i].age);
		fflush(stdin);
		printf("\nnhap so dien thoai:");
		gets(sv[i].phoneNumber);
		
	}
	for(int i=0;i<5;i++){
		printf("\nmsv:%d",sv[i].id);
		printf("\nten:%s",sv[i].name);
		printf("\nsdt:%s",sv[i].phoneNumber);
		printf("\ntuoi:%d",sv[i].age);
	}
}


