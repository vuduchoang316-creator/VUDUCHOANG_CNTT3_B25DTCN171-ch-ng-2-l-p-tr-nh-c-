#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	int n , i ;
	printf("nhap vao so nguyen n :");
	scanf("%d",&n);
		
	while(n!=0){
			i=n % 10;
			printf("%d",i);
			n=n/10;
		}
			
	
	return 0;
}


