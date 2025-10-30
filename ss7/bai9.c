#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
	int main (){
int n ;
int a=0;
int b=0;		
	printf("nhap vao so nguyen n");
	scanf("%d",&n);
	
	printf("cac cap so (a,b) la :"); 
					int flag = 0;
					
	
	  for ( a= 0;a<= cbrt(n);a ++){ // cbrt la can bac 3
	  
	  	 	for(b = 0 ; b<= cbrt(n);b ++){
	  		
	  		if((long) a*a*a + (long)b*b*b==(long long)n) {
	  			
	  				printf("(%d,%d)",a,b);
	  				
	  				flag = 1;
			  }
		  }
	  }
	  if(!flag){
	  	printf("khog co cap so nao ");
	  }
	  return 0;
}
