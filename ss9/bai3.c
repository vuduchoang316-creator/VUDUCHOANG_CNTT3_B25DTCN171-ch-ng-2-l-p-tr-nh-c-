#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (){
	int n ;
	int i ;
	printf("nhap vao n phan tu ");
	scanf("%d",&n);
	int arr[n];
	for (i=0 ; i<n ; i++){
		printf("nhap vao arr[%d]=",i);
		scanf("%d",&arr[i]);		
	}
	for ( i=0 ; i<n ; i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}	
	
	return 0;
}
