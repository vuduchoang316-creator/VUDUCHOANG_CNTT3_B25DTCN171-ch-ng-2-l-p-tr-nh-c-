#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int a , b ;
	printf("nhap so a");
	scanf("%d",&a);
	printf("nhap so b");
	scanf("%d",&b);
	
	if( a > b){
		printf("a la so lon hon");
	}else if(b > a ){
		printf("b la so lon hon");
	}else{
		printf("2 so bang nhau");
	}
	return 0;
}

