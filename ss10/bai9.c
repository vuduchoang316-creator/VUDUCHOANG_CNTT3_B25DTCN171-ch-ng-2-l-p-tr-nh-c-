#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	int n ;
	printf("nhap so phan tu cua n ");
	scanf("%d",&n);
	int i; int j; int temp;
	int arr[n];
	for(i=0;i<n;i++){
		printf("arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	int x;
	printf("nhap x :");
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(x==i+1){
			printf("gia cua san pham voi ma id %d:%d",x,arr[i]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("\ndanh sach san pham sau khi sap xep :");
	for(i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}

