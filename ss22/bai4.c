#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define MAX 1000
struct orderDate{
	int day;
	int month;
	int year;
};
struct  order_management{
	char id [15];
	char name[50];
	struct orderDate orderDate;
	double totalMoney; 
	char status[50];
};
typedef struct order_management OM ; 
OM a[MAX];
int n=0;
int check;
void inputOrderManagement();
void displayOrderManagement();
void UpdateStatus();
void DeleteOrderByCode();
void SortOrdersByTotalMoney(); 
void FindOdersById();
int isAllSpace(char c[]);
int trungid(char id[]);
int ktra_ngay(int day,int month,int year);
int ktra_thang(int month);
int main (){
	int choice;
	while(1){
		system("cls");
		printf("\n-----------------------------Menu---------------------------\n");
		printf("\n1.nhap thong tin don hang.");
		printf("\n2.hien thi thong tin don hang.");
		printf("\n3.cap nhat trang thai don hang.");
		printf("\n4.xoa don hang theo ma don hang.");
		printf("\n5.sap xep don hang theo tong tien.");
		printf("\n6.tim kiem don hang theo ma don hang.");
		printf("\n7.thoat.");
		printf("\nmoi chon chuc nang:");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				inputOrderManagement();
				break;
			}
			case 2:{
				displayOrderManagement();
				getchar(); 
				getchar(); 
				break;
			}
			case 3:{
				UpdateStatus();
				getchar();
				break;
			}
			case 4:{
				DeleteOrderByCode();
				getchar();
				break;
			}
			case 5:{
				SortOrdersByTotalMoney();
				getchar();
				getchar();
				break;
			}
			case 6:{
				FindOdersById();
				getchar();
				break;
			}
			case 7:{
				printf("cam on vi da su dung dich vu cham soc khach hang cua chung toi");
				return 0;
				break;
			}
			default:{
				printf("loi!! ban nen chon tu 1-7 de su dung chuc nang");
				break;
			}	
		}
	}
		
	
}

// -------------nhap thong tin don hang------------
void inputOrderManagement(){
		do{
			printf("nhap so luong don hang :");
			scanf("%d",&n);
			if(n<0 || n>MAX){
				printf("loi so luong don hang!!\n");
			}
		}while(n<0 || n>MAX);
		getchar();
		 	
		 for(int i=0;i<n;i++){
		 	printf("\nnhap thong tin don hang thu %d \n",i+1);
		 	fflush(stdin);
		 	OM s;
		 	//-----------NHAP MA DON HANG-----------------
		 	do{
		 		printf("moi ban nhan ma don hang:");
		 		fgets(s.id,sizeof(s.id),stdin);
		 		s.id[strcspn(s.id,"\n")]='\0';
		 		if(strlen(s.id)==0 || isAllSpace(s.id)){
		 			printf("loi chua nhap ma don hang!!\n");
				 }else{
				 	if(trungid(s.id)){
				 		printf("loi ma don hang da ton tai!!\n");
					 }
				 }	 
			 }while(strlen(s.id)==0 || isAllSpace(s.id) || trungid(s.id));
			 
			 //-----------------nhap ten don hang---------------
			 do{
			 	printf("moi ban nhap ten don hang:");
			 	fgets(s.name,sizeof(s.name),stdin);
			 	s.name[strcspn(s.name,"\n")]='\0';
			 	if(strlen(s.name)==0 || isAllSpace(s.name)){
			 		printf("chua nhap ten don hang !!\n");
				 }
			 }while(strlen(s.name)==0 || isAllSpace(s.name));
			
			//-------------nhap ngay thang nam cua don hang--------
			do{
				printf("moi nhap ngay thang nam cua don hang :");
				check=scanf("%d %d %d",&s.orderDate.day,&s.orderDate.month,&s.orderDate.year);
				if(check!=3){
					printf("nhap chua du ngay thang nam!!\n");
					continue;
				}
				if(!ktra_thang(s.orderDate.month)||!ktra_ngay(s.orderDate.day,s.orderDate.month,s.orderDate.year)){
					printf("loi nhap ngay thanf khong hop le!!\n");
				}
			}while(check!=3 || !ktra_thang(s.orderDate.month) || !ktra_ngay(s.orderDate.day,s.orderDate.month,s.orderDate.year));
			while(getchar()!='\n');
			
			//-------------gia tien cua don hang------------
			do{
				printf("moi nhap gia tien cua don hang:");
			check =	scanf("%lf",&s.totalMoney);
				if(check==0){
					printf("chua nnhap gia tien cua don hang!!");
				}
			}while( check==0);
			while(getchar()!='\n');
			
			//-----------cap nhat trang thai don hang--------------
			do{
				printf("cap nhat trang thai don hang:");
				fgets(s.status,sizeof(s.status),stdin);
				s.status[strcspn(s.status,"\n")]='\0';
				if(strlen(s.status)==0 || isAllSpace(s.status)){
					printf("chua cap nhat trang thai don hang!!");
				}
			}while(strlen(s.status)==0 || isAllSpace(s.status));
			a[i]=s; 
		 }	
		 	printf("nhap thong tin don hang thanh cong");
		 
}
//-----------in danh sach don hang-------------------
void displayOrderManagement(){
	system("cls");
    printf("\n----------------------------------- DANH SACH DON HANG ------------------------------\n");
    printf("|%-10s|%-20s|%-12s|%-20s|%-17s|\n",
           "Ma SP", "ten san pham", "ngay dat don", "trang thai don", "gia tien don hang");
    printf("-------------------------------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("|%-10s|%-20s|%02d/%02d/%04d  |%-20s|%-15.2f|\n",
               a[i].id,
               a[i].name,
               a[i].orderDate.day,
               a[i].orderDate.month,
	           a[i].orderDate.year,
               a[i].status,
               a[i].totalMoney);
        printf("-------------------------------------------------------------------------------------\n");
    }	
}

