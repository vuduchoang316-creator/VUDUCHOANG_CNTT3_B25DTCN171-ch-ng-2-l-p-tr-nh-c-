#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
struct sinhvien{
	char id[50];
	char name [50];
	int age;
	char phoneNumber[50];


};
typedef struct sinhvien sv;

int main(){
	int n=5;
	sv a[50]={ {"101","haong",18,"0505262521"},
					{"102","trang",18,"0858228568"},
					{"103","hang",10,"25616552002"},
					{"104","cong",15,"61020655256"},
					{"105","khanh",16,"65121651351"},
					};
	printf("\n-------------danh sach sinh vien-----------\n");
	printf("|%5s|%15s|%5s|%12s|\n","msv","ho va ten","tuoi","so dien thoai");
	for(int i=0;i<n;i++){
		printf("------------------------------------------\n");
		printf("|%5s|%15s|%5d|%12s|\n",a[i].id,a[i].name,a[i].age,a[i].phoneNumber);
	}
	char new_id[50];
	int pos=-1;
	int flag=0;
	printf("nhap msv can xoa :");
	fgets(new_id,sizeof(new_id),stdin);
	new_id[strcspn(new_id,"\n")]='\0';
	for(int i=0;i<n;i++){
		if(strcmp(a[i].id,new_id)==0){ 
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
			}else{
				printf("khong ton tai !!");
			} 
	
	printf("\n-------------danh sach sinh vien sau khi xoa-----------\n");
	printf("|%5s|%15s|%5s|%12s|\n","msv","ho va ten","tuoi","so dien thoai");
	for(int i=0;i<n;i++){
		printf("------------------------------------------\n");
		printf("|%5s|%15s|%5d|%12s|\n",a[i].id,a[i].name,a[i].age,a[i].phoneNumber);
	}
	
		
	
}

