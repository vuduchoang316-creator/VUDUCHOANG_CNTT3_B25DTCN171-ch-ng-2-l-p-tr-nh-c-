#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main (){
	int x,y;
	printf("nhapn a va b :");
	scanf("%d %d",&x,&y);
	swap(&x,&y);
	printf("a=%d b=%d\n",x,y);
}
