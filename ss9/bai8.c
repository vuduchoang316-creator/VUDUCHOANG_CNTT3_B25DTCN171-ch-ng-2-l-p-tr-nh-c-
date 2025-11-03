#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	int n,i;
	int j;
	int isPrime ;
	long sum_primes = 0;
	printf("nhap so phan tu cua mang :");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++){
		printf("nhap phan tu arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("cac so nguyen to la:");
	for (i=0 ; i<n; i++){
	 		isPrime = 1;
		
		if(arr[i] < 2){
			 isPrime=0;
		}
		for(j=2;j*j<=arr[i];j++){
		 		if(arr[i]%j==0){
		 			isPrime=0;
		 			break;
				 }
		}
		if(isPrime==1){
			printf("%d",arr[i]);
			sum_primes+=arr[i];
		}
	}
			printf("\ntong so nguyen to la : %ld",sum_primes);
	
	return 0;
} 
