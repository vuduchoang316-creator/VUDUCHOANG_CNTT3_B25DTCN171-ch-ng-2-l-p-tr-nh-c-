#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	int n;
	printf("nhap so phan tu cua mang");
	scanf("%d",&n);
	
	int i ;
	int j;int temp;
	int arr[n];

	for(i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",& arr[i]);		
	}	
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
		for(i=0;i<n;i++){
			printf("%d ",arr[i]);
		}
}


