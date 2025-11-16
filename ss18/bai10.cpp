#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void xoa(int arr[],int pos,int *spt){
	int n = *spt;
	for(int i=pos;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	(*spt)--;
}
int main (){
	int max = 100;
	int arr[max]={4,5,8,61,48,90};
	int spt=6;
	printf("mang truoc khi xoa la :");
	for(int i=0;i<spt;i++){
		printf("%d   ",*(arr+i));
	}
	int pos;
	printf("\nnhap vi tri can xoa:");
	scanf("%d",&pos);
	xoa(arr,pos,&spt);
	printf("\nmang sau khi xoa :");
	for(int i=0;i<spt;i++){
		printf("%d  ",*(arr+i));
	}
}


