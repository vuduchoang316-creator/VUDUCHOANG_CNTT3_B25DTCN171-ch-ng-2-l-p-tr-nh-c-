#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
void tong(int*a,int*b,int *ptr){
	*ptr=*a+*b;
}
int main (){
	int a=10;
	int b=5;
	int result;
	tong(&a,&b,&result);
	printf("%d+%d=%d",a,b,result);
}