//---------------------cap nhat trang thai don hang---------------------------
void UpdateStatus(){
	char Update_id[50];
	while(getchar()!='\n');
	
	printf("nhap ma don hang can cap nhat:");
	fgets(Update_id,sizeof(Update_id),stdin);
	Update_id[strcspn(Update_id,"\n")]='\0';
	
	int found=0;
	for(int i=0;i<n;i++){
		if(strcmp(a[i].id,Update_id)==0){
			found = 1;
			printf("trang thai hien tai cua don hang %s",a[i].status);
			printf("cap nhat trang thai moi :");
			fgets(a[i].status,sizeof(a[i].status),stdin);
			a[i].status[strcspn(a[i].status,"\n")]='\0';
			printf("cap nhat trang thai thanh cong $_$\n");
			break; 
		}
	}
	if(!found){
		printf("khong tim thay don hang de cap nhat !!\n ");
	}
}

//------------xoa don theo ma----------------------
void DeleteOrderByCode(){
	char DeleteId[50];
	int pos;
	int flag=0;
	while(getchar()!='\n');
	printf("nhap ma don hang can xoa:");
	fgets(DeleteId,sizeof(DeleteId),stdin);
	DeleteId[strcspn(DeleteId,"\n")]='\0';
	for(int i=0;i<n;i++){
		if(strcmp(a[i].id,DeleteId)==0){
			pos=i;
			flag=1;
			break;
		}
	}
	if(flag==1){
		for(int i=pos;i<n-1;i++){
			a[i]=a[i+1];
		}
		n--;
		printf("don hang da xoa thanh cong \n");
	}else{
		printf("don hang xoa chua thanh cong !!\n");
	}
}

//-------sap xep don hang theo tong tien-------
void SortOrdersByTotalMoney(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j].totalMoney>a[j+1].totalMoney){
				OM temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("da sap xep thanh cong \n");
}

//-------tim kiem don hang theo ma don hang-------
void FindOdersById(){
	char FindId[50];
	int pos=-1;
	while(getchar()!='\n');
	printf("nhap ma don hang can tim kiem :");
	fgets(FindId,sizeof(FindId),stdin);
	FindId[strcspn(FindId,"\n")]='\0';
	
	for(int i=0;i<n;i++){
		if(strcmp(a[i].id,FindId)==0){
			pos = i;
			break;
		}
	}
	if(pos != -1){
		printf("tim thay san pham co ma la %s, ten sp %s,ngay dat hang %d-%d-%d,trang thai don hang %s,tien hang %.2f\n",a[pos].id,a[pos].name,a[pos].orderDate.day,
		a[pos].orderDate.month,a[pos].orderDate.year,a[pos].status,a[pos].totalMoney);
	}else{
		printf("khong tin thay !!/n");
	}
}
//----------------ktra khoan trang-------------------
int isAllSpace(char c[]) {
    for (int i = 0; c[i] != '\0'; i++) {
        if (c[i] != ' ') return 0;
    }
    return 1;
}
//-----check trung ma ------
int trungid(char id[]){
	for(int i=0;i<n;i++){
		if(strcmp(a[i].id,id)==0){
			return 1;
		}
	}
	return 0;
}
//---------------ktra ngay thang nam ---------------
int ktra_ngay(int days , int month,int year){
	if(days<1){
		return 0;
	}else if (month==1 || month==5 || month==3 || month==7 || month==8 || month==10 || month==12 ){
		if(days>31){
			return 0;
		}
	}else if(month == 2){
		if(year%400==0){
			if(days>29){
				return 0;
			}
		}else{
			if(days>28){
				return 0;
			}
		}
	}else if (month == 4 || month == 6 || month == 9 || month == 11){
		if(days>30){
			return 0;
		}
	}
	return 1;
}
//------------ktra thang--------------
int ktra_thang(int month){
	if(month<1 || month>12){
		return 0;
	}
	return 1;
}

