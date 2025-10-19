#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main() {
	printf("nhap so ");
	int n;
	scanf("%d",&n);
	int a,b,c,d;
	a=n%10;
	b=(n/10)%10;
	c=(n/100)%10;
	d=n/1000;
	
	long so_dao_nguoc =  a*1000+b*100+c*10+d;
	printf("so dao nguoc :%ld",so_dao_nguoc);
	return 0;
	
}


