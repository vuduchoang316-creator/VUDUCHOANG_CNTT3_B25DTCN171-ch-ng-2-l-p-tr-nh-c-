#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100
struct Contact{
	char name [50];
	char PhoneNumber[15];
	char email[50];
};
typedef struct Contact db;
db a[MAX];
int n=0;
void Add();
void in();
void Find();
void deletelh();
int main (){
	int choice;
	while(choice!=5){
		system("cls");
		printf("\n---------------menu-------------\n");
		printf("\n1.them lien he moi.");
		printf("\n2.hien thi tat ca lien he.");
		printf("\n3.tim kiem lien he theo ten.");
		printf("\n4.xoa lien he theo ten.");
		printf("\n5.thoat.");
		printf("chon chuc nang:");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				Add();
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
			Find();
			getchar();	
			break;
			}
			case 4:{
				deletelh();
				getchar();
				break;
			}
			case 5:{
				printf("cam on ");
				return 0;
				break;
			}
			default:{
				printf("nhap tu 1-5");
				break;
			}	
		}
	}
}

// ----them lien he moi------
void Add(){
	db s;
	do{
		printf("nhap so lien he moi can them:");
		scanf("5d",&n);
		if(n<0){
			printf("loi !!\n");
		}
	}while(n<0);
	while(getchar()!='\n');
	
	for(int i=0;i<n;i++){
		printf("ten lien he :");
		fgets(s.name,sizeof(s.name),stdin);
		s.name[strcspn(s.name,"\n")]='\0';
		
		printf("nhap dia chi email:");
		fgets(s.email,sizeof(s.email),stdin);
		s.email[strcspn(s.email,"\n")]='\0';
		
		printf("nhap so dien thoai:");
		fgets(s.PhoneNumber,sizeof(s.PhoneNumber),stdin);
		s.PhoneNumber[strcspn(s.PhoneNumber,"\n")]='\0';
		a[i]=s;
	}
	printf("da them line he moi\n");
	
}
void in(){
	printf("%s\n",a[n].name);
	printf("%s\n",a[n].email);
	printf("%s\n",a[n].PhoneNumber);
	printf("------------------------");
}
void Find(){
	char name [50];
	int pos=-1;
	while(getchar()!='\n');
	printf("nhap ten lien he can tim :");
	fgets(name,sizeof(name),stdin);
	name[strcspn(name,"\n")]='\0';
	for(int i=0;i<n;i++){
		if(strcmp(a[i].name,name)==0){
			pos=i;
			break;
		}
	}
	if(pos!=-1){
		printf("da tim thay dia chi lien he ten %s ,email %s,sdt %s",a[pos].name,a[pos].email,a[pos].PhoneNumber);
	}else{
		printf("khong tim thay");
	}
}
void deletelh(){
	char namee [50];
	int pos;
	int flag=0;
	while(getchar()!='\n');
	printf("nhap ten lien he can xoa :");
	fgets(namee,sizeof(namee),stdin);
	namee[strcspn(namee,"\n")]='\0';
	for(int i=0;i<n;i++){
		if(strcmp(a[i].name,namee)==0){
			pos=i;
			flag=1;
			break;
		}
	}
	if(flag==1){
		for(int i=0;i<n;i++){
			a[i]=a[i+1];
		}
		n--;
		printf("da xoa\n");	
	}else{
		printf("chua xoa\n");
	}
}
