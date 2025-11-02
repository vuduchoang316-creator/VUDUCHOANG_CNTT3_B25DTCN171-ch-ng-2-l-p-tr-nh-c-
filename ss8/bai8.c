#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

 int main (){
 	
 	int i ,j ,a,b;
 		printf("nhap so dong a ");
		scanf("%d",&a);
		printf("nhap so cot b");
		scanf("%d",&b);
		
 	int arr[a][b];
	
 	for(i=0 ; i<a; i++){
 		for(j=0; j<b ; j++){
		 printf("nhap vao arr[%d][%d]=",i,j);
 			scanf("%d",&arr[i][j]);
 			
	}
}
		for(i=0;i<a;i++){
			for(j=0 ; j<b ; j++){
				printf("%d",arr[i][j]);
			}
			printf("\n");
		}

}
