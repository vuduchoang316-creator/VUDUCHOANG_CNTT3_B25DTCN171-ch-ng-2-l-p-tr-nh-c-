#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
void inmang(int*ptr,int size){
	for(int i = 0 ;i<size;i++){
		printf("arr[%d]=%d\n",i,*(ptr+i));
	}
}
int main (){
	int arr[5]={1,2,3,4,5};
	int size = 5;
	
	inmang(arr,size);
	
}
