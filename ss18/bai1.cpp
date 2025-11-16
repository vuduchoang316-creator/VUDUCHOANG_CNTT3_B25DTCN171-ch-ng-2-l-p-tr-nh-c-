#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main(){
	int a=5;
	int *aPtr=&a;
	printf("dia chi cua a la %p",&a);
	printf("\ndia chi cua a theo aPtr la %p",(void*)aPtr);
} 
