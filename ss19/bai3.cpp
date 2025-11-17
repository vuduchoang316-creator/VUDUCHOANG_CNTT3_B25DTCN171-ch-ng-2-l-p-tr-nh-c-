#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int max =100;
int average(int*arr , int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=*(arr+i);
	}
	int trungbinh=sum/n;
		return trungbinh;
}
void inputArray(int *arr,int *n){
	do{
		printf("nhap so phan tu cua mang :");
		scanf("%d",n);
			if(*n<1 || *n>max){
				printf("loi nhap lai!!!");
			}
			
		}while(*n<1 || *n>max);
		for(int i=0;i<*n;i++){
			printf("arr[%d]=",i);
			scanf("%d",(arr+i));
		}
	}

void displayArray(int arr[],int n){
	int i;
	for( i=0;i<n;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}
}
int main (){
	int arr[max];
	int n;
	inputArray(arr,&n);
	displayArray(arr, n);
	int trungbinh=average(arr,n);
	printf("gia tri trung binh la : %d",trungbinh);
}


