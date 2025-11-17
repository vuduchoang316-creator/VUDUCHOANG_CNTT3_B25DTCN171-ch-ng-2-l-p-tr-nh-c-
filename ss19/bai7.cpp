#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
	int max =1000;
void inputArray(int *arr,int *n);
void displayArray(int arr[] , int n);
void lengthArray(int *arr);
void sumArray(int *arr,int n);
void maxArray(int *arr,int n);

int main(){

	int choice;
	int arr[max];
	int n;
	
	do{	printf("\n----------------------menu---------------------\n");
		printf("\n1.nhap so phan tu va tung phan tu.");
		printf("\n2.hien thi cac phan tu trong mang.");
		printf("\n3.tinh do dai mang.");
		printf("\n4.tinh tong phan tu trong mang.");
		printf("\n5.hien thi phan tu lon nhat trong mang.");
		printf("\n6.thoat.");
		printf("\nmoi ban chon chuc nang:");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				inputArray(arr,&n);
				break;
			}
			case 2:{
				displayArray(arr, n);
				break;
			}
			case 3:{
				break;
			}
			case 4:{
				sumArray(arr,n); 
				break;
			}
			case 5:{
				maxArray(arr,n);
				break;
			}
			case 6:{
				printf("cam on vi da su dung @_@");
				return 0;
				break;
			}	
			default: {
				printf("loi vui long nhap lai tu 1 den 6 !!!@@@");
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

void displayArray(int arr[] , int n){
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
}

void lengthArray(int *arr){
	int *current_ptr = arr;
	int count=0;
		
}

void sumArray(int *arr,int n){
	int sum;
	for(int i=0;i<n;i++){
		sum +=*(arr+i);
	} 
	printf("tong cac phan tu cua mang la : %d",sum);
}

void maxArray(int *arr,int n){
	int max=*(arr+0);
	for(int i=0;i<n;i++){
		if(max<*(arr+i)){
			max=*(arr+i);
		}
	}
	printf("phan tu lon nha la :%d",max);
}






