#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void timkiem(int arr[],int n){
	int pos=-1 , value ;
	printf("nhap gia tri can tim:");
	scanf("%d",&value);
	int low = 0; int high = n-1;
	while(low <= high){
		int mid=(low+high)/2;
		if(arr[mid]==value){
			pos = mid ;
			break;
		}else if (arr[mid]>value){
			high=mid-1;
		}else{
			low = mid+1;
		}	
	}
	if(pos!=-1){
		printf("phan tu %d tim thay o vi tri %d",value,pos);
	}else{
		printf("khong tim thay ");
	}
}

int main (){
	int n;
	printf("nhap so phan tu :");
	scanf("%d",&n);
	int arr[100];
	for(int i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
		timkiem(arr,n);
}

