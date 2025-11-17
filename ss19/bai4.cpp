#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int max=100;
void inputArray(int *arr,int *n){
	do{
		printf("nhap so phan tu cua mang :");
		scanf("%d",n);
		if(*n<1 || *n>max){
			printf("loi yeu cau nhap lai ");
		}
	}while(*n<1 || *n>max);
	for(int i=0;i<*n;i++){
		printf("a[%d]=",i);
		scanf("%d", arr+i);
	}
}
void displayArray(int arr[],int n){
	printf("mang vua nhap :");
	for(int i=0;i<n;i++){
		printf("%d", arr[i]);
	}
}
void countValue(int *arr,int n , int x){
	int found=0;
	printf("nhap gia tri can tim :");
	scanf("%d",&x);
	for(int i=0;i<n;++i){
		if(*(arr+i)==x){
			found++;
		}
	}
	printf("phan tu %d xuat hien %d lan trong mang ",x,found);
}
int main (){
	int arr[max];
	int n; 
	int x;
	inputArray(arr,&n);
	displayArray(arr,n);
	countValue(arr,n,x);
}
	


