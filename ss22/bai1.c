#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100
struct Students{
	char name [50];
	int age;
	float grade;
};
typedef struct Students hs;
hs a[MAX];
int n=0;
void inPutstudents();
void disPlaystuden();
float AverageStudents();
int isAllSpace(char c[]);
int main (){
	int choice;
	while(choice!=4){
		system("cls");
		
		printf("---------memu---------\n");
		printf("\n1.nhap thong tin hoc sinh .");
		printf("\n2.hien thi thong tin hoc sinh.");
		printf("\n3.hien thi diem trung binh cua tat ca hoc sinh.");
		printf("\n4.thoat.");
		printf("\nmoi chon chuc nang:");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				inPutstudents();
				getchar();
				break;
			}
			case 2:{
				disPlaystuden();
				getchar();
				getchar();
				break;
			}
			case 3:{
				printf("diem cua ta ca hoc sinh la : %.2f\n",AverageStudents());
				getchar();
				getchar();
				break;
			}
			case 4:{
				printf("cam on vi da su dung @_@");
				return 0;
				break;
			}
			default:{
				printf("vui long chon tu 1-4 ##");
				break;
			}
		}
	}
}
//------- nhao thong tin hs-------
void inPutstudents(){
	hs s;
	do{
		printf("nhap so luong hoc sinh :");
		scanf("%d",&n);
		if(n<0 || n>MAX){
			printf("loi !!\n");
		}
	}while(n<0 || n>MAX);
	while(getchar()!='\n');
	for(int i=0;i<n;i++){
		do{
			printf("nhap ten hoc sinh :");
			fgets(s.name,sizeof(s.name),stdin);
			s.name[strcspn(s.name,"\n")]='\0';
			if(strlen(s.name)==0 || isAllSpace(s.name) ){
				printf("loi chua nhap ten hoc sinh!!\n");
			}
		}while(strlen(s.name)==0 || isAllSpace(s.name));
		
		//-----nhap tuoi------
		printf("nhap tuoi cua hsinh:");
		scanf("%d",&s.age);
		while(getchar()!='\n');
		printf("nhap diem trung binh:");
		scanf("%f",&s.grade);
		while(getchar()!='\n');
		a[i]=s;
	}
	printf("thong tin hoc sinh da nhap xong");
	
}
//---------hien thi thong tin hoc sinh-------
void disPlaystuden(){
	printf("\n------danh sach hoc sinh -------\n");
	printf("|%-15s|%-5s|%-5s|\n","ten","tuoi","dtb");
	printf("-----------------------------\n");
	for(int i=0;i<n;i++){
		printf("|%-15s|%-5d|%-5.2f|\n",a[i].name,a[i].age,a[i].grade);
	}
	printf("-----------------------------2");
}
float AverageStudents(){
	float sum=0;
	for(int i=0;i<n;i++){
		sum +=a[i].grade;
	}
	return sum/n;
}
//------ktra khoang trang-------
int isAllSpace(char c[]) {
    for (int i = 0; c[i] != '\0'; i++) {
        if (c[i] != ' ') return 0;
    }
    return 1;
}
