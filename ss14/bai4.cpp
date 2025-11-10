#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void nhapmang(int n, int arr[] ){
	for(int i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
}
void inmang(int n , int arr[] ){
	for(int i =0;i<n;i++){
		printf("%d  ",arr[i]);
	}
}
int main (){
	int n;
	printf("nhap so phan tu cua mang :");
	scanf("%d",&n);
	int arr[n];
	nhapmang(n,arr);
	inmang(n,arr);
	
	
}
	

