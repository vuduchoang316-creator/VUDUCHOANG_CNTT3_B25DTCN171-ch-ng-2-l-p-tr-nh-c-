#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
void copyArray(int *src,int *dest,int n){
	for(int i=0;i<n;i++){
		*(dest+i)=*(src+i);
	}
} 
int main (){
	int n=5;
	int a[n]={1,2,3,4,5};
	int b[n];
	printf("mang ban dau la :\n");
	for(int i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
	copyArray(a,b,n);
	printf("\nmang sau khu sao chep :\n");
	for(int i=0;i<n;i++){
		printf("%d  ",b[i]);
    }
}
