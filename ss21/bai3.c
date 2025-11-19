#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
struct Address{
	char street[50];
	char city [50];
};
struct Person{
	char name [50];
	int age;
    struct Address adds;
};
typedef struct Person ng;
ng a[100];
int n=0;

void nhap(ng a[],int *n){
	for(int i=0;i<*n;i++){
		getchar(); 
		printf("nhap ten nguoi:");
		fgets(a[i].name,sizeof(a[i].name),stdin);
		a[i].name[strcspn(a[i].name,"\n")]='\0';
	
		printf("nhap tuoi:");
		scanf("%d",&a[i].age);
		getchar();
		fflush(stdin);
		
		printf("moi nhap dia diem :");
		fgets(a[i].adds.street,sizeof(a[i].adds.street),stdin);
		(a[i].adds.street)[strcspn(a[i].adds.street,"\n")]='\0';
		fflush(stdin); 
		
		printf("nhap ten thanh pho: ");
		fgets(a[i].adds.city,sizeof(a[i].adds.city),stdin);
		a[i].adds.city[strcspn(a[i].adds.city,"\n")]='\0';
		fflush(stdin);
	}
}
void in(ng a[],int n){
			printf("danh sach con nguoi\n");
		for(int i=0;i<n;i++){
			printf("--------------------------------------------------\n"); 
			printf("ho va ten : %s | tuoi : %d | dia chi %s| thanh pho %s|\n",a[i].name,a[i].age,a[i].adds.street,a[i].adds.city);
		} 
	}
	

int main (){
	printf("nhap so nguoi can them:");
	scanf("%d",&n);
	nhap(a,&n);
	in(a,n);
	
}
