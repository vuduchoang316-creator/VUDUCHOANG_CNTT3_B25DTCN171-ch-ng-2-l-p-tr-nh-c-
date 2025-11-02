#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


int main (){
	int arrayInt[5]={1,7,3,9,5};
	int i ;
	int tong = 0;
	
	  for( i=0 ; i<5 ;i++){
		if(arrayInt[i]%2==0){
			printf("so chan cua arrayInt[%d]la %d\n",i,arrayInt[i]);
			++tong;
		}				
		}
			if( tong==0 ){
				printf("mang khong chua so chan ");
			}	
	
	return 0;
}
