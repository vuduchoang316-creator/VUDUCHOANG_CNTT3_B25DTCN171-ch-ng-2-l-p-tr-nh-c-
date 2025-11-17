#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int max = 1000;
void inputArray(int *arr,int *n);
void evenArray(int *arr,int n);
void Arrayprime(int *arr,int n);
void reverseArray(int *arr,int n);
void ascendingArray(int *arr,int n);
void descendingArray(int *arr,int n);
void searchArray(int *arr,int n);

int main (){
	int arr[max];
	int n;
	int choice;
	int type;
	do{
		printf("\n----------------------menu------------------------\n");
		printf("\n1.nhap so phan tu va tung phan tu.");
		printf("\n2.in ra cac phan tu la so chan.");
		printf("\n3.in ra cac phan tu la so nguyen to.");
		printf("\n4.mang dao nguoc. ");
		printf("\n5.sap xep mang (6.tang dan _____7.giam dan).");
		printf("\n8.nhap vao 1 phan va tim kiem phan tu trong mang. ");
		printf("\n9.thoat. ");
		printf("\nmoi ban lua chon chuc nang:");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				inputArray(arr,&n);
				break;
			}
			case 2:{
				printf("nhap tu chan la:");
				evenArray(arr,n);
				break;
			}
			case 3:{
				printf("cac so nguyen to la :");
				Arrayprime(arr,n);
				break;
			}
			case 4:{
				printf("mang dao nguoc la :");
				reverseArray(arr,n);
				break;
			}
			case 5:{
				printf("moi chon chuc nang:");
				scanf("%d",&type);
				switch(type){
					case 6:{
						ascendingArray(arr,n);
						break;
					}
					case 7:{
						descendingArray(arr,n);
						break;
					}
				}
				break;
			}
			case 8:{
				searchArray(arr,n);
				break;
			}
			case 9:{
				printf("cam on vi da su dung $_$!!");
				return 0; 
				break;
			}
				
				
		}
	}while(1);
}
void inputArray(int *arr,int *n){
	do{
		printf("nhap so phan cua mang :");
		scanf("%d",n);
		if(*n<1 || *n>max){
			printf("loi vui long nhap lai 0_0#");
		}
	}while(*n<1 || *n>max);
	for(int i=0;i<*n;i++){
		printf("arr[%d]=",i);
		scanf("%d",arr+i);
	}
}
void evenArray(int *arr , int n){
	for(int i=0;i<n;i++){
		if(*(arr+i)%2==0){
			printf(" %d ",*(arr+i));
		}
	}
}
void Arrayprime(int *arr,int n){
	int flag=0;int i;
	for( i=0;i<n;i++){
		flag=1;
		if(*(arr+i)<2){
			flag=0;
		}else{
			for(int j=2;j<=sqrt(*(arr+i));j++){
				if(*(arr+i)%j==0){
					flag=0;
					break;
				}
			}
		}
		if(flag==1){
			printf("%d ",*(arr+i));
		}
	}
	
}
void reverseArray(int *arr,int n){
	for(int i=n-1;i>=0;i--){
		printf("%d ",*(arr+i));
	}
}
void ascendingArray(int *arr,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(*(arr+j)>*(arr+j+1)){
				int temp=*(arr+j);
				*(arr+j)=*(arr+j+1);
				*(arr+j+1)=temp;
			}
		}
	}
	printf("mang sau sap xep:");
	for(int i=0;i<n;i++){
		printf("%d",*(arr+i));
	}
}
void descendingArray(int *arr,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(*(arr+j)<*(arr+j+1)){
				int temp=*(arr+j);
				*(arr+j)=*(arr+j+1);
				*(arr+j+1)=temp;
			}
		}
	}
	printf("mang sau sap xep:");
	for(int i=0;i<n;i++){
		printf("%d",*(arr+i));
	}
}
void searchArray(int *arr,int n){
	printf("nhap phan tu can tim :");
	int x;
	scanf("%d",&x);
	int found=0;
	for(int i=0;i<n;i++){
		if(*(arr+i)==x){
			found++;
		}
	}
	printf("phan tu %d xuat hien %d lan trong mang !! |*_*)",x,found);
	printf("phan tu xuan hien o vi tri :");
	for(int i=0;i<n;i++){
		if(*(arr+i)==x){
			printf("%d",i);
		}
	}
}

