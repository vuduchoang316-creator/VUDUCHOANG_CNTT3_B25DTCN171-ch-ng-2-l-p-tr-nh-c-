#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (){
	int a , b ,i ;
	int dem =0;
	printf("nhap [a,b]:");
	scanf("%d%d",&a,&b);
		printf("cac so nguyen to trong khoang la :");
	
		for (i=a; i<=b;i++){
			int la_so_nguyen_to = 1;
			
			if(i<=1){
				la_so_nguyen_to=0;
			}else{
				for(int j = 2 ; j <= sqrt(i);j++){
					if(i%j==0){
						la_so_nguyen_to=0;
						break; 
				}
			}
				
		} 
		if(la_so_nguyen_to==1){
			printf(" %d",i);
		}	
	}
				return 0;
				
}
