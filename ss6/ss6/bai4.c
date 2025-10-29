#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int i ;
	int n ;
	int tich;
	printf("nhap vao so bat ky tu 1-10: ");
	scanf("%d",&n);
	
		for(i=1 ; i<=10;i++){
			tich = i*n;
			printf("%d * %d = %d\n",n,i,tich);
			
		}
		
		
	return 0;
	
} 

