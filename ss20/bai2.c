#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
struct student{
	char name[50];
	char phoneNumber[50];
	int age;
};
int main (){
	struct student student2;
	printf("nhap ten sinh vien :");
	fgets(student2.name,50,stdin);
	fflush(stdin);
	
	printf("nhap so dien thoai:");
	fgets(student2.phoneNumber,50,stdin);
	fflush(stdin);
	printf("nhap tuoi");
	scanf("%d",&student2.age);
	printf("\ntuoi la :%d",student2.age);
	printf("\nten sinh vien la:%s\n",student2.name);
	printf("so dien thoai la :%s",student2.phoneNumber);
	
	
	
}

