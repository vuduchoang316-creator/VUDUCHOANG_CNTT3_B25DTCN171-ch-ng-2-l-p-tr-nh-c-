#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	int n ,i;
	printf("nhap vao gia tri n ");
	scanf (" %d",&n);
	int arr[n];
	int so_le=0;
	int so_chan=0;
	for (i=0 ; i<n ; i++){
		printf("nhap vao arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("so chan la:");
	for( i=0 ; i<n ; i++){
		if(arr[i]%2==0){
			printf("%3d",arr[i]);
			so_chan ++;
		}
	}
	printf("\nso le la :");
	for (i = 0 ; i<n ; i++){
		if(arr[i]%2!=0){
			printf("%3d",arr[i]);
			so_le++;
		}
	}
		printf("\ntong so le la %d",so_le);
		printf("\ntong so chan la %d",so_chan);
	return 0;
}


