#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	int n  ,i ;
	printf("nhap so phan tu n:");
	scanf("%d",&n);
	int arr[n];
	int found = 0 ;
	int x;
	for(i=0;i<n;i++){
		printf("nhap arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	
	printf("nhap gia tri tim kiem la:");
	scanf("%d",&x);
	found;
	printf("\nket qua tim kiem o vi tri :");
	for(i=0;i<n;i++){
		if(arr[i]==x){
			found++;
			printf("%d ",i);
		}
	} 
	return 0;

}



