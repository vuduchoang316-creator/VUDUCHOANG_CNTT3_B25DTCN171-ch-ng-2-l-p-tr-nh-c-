#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	int i,n;
	printf("nhap so nguyen n:");
	scanf("%d",&n);
	int s=0;
	for(i=1; i<=n ;i++){
		s+=i;
	}

		printf("%d",s);
	return 0;
}


