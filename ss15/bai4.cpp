#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int sumArray(int arr[],int n){
	int sum=0;
  		for(int i=0;i<n;i++){
  			sum+=arr[i];
		  }
		  return sum;
}
int main (){
	int n;
	printf("nhap so phan tu ");
	scanf("%d",&n);
	int arr[100];
	for(int i =0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	int sum=sumArray(arr,n);
	printf("%d",sum);
}
