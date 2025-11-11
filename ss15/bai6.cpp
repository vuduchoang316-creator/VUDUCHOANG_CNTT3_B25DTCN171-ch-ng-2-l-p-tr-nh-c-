#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void sapxep(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		printf("%d  ",arr[i]);
	}
}

int main (){
	int n ;
	printf("nhap so phan tu trong mang ");
	scanf("%d",&n);
	int arr[100];
	for ( int i =0 ; i<n ; i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);	
	}
	printf("phan tu mang da sap xep");
	sapxep(arr,n);
}
