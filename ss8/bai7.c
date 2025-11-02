#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	int n ,  i ;
	int arr[n];
	printf("nhap so phan tu cua mang");
	scanf("%d",&n);
		for(i=0;i<n;i++){
			printf("nhap vao arr[%d]=",i);
		        scanf("%d",&arr[i]);
			
			while(arr[i]%2==0){
				printf("\nvui long nhap lai arr[%d]=",i);
				 scanf("%d",&arr[i]);
			}
		}
		
		
	return 0;
}printf("phan tu nho nhan la %d",array[i]);


