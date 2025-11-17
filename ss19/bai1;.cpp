#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int findMax(int *arr,int n ){
	int max=*(arr+0);
	for(int i=0;i<n;i++){
		if(max<*(arr+i)){
			max=*(arr+i);
		}
	}
	return max;
}

int main (){
	int arr[]={40,5,48,2,62,89};
	int n=6;
	int max =findMax(arr,n);
	printf("max = %d",max);
}
