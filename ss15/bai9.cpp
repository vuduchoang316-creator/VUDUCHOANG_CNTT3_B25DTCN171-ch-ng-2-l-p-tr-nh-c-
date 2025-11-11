#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int Array(int max){
	int n;
	do{
	
	printf("nhap so phan tu trong mang :");
	scanf("%d",&n);
	if(n<0 || n>max){
		printf("loi nhap lai");
	}
}while(n<0 || n>max);
  return n;
}

void inputArray(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
}
void outputArray(int arr[],int n){
	printf("phan tu xuat hine trong mang la:");
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
}

void minDisplay(int arr[],int n){
	int count_min=100;int count;
	for(int i=0;i<n;i++){
		count=0;
		for(int j=0;j<n;j++){
			if(arr[j]==arr[i]){
				count++;
			}
		}
		if(count_min>count){
			count_min=count;
		}
	}
	printf("\n phan tu xuat hien it nhat %d lan la :\n",count_min);
		for(int i=0;i<n;i++){
			count=0;
			for(int j=0;j<n;j++){
				if(arr[j]==arr[i]){
					count++;
				}
			}
			if(count_min==count){
				printf("%d ",arr[i]);
			}
		}
}

int main (){
	int n;
	int max = 100;
	int arr[max];
	n=Array(max);
	inputArray(arr,n);
	outputArray(arr,n);
	minDisplay(arr,n);
	
}
