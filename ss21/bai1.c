#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

struct myCar{
	char model[50];
	int year;
	int price;
};
typedef struct myCar car;
int max=100;
 car a[100];
 int n=0; 

void nhap( car a[],int *n){
	for(int i =0;i<*n;i++){
		printf("nhap ten loai xe :");
		fgets(a[i].model,sizeof(a[i].model),stdin);
		a[i].model[strcspn(a[i].model,"\n")]='\0';
		printf("nhap nam san xuat:");
		scanf("%d",&a[i].year);
		getchar();
		printf("nhap gia cua xe :");
		scanf("%d",&a[i].price);
		getchar(); 
	} 
}
void in(car a[],int n){
	printf("\n------------danh sach xe----------\n ");
	for(int i=0;i<n;i++){
		printf("ten xe : %s-nam san xuat: %d-gia xe: %d\n",a[i].model,a[i].year,a[i].price);
	}
}
int main (){
	printf("nhap so luong xe :");
	scanf("%d",&n);
	fflush(stdin);
	nhap(a,&n);
	in(a,n);
}
