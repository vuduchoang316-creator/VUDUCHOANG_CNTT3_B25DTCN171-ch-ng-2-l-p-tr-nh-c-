#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define Max 100
struct Birthday{
	int day;
	int month;
	int year;
};
struct Student{
	char id[10];
	char name[50];
	struct Birthday day ;
	char Address[200];
	char phoneNumber[15];
};
typedef struct Student sv;
 sv a[100];
 int n=0;
 int check;
void nhap();
int trungid(char id[]);
int trungten(char name[]);
int trungsdt(char sdt[]);
int isAllSpace(char c[]);
int ktra_ngay(int days, int month, int year);
int ktra_thang(int month);
int ktra_nam(int year);
void in(); 
void them(); 
void xoa();
void capnhat();
void sapxep();
void timkiem();
int main (){
	int choice;
	while(1){
		system("cls");
		printf("\n-----------------------------menu---------------------------\n");
		printf("\n1.nhap thong tin sinh vien.");
		printf("\n2.hien thi thong tin sinh vien.");
		printf("\n3.them thong tin sinh vien vao cuoi danh sach.");
		printf("\n4.xoa sinh vien theo ma sinh vien.");
		printf("\n5.cap nhat thong tin sinh vien theo ma sinh vien.");
		printf("\n6.sap xep sinh vien theo ho ten (A-Z).");
		printf("\n7.tim kiem sinh vien theo ma sinh vien .");
		printf("\n8.thoat.");
		printf("\nmoi chon chuc nang:");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				nhap();
				getchar(); 
				break;
			}
			case 2:{
				in();
				getchar();
				getchar(); 
				break;
			}
			case 3:{
				them();
				getchar();
				break;
			}
			case 4:{
				xoa();
				getchar();
				break;
			}
			case 5:{
				capnhat();
				getchar();
				break;
			}
			case 6:{
				sapxep();
				getchar();
				getchar();
				break;
			}
			case 7:{
				 timkiem();
				 getchar();
				 getchar;
				break;
			}
			case 8:{
				return 0;
				break;
			}
			default:{
				printf("vui long chon chuc nang tu 1-8");
				break;
			}
		}
	}
	
	
}
void nhap(){

	do{
		printf("nhap so sinh vien can them : ");
		scanf("%d",&n);
		if(n<1 || n>Max){
			printf("loi!\n");
		}
	}while(n<1 || n>Max);
	getchar();
	
	for(int i=0;i<n;i++){
		printf("moi dien thong tin cho sinh vien thu %d\n",i+1);
		sv s;

		do{
			printf("moi nhap ma sinh vien :");
			fgets(s.id,sizeof(s.id),stdin);
			s.id[strcspn(s.id,"\n")]='\0';
			if(strlen(s.id)==0 || isAllSpace(s.id) ){
				printf("loi chua nhap ma sinh vien !!\n");
			}else{
				if(trungid(s.id)){
					printf("ma sinh vien da ton tai!!\n");
				}
			}
		}while(strlen(s.id)==0 || isAllSpace(s.id)|| trungid(s.id));
	
		do{
			printf("moi nhap ten sinh vien :");
			fgets(s.name,sizeof(s.name),stdin);
			s.name[strcspn(s.name,"\n")]='\0';
			if(strlen(s.name)==0 || isAllSpace(s.name) ){
				printf("loi chua nhap ten sinh vien !!\n");
			}else{
				if(trungten(s.name)){
					printf("ten sinh vien da ton tai!!\n");
				}
			}
		}while(strlen(s.name)==0 || isAllSpace(s.name) || trungten(s.name));
		
		do{
			printf("moi nhap ngay thang nam sinh cua sinh vien: ");
		 		 check =	scanf("%d%d%d",&s.day.day,&s.day.month,&s.day.year);
				if(!ktra_thang(s.day.month) || !ktra_nam(s.day.year) || !ktra_ngay(s.day.day,s.day.month,s.day.year)){
					printf("ngay thang nam khong hop le!!\n");
				}
				if(check!=3){
					printf("loi chua nhap du ngay thang nam !!\n");
					while(getchar() !='\n');
					continue;
				}
		}while(!ktra_thang(s.day.month) || !ktra_nam(s.day.year) || !ktra_ngay(s.day.day,s.day.month,s.day.year) || check!=3);
			while(getchar()!='\n'); 
		
			do{
			printf("moi nhap dia chi sinh vien ");
			fgets(s.Address,sizeof(s.Address),stdin);
			s.Address[strcspn(s.Address,"\n")]='\0';
			if(strlen(s.Address)==0 || isAllSpace(s.Address) ){
				printf("loi chua nhap dia chi sinh vien !!\n");
			}
		}while(strlen(s.Address)==0 || isAllSpace(s.Address));
		
			do{
			printf("moi nhap so dien thoai sinh vien: ");
			fgets(s.phoneNumber,sizeof(s.phoneNumber),stdin);
			s.phoneNumber[strcspn(s.phoneNumber,"\n")]='\0';
			if(strlen(s.phoneNumber)==0 || isAllSpace(s.phoneNumber) ){
				printf("loi chua nhap so dien thoai sinh vien !!\n");
			}
			if(trungsdt(s.phoneNumber)){
				printf("so dine thoai da ton tai !!\n");
			}
		}while(strlen(s.phoneNumber)==0 || isAllSpace(s.phoneNumber) || trungsdt(s.phoneNumber));
		a[i]=s;
		printf("da nhap xong thong tin "); 
	}	
}
int trungid(char id[]){
	for(int i=0;i < n;i++){
		if(strcmp(a[i].id,id)==0){
		return 1 ;
		}
	}	
	return 0 ;
}
int trungten(char name[]){
	for(int i=0;i < n;i++){
		if(strcmp(a[i].name,name)==0){
		return 1 ;
		}
	}	
	return 0;
}
//------------trungsdt-------------------
int trungsdt(char sdt[]){
	for(int i=0;i<n;i++){
		if(strcmp(a[i].phoneNumber,sdt)==0){
			return 1;
		}
	}
	return 0;
}
//-------------ktra khoang trang------------------
int isAllSpace(char c[]) {
    for (int i = 0; c[i] != '\0'; i++) {
        if (c[i] != ' ') return 0;
    }
    return 1;
}
// ---------------------ktra ngay thang nam -------------------
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
int ktra_thang(int month){
	if(month<1 || month>12){
		return 0;
	}
	return 1;
}
int ktra_nam(int year){
	if(year<1900 || year>2025){
		return 0;
	}
	return 1;
}

