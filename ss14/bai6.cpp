#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int max(int n ,int arr[]){
	 for(int i=0;i<n;i++){
	 	printf("arr[%d]=",i);
	 	scanf("%d",&arr[i]);
	 }
	 int max = arr[0];
	 	for(int i=0;i<n;i++){
	 		if(max<arr[i]){
	 			max = arr[i];
			 }
		 }
		 return max;
}

int  main (){
	int n , arr[n];
	printf("nhap so phan tu n ");
	scanf("%d",&n);
	int so_max=max(n,arr);
	printf("%d",so_max);
}


