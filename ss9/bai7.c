#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	int n , i ;
	printf("nhap vao n phan tu ");
	scanf("%d",&n);
	 int arr[n];
	 for ( i=0 ; i <n  ; i++){
	 	printf("nhap vao arr[%d]=",i);
	 	scanf("%d",&arr[i]);
	 }
	 printf("mang vua nhap la : ");
	 for(i = 0 ; i<n;i++){
	 	printf("%d",arr[i]);
	 }
	 printf("\nmang dao nguoc la :");
	 
	 for(i=n-1 ;i >= 0; i--){
	 	printf("%d",arr[i]);
	 }
	
	return 0;
}