void in() {
    system("cls");
    printf("\n----------------------------------- DANH SACH SINH VIEN -------------------------------------\n");
    printf("|%-10s|%-20s|%-12s|%-30s|%-15s|\n",
           "Ma SV", "Ho va ten", "Ngay sinh", "Dia chi", "SDT");
    printf("----------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("|%-10s|%-20s|%02d/%02d/%04d  |%-30s|%-15s|\n",
               a[i].id,
               a[i].name,
               a[i].day.day,
               a[i].day.month,
               a[i].day.year,
               a[i].Address,
               a[i].phoneNumber);
        printf("----------------------------------------------------------------------------------------------\n");
    }
}
void them(){
	printf("moi  nhap thong tin sinh vien can them\n");
	sv s;
	fflush(stdin);

		do{
			printf("moi nhap ma sinh vien :");
			fgets(s.id,sizeof(s.id),stdin);
			s.id[strcspn(s.id,"\n")]='\0';
			if(strlen(s.id)==0 || isAllSpace(s.id) ){
				printf("loi chua nhap ma sinh vien !!\n");
			}else{
				if(trungid(s.id)){
					printf("ma sinh vien da ton tai!!\n");
				}
			}
		}while(strlen(s.id)==0 || isAllSpace(s.id)|| trungid(s.id));
	
		do{
			printf("moi nhap ten sinh vien :");
			fgets(s.name,sizeof(s.name),stdin);
			s.name[strcspn(s.name,"\n")]='\0';
			if(strlen(s.name)==0 || isAllSpace(s.name) ){
				printf("loi chua nhap ten sinh vien !!\n");
			}else{
				if(trungten(s.name)){
					printf("ten sinh vien da ton tai!!\n");
				}
			}
		}while(strlen(s.name)==0 || isAllSpace(s.name) || trungten(s.name));
			
		do{
			printf("moi nhap ngay thang nam sinh cua sinh vien: ");
		 		 check =	scanf("%d%d%d",&s.day.day,&s.day.month,&s.day.year);
				if(!ktra_thang(s.day.month) || !ktra_nam(s.day.year) || !ktra_ngay(s.day.day,s.day.month,s.day.year)){
					printf("ngay thang nam khong hop le!!\n");
				}
				if(check!=3){
					printf("loi chua nhap du ngay thang nam !!\n");
					while(getchar() !='\n');
					continue;
				}
		}while(!ktra_thang(s.day.month) || !ktra_nam(s.day.year) || !ktra_ngay(s.day.day,s.day.month,s.day.year) || check!=3);
			while(getchar()!='\n'); 
			
			do{
			printf("moi nhap dia chi sinh vien ");
			fgets(s.Address,sizeof(s.Address),stdin);
			s.Address[strcspn(s.Address,"\n")]='\0';
			if(strlen(s.Address)==0 || isAllSpace(s.Address) ){
			printf("loi chua nhap dia chi sinh vien !!\n");
			}
		}while(strlen(s.Address)==0 || isAllSpace(s.Address));
		
			do{
			printf("moi nhap so dien thoai sinh vien: ");
			fgets(s.phoneNumber,sizeof(s.phoneNumber),stdin);
			s.phoneNumber[strcspn(s.phoneNumber,"\n")]='\0';
			if(strlen(s.phoneNumber)==0 || isAllSpace(s.phoneNumber) ){
				printf("loi chua nhap so dien thoai sinh vien !!\n");
			}
		}while(strlen(s.phoneNumber)==0 || isAllSpace(s.phoneNumber));
		a[n]=s;
		n++;
		printf("da them xinh vien  "); 
		fflush(stdin);
}
void xoa(){

	char new_id[50];
	int flag=0;
	printf("moi ban nhap ma sinh vien can xoa :");
	fflush(stdin);
	fgets(new_id,sizeof(new_id),stdin);
	new_id[strcspn(new_id,"\n")]='\0';
	
		for(int i=0;i<n;i++){
			if(strcmp(a[i].id,new_id)==0){
		  		for(int j=i;j<n-1;j++){
					a[i]=a[i+1];
				} 
				n--;
				flag=1;
				break;
			}	
		}
		if(flag==1){
			printf("da xoa thanh cong sinh vien co ma %s",new_id);
		}else{
		printf("chua xoa khong thanh cong sinh vien co ma %s",new_id);
		}
}

