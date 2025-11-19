#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
struct students{
	char name [50];
	int age;
	float grade;
};
typedef struct students sv;
int max = 100;
sv a[100];
int n=0;
void nhap(sv a[],int*n){
	for(int i=0;i<*n;i++){
			printf("nhap ten :");
			fgets(a[i].name,sizeof(a[i].name),stdin);
			a[i].name[strcspn(a[i].name,"\n")]='\0';
			printf("nhap tuoi:");
			scanf("%d",&a[i].age);
			fflush(stdin);
			printf("nhap diem trung binh");
			scanf("%f",&a[i].grade);
			fflush(stdin);	
		}

}
void in(sv a[],int n){
	printf("\n-------------danh sach sinh vien-------------\n");
	for(int i=0;i<n;i++){
		printf("ten:%s|tuoi:%d|dtb:%.2f\n",a[i].name,a[i].age,a[i].grade);
	}
}
int main (){
	printf("nhap sinh vien can them :");
	scanf("%d",&n);
	fflush(stdin);
	nhap(a,&n);
	in(a,n);
}


