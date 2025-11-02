#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	int a,b,i,j;
	printf("nhap vao dong a cot b ");
	scanf("%d%d",&a,&b);
	int arr[a][b];
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("nhap arr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n") ;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(i==0 || i==a-1 || j==0 || j==b-1){
				printf("%d",arr[i][j]);
			}else{
				printf(" ");
			}
		}
		printf("\n");
		
	}
	
	return 0;
} 