void capnhat(){
    char update_id[50];
    sv s;  

    printf("nhap ma sinh vien can cap nhat : ");
    fflush(stdin);
    fgets(update_id, sizeof(update_id), stdin);
    update_id[strcspn(update_id, "\n")] = '\0';

    for(int i = 0; i < n; i++){
        if(strcmp(a[i].id, update_id) == 0){

            // ------------------ CAP NHAT ID ------------------
            do{
                printf("moi nhap ma sinh vien : ");
                fgets(s.id, sizeof(s.id), stdin);
                s.id[strcspn(s.id, "\n")] = '\0';

                if(strlen(s.id) == 0 || isAllSpace(s.id)){
                    printf("loi chua nhap ma sinh vien !!\n");
                } else {
                    if(trungid(s.id) && strcmp(s.id, a[i].id) != 0){
                        printf("ma sinh vien da ton tai!!\n");
                    }
                }

            }while(strlen(s.id)==0 || 
                   isAllSpace(s.id) || 
                   (trungid(s.id) && strcmp(s.id, a[i].id) != 0));

            
            // ------------------ CAP NHAT TEN ------------------
            do{
                printf("moi nhap ten sinh vien : ");
                fgets(s.name, sizeof(s.name), stdin);
                s.name[strcspn(s.name, "\n")] = '\0';

                if(strlen(s.name)==0 || isAllSpace(s.name)){
                    printf("loi chua nhap ten sinh vien !!\n");
                } else {
                    if(trungten(s.name) && strcmp(s.name, a[i].name) != 0){
                        printf("ten sinh vien da ton tai!!\n");
                    }
                }

            }while(strlen(s.name)==0 || 
                   isAllSpace(s.name) || 
                   (trungten(s.name) && strcmp(s.name, a[i].name) != 0));

            

            // ------------------ NGAY THANG NAM SINH ------------------
            do{
                printf("moi nhap ngay thang nam sinh cua sinh vien: ");
                check = scanf("%d%d%d", &s.day.day, &s.day.month, &s.day.year);

                if(check != 3){
                    printf("loi chua nhap du ngay thang nam !!\n");
                    while(getchar()!='\n');
                    continue;
                }

                if(!ktra_thang(s.day.month) || 
                   !ktra_nam(s.day.year) || 
                   !ktra_ngay(s.day.day, s.day.month, s.day.year)){
                    printf("ngay thang nam khong hop le!!\n");
                }

            }while(check != 3 || 
                   !ktra_thang(s.day.month) ||
                   !ktra_nam(s.day.year) || 
                   !ktra_ngay(s.day.day, s.day.month, s.day.year));

            while(getchar()!='\n'); 
            
            // ------------------ DIA CHI ------------------
            do{
                printf("moi nhap dia chi sinh vien: ");
                fgets(s.Address, sizeof(s.Address), stdin);
                s.Address[strcspn(s.Address, "\n")] = '\0';

                if(strlen(s.Address)==0 || isAllSpace(s.Address)){
                    printf("loi chua nhap dia chi sinh vien!!\n");
                }

            }while(strlen(s.Address)==0 || isAllSpace(s.Address));

 
            while(getchar()!='\n'); 

            // ------------------ SO DIEN THOAI ------------------
            do{
                printf("moi nhap so dien thoai sinh vien: ");
                fgets(s.phoneNumber, sizeof(s.phoneNumber), stdin);
                s.phoneNumber[strcspn(s.phoneNumber, "\n")] = '\0';

                if(strlen(s.phoneNumber)==0 || isAllSpace(s.phoneNumber)){
                    printf("loi chua nhap so dien thoai sinh vien !!\n");
                }

            }while(strlen(s.phoneNumber)==0 || isAllSpace(s.phoneNumber));

            // ------------------ GHI VÀO M?NG ------------------
            a[i] = s;

            printf("cap nhat thong tin thanh cong");
            return;
        }
    }

    printf("khong tim thay sv de cap nhat ");
}
void sapxep(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(strcmp(a[j].name,a[j+1].name)>0){
				sv temp = a[j];
				a[j] = a[j+1] ;
				a[j+1] = temp;
				
			}
		}
	}
	printf("da sap xep thanh cong");
}
void timkiem(){
	char new_idsv[50];
	int pos =-1;
	printf("moi nhap ma sv de tim kiem :");
	while(getchar()!='\n');
	fgets(new_idsv,sizeof(new_idsv),stdin);
	new_idsv[strcspn(new_idsv,"\n")]='\0';
	fflush(stdin);
	for(int i=0;i<n;i++){
		if(strcmp(a[i].id,new_idsv)==0){
			pos=i;
			break;
		}
	}
	if(pos!=-1){
		printf("da tim thay sinh vien ma %s | ten %s | ngay sinh %d-%d-%d | dia chi %s | so dien thoai:%s",a[pos].id,a[pos].name,a[pos].day.day,a[pos].day.month,a[pos].day.year
		,a[pos].Address,a[pos].phoneNumber);
	}else{
		printf("khong tim thay sinh vien co ma so %s",new_idsv);
	}
}

