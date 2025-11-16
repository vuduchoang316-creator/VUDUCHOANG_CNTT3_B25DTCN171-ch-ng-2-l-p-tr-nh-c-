#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
void capnhatmang(int *arr,int *index,int *x){
	printf("\nnhap gia tri can cap nhat :");
	scanf("%d",x); 
	printf("\nvi tri can cap nhat:");
	scanf("%d",index);
	arr[*index]=*x;
}
int main (){
	int arr[5]={1,2,3,4,5};
	int n=5 ; 
	int index,x; 
	printf("gia tri cua mang truoc cap nhat ");
	for(int i = 0 ; i < n ; i++){
		printf("%d  ",arr[i]);
	}
	capnhatmang(arr,&index,&x);
	printf("/nmang sau cap nhat :");
	for(int i=0;i<n;i++){
		printf("%d   ",arr[i]);
	}
	return 0;
}
