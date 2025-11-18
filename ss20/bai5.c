#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
struct student{
	char id[50];
	char name[50];
	int age;
	char PhoneNumber[50];
};
 typedef struct student svien;
 
int main(){
	int n=5;
	svien sv[50] ={
	{"01","duc hoang",18,"0904421628"},
	{"02","thuy trang",18,"0858228586"},
	{"03","duc long",15,"09256156154"},
	{"04","thuy hang",16,"0980521160"},
	{"05","duc phuc",14,"07229681165"}
	};
	printf("\n----------danh sach sinh vien ban dau----------\n");
	for(int i=0;i<n;i++){
		printf("id:%s ten:%s tuoi:%d sdt:%s\n",sv[i].id,sv[i].name,sv[i].age,sv[i].PhoneNumber);
	}
	
	char x[50];
	int pos=-1;
	printf("nhap ma sinh vien muon tim :");
	scanf("%s",x);
	getchar();
	
	for(int i=0;i<n;i++){
		if(strcmp(sv[i].id,x)==0){
			pos=i;
			break;
		}
	}
	if(pos!=-1){
		printf("da tim thay sinh vien id:%s ten:%s tuoi:%d sdt:%s",sv[pos].id,sv[pos].name,sv[pos].age,sv[pos].PhoneNumber);
		printf("sua thong tin sinh vien :");
		char new_name[50];
		int new_age;
		
		printf("nhap ten moi:");
		fgets(new_name,sizeof(new_name),stdin);
		new_name[strcspn(new_name,"\n")]='\0';
		printf("moi nhap tuoi:");
		scanf("%d",&new_age);
		
		strcpy(sv[pos].name,new_name);
		sv[pos].age=new_age;
	}else{
		printf("khong tim thay");
	}
		printf("\n---------danh sach sinh vien da sua----------\n");
	for(int i=0;i<n;i++){
		printf("id:%s ten:%s tuoi:%d sdt:%s\n",sv[i].id,sv[i].name,sv[i].age,sv[i].PhoneNumber);
	}
	
}

