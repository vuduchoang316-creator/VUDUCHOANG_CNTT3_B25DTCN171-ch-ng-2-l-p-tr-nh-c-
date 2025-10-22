#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	int n;
	printf("nhap nam ");
	scanf("%d",&n);
	
	if (n%4==0 && n%10 !=0){
		printf("la nam nhuan");
		
	}else {
		printf("khong la nam nhuan");
	}
	
	
	return 0;
}

