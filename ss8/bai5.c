#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	int array[5]={1,2,3,4,5};
	int i;
		int max=array[0];
	for( i=0 ; i<5 ;i++){
		if(max<array[i]){
				max=array[i];
		}
}
      printf("phan tu lon  nhan la %d",max);
int min = array[0];
	 for(i=0;i<5;i++){
	 	if(min>array[i]){
	 		min=array[i];
		 }
	 }
	 printf("\nphan tu nho nhat la %d",min);
			
			
	
	return 0;
}


