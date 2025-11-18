#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
struct sinhvien{
	char id [50];
	char name [50];
	int age;
	char phoneNumber[50];
};
typedef struct sinhvien sv;
int main (){
	int n=5;
	sv a[50]={{"101","hung",18,"064163602636"},
				{"102","duc",18,"065515180058"},
				{"103","nam",18,"097855092695"},
				{"104","duong",18,"05198252158"},
				{"105","dung",18,"081151565156"}
			};
	printf("\n-------------danh sach sinh vien------------\n");
	printf("|%5s|%15s|%5s|%12s|\n","msv","ho va ten","tuoi","so dien thoai");
	for(int i=0;i<n;i++){
		printf("--------------------------------------------\n");
		printf("|%5s|%15s|%5d|%13s|\n",a[i].id,a[i].name,a[i].age,a[i].phoneNumber);
	}

	char new_name[50];
	char new_id[50];
	char new_phoneNumber[50];
	int new_age;
	printf("nhap ten sinh vien :");
	fgets(new_name,sizeof(new_name),stdin);
	new_name[strcspn(new_name,"\n")]='\0';
	printf("nhap ma sinh vien :");
	fgets(new_id,sizeof(new_id),stdin);
	new_id[strcspn(new_id,"\n")]='\0';
	printf("nhap so dien thoai:");
	fgets(new_phoneNumber,sizeof(new_phoneNumber),stdin);
	new_phoneNumber[strcspn(new_phoneNumber,"\n")]='\0';
	printf("nhap tuoi:");
	scanf("%d",&new_age);
	getchar();
	
		sv x;
	strcpy(x.id,new_id);
	strcpy(x.name,new_name);
	strcpy(x.phoneNumber,new_phoneNumber);
	x.age=new_age;
	
	printf("nhap vi tri can chen:");
	int pos;
	scanf("%d",&pos);
	if(pos<0 || pos>n){
		printf("loi vi tri!!!");
		return 0;
	} 
	for(int i=n;i>pos;i--){
		a[i]=a[i-1];
	}
	a[pos]=x;
	n++;
	printf("\n-------------danh sach sinh vien sau khi chen------------\n");
	printf("|%5s|%15s|%5s|%12s|\n","msv","ho va ten","tuoi","so dien thoai");
	for(int i=0;i<n;i++){
		printf("--------------------------------------------\n");
		printf("|%5s|%15s|%5d|%13s|\n",a[i].id,a[i].name,a[i].age,a[i].phoneNumber);
	}
} 

