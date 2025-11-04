#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	int n,i;
	int x,flag=0;
	printf("nhap so phan tu n ");
	scanf("%d",&n);
	int arr[n];
	
	for(i=0;i<n;i++){
		printf("nhap arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("in ra mang");
	for(i=0;i<n;i++){
		printf("%3d",arr[i]);
	}
	printf("\nnhap phan tu can tin ");
	scanf("%d",&x);
	printf(" phan tu tim thay dau tien o vi tri :");
	
	for(i=0;i<n;i++){
		if(arr[i]==x){
//			flag=1;
			printf("%d",i);
             break;
		}
	}
	if(flag==0){
		printf("khong tim thay");
	}

}


