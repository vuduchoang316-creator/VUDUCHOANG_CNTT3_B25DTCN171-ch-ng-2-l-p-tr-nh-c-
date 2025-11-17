#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
void countEvenodd(int *arr,int n , int *even,int *odd){
	*even=0;
	*odd=0;
	for(int i=0;i<n;i++){
		if(*(arr+i)%2==0){
			(*even)++;
		}else{
			(*odd)++;
		}
	}
}
int main (){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int n= sizeof(arr)/sizeof(int);
	int even,odd;
	countEvenodd(arr,n,&even,&odd);
	printf("so phan tu chan la : %d\n",even);
	printf("so phan tu le la : %d",odd);
}

