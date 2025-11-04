#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main () {
	int n ;
	printf("nhap vao so phan tu cua n ");
	scanf("%d",&n);
	int i ; int j ; int x; int temp;int mid;
	int arr[n];
	for ( i=0 ; i<n ;i++){
		printf("arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				temp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("nhap gia tri cua x ");
	scanf("%d",&x);
	int low =0; int high = n-1;int flag=-1;
		while (low<=high){
			int mid = (low+high)/2;
			if(arr[mid]==x){
				flag=mid;
				break;
			}else if(arr[mid]<x){
				low = mid + 1;
			}else{
				high=mid-1;
			}
		}
		if(flag!=-1){
			printf("o vi tri %d",flag);
		}else{
			printf("khong tim thay");
		}
	}
