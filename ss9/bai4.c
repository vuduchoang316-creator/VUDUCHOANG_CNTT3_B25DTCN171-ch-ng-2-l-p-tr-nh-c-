#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	int n;
	int i;
	printf("nhap vao so phan tu n ");
	scanf("%d",&n);
	double  tong=0;
	int arr[n];
	for (i=0;i<n;i++){
		printf("nhap vao arr[%d]",i);
		scanf("%d",&arr[i]);
		
	}
	for ( i = 0 ; i<n ; i++){
		tong += (double)arr[i];
	}
	
	float tb = (float) tong/n;
	printf("gia tri trung binh la %.2f",tb);
	return 0;
}


