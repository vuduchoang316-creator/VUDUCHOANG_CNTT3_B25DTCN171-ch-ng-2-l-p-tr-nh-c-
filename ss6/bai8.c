#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (){
	int a,b ,i ;
	int min ;
		min = a<b ; a:b;
	printf("nhap vao 2 so :");
	scanf("%d",&a );
	scanf("%d",&b );
			
			
		while(1){
			if(min%a==0 && min%b==0){
				i=min;
				break;
				
			}
			++min;
			
		}
					printf("%d",i);
	
	return 0;
	
}


