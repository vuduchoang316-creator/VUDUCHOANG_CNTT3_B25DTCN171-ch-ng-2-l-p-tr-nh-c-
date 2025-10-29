#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (){
	 int a , b ,i  ;
	 int max;
	 printf("nhap vao hai so duong bat ki :");
		scanf("%d",&a);
		scanf("%d",&b);
			if(a>b){
				max = a;
				for(i=max ; i>=1;i--){
					if(a%i==0 && b%i==0){
						printf("ucln(a,b):%d",i);
						return i;	
					}	
				}		
			}
			if(b>a){
				max=b;
				for(i=max;i>=1;i--){
					if(a%i==0 && b%i==0);
					printf("ucln(a,b):%d",i);
					return i;
				}
			}
		
	return 0;
}

