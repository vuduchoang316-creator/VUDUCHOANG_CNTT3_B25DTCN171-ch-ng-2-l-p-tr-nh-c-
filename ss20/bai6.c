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
	char phonenumber[50];

};
typedef struct sinhvien sv;
int main (){
	int n=5;
	sv a[50]={{"101","nguyen van a",22,"012345678"},
				{"102","nguyen van b",25,"1151531"},
				{"103","nguyen van c",20,"212516515"},
				{"104","nguyen thi d",24,"516151511"},
				{"105","nguyen thanh e",26,"621226516"},
			};
	printf("-------------danh sach sinh vien-----------\n");
	printf("|%5s|%15s|%5s|%12s|\n","msv","ho va ten","tuoi","so dien thoai");
	for(int i=0;i<n;i++){
		printf("|----------------------------------------\n");
		printf("|%5s|%15s|%5d|%12s|\n",a[i].id,a[i].name,a[i].age,a[i].phonenumber);
	}
		printf("them sinh vien \n");
		char new_name[50];
		char new_id[50];
		int new_age;
		char new_phoneNumber[50];
		printf("nhap ten sinh vien :");
		fgets(new_name,50,stdin);
		new_name[strcspn(new_name,"\n")]='\0';
		
		printf("nhap ma sinh vien ");
		fgets(new_id,50,stdin);
		new_id[strcspn(new_id,"\n")]='\0';
		
		printf("nhap tuoi :");
		scanf("%d",&new_age);
		fflush(stdin);
		
		printf("nhap so dien thoai:");
		fgets(new_phoneNumber,50,stdin);
		new_phoneNumber[strcspn(new_phoneNumber,"\n")]='\0';
		strcpy(a[n].name,new_name);
		strcpy(a[n].id,new_id);
		strcpy(a[n].phonenumber,new_phoneNumber);
		a[n].age=new_age;
		 n++;
		 printf("\n---------------danh sach sinh vien sau khi them-------------\n ");
		 printf("|%5s|%15s|%5s|%12s|\n","msv","ho va ten","tuoi","so dien thoai");
		 for(int i=0;i<n;i++){
			printf("|----------------------------------------\n");
			printf("|%5s|%15s|%5d|%12s|\n",a[i].id,a[i].name,a[i].age,a[i].phonenumber);	 	
		 }	
}

