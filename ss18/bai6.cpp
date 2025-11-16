#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
void timmang(int *arr,int*x,int n){
	int pos;int flag=0;
	for(int i=0;i<n;i++){
		if(arr[i]==*x){
			flag=1;
			pos=i;
			break;
		}
	}
	if(flag!=0){
		printf("gia tri can tim o vi tri %d",pos);
	}else{
		printf("khong tim thay");
	}
	
}
int main (){
	int arr[6]={1,2,4,5,6,7};
	int n=6;
	printf("nhap gia tri can tim :");
	int x;
	scanf("%d",&x);
	timmang(arr,&x,n);
}


