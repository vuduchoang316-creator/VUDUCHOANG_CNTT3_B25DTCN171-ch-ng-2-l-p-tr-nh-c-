#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(){
	printf("nhap nhiet do theo celsius");
	int C;
	scanf("%d",&C);
	 printf ("nhiet do farenhiet=");
	 int farenheit;
	 farenheit = C*9/5 + 32;
	 printf("%d", farenheit);
	 
	 return 0;


}

