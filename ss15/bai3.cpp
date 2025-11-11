#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int sodaonguoc(int n){
	int dao_nguoc=0;
	int digit;
	while(n>0){
		digit=n%10;
		dao_nguoc=dao_nguoc*10+digit;
		n/=10;
	}
	return dao_nguoc;
}

int main (){
	int n ;
	printf("nhap vao so n :");
	scanf("%d",&n);
	int daonguoc=sodaonguoc(n);
	printf("%d  ",daonguoc);
	return 0;
}
