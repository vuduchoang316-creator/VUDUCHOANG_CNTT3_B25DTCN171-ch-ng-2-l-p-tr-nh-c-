#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main () {
	int n;
	printf("nhap so phan tu n ");
	scanf("%d",&n);
	int count=0;
	int i; int j; int x;
	int arr[n];
	for(i=0;i<n;i++){
	printf("arr[%d]=",i);
	scanf("%d",&arr[i]);
}
	printf("nhap so x can tim:");
	scanf("%d",&x);
	
	for(i=0;i<n;i++){
		if(arr[i]==x){
			count++;
		}
	}
	printf("so lan xuat hien la %d",count);
}


