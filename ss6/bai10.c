#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	int n , i=1 ;
	printf("nhap vao so nguyen n :");
	scanf("%d",&n);
		
	while(n/i>=10){
		
			i*=10;
		}
		
		while (i>0){
			int chu_so = n/i;
			  	n=n%i;
			  		printf(" %d\n ",chu_so);	
	
			  	i/=10;
		}
	
	return 0;
}


