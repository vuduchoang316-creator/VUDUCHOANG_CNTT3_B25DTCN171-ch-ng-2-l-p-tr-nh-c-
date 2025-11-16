#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
void sapxep(int *p,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(*(p+j)>*(p+j+1)){
				int temp=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=temp;
			}
		}
	}
} 
int main (){
	int arr[5]={4,11,7,20,6};
	int n=5;
	printf("mang truoc khi nhap sap xep :");
	for(int i=0;i<n;i++){
		printf("%d  ",*(arr+i));
	}
	sapxep(arr,n);
 	printf("\nmang sau sap xep la :");
 	for(int i=0;i<n;i++){
 		printf("%d  ",*(arr+i));
	 }
}

