#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	int n ,i,j;
	printf("nhap vao so phan tu cua mang ");
	scanf("%d",&n);
	int arr[n];
	
	for ( i=0;i<n;i++){
		printf("nhap vao arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("cac phan tu cua mang :");
	for (i=0;i<n;i++){
		printf("%3d",arr[i]);
	}
	
	// so nguyen 
	
	
	printf("\ncac so nguyen la : ");
	for (i=0;i<n;i++){
			int flag =1;
		
			if(arr[i]<2){
				flag=0;
			}
			for(j=2;j<sqrt(arr[i]);j++){
			
			if(arr[i]%j==0){
				flag=0;
			
			}
		}
			if(flag==1){
				printf("%3d",arr[i]);
			}
			
		
	}
	return 0;	
} 


