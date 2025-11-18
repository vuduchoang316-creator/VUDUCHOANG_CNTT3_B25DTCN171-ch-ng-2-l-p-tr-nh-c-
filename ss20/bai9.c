#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
struct Dish{
	int id;
	char name[100];
	float price;
};
typedef struct Dish Dish;
	Dish menu[100]={
	{1,"Thit Lon",149},
	{2,"Thit Bo",300},
	{3,"Thit Cho",99},
	{4,"Thit Ga",270},
	{5,"Thit Vit",519},
    };
    int n=5;
    int choose;
void chucnang(){
	printf("\n---------------MENU----------------");
	printf("\n1. In ra gia tri cac phan tu co trong menu mon an theo dang 1. member: value");
	printf("\n2. Them mot phan tu vao vi tri chi dinh");
	printf("\n3. Sua mut phan tu o vi tri chi dinh");
	printf("\n4. Xoa mot phan tu o vi tri chi dinh");
	printf("\n5. Sap xep các phan tu ");
	printf("\n6. Tim kiem phan tu theo name nhap vao");
	printf("\n7. Thoat");
	printf("\nChon chuc nang : ");
	scanf("%d",&choose);
}
void chuc_nang1(){
    printf("\n--------------Thuc don---------------");
    for(int i=0;i<n;i++){
    	printf("\n%d.%s:%.1f",menu[i].id,menu[i].name,menu[i].price);
	}
}
void chuc_nang2(){
	int x;
	printf("Nhap vi tri muon them phan tu : ");
	scanf("%d",&x);
	getchar();
	if(x>=n || x<0){
		printf("\nVi tri khong hop le ");
		return;
	}
	for(int i=n-1;i>=x;i--){
		menu[i+1]=menu[i];
	}
	printf("\nNhap mon an muon them : ");
	fgets(menu[x].name,100,stdin);
	if(menu[x].name[strlen(menu[x].name)-1]=='\n'){
		menu[x].name[strlen(menu[x].name)-1]='\0';
	}
	printf("\nNhap gia : ");
	scanf("%f",&menu[x].price);
	menu[x].id=x+1;
	n++;
}
void chuc_nang3(){
	int p;
	float g;
	char fixname[100];
	printf("\nNhap vi tri muon chinh sua : ");
	scanf("%d",&p);
	getchar();
	printf("\nNhap ten muon chinh sua : ");
	fgets(fixname,100,stdin);
	if(fixname[strlen(fixname)-1]=='\n'){
		fixname[strlen(fixname)-1]='\0';
	}
	printf("Nhap gia tien muon chinh sua : ");
	scanf("%f",&g);
	getchar();
	strcpy(menu[p].name,fixname);
	menu[p].price=g;

}
void chuc_nang4(){
	int delete;
	printf("\nNhap vi tri muon xoa : ");
	scanf("%d",&delete);
	if(delete<0 || delete >=n){
		printf("Vi tri khonh hop le ");
		return;
	}
	for(int i=delete;i<n;i++){
		menu[i]=menu[i+1];
	}
	--n;
}
void chuc_nang5(){
	char vote;
	printf("\na. Giam dan theo price ");
	printf("\nb. Tang dan theo price ");
	printf("Chon a hoac b : ");
	scanf("%c",&vote);
	if(vote=='a'){
		for(int i=0;i<n;i++){
			for(int j=0;j<n-i-1;j++){
			if(menu[i].price<menu[i+1].price){

