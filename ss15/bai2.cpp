#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int tongsonguyen(int n ){
	int sum =0;
	while(n>0){
	int     i = n%10;
	    sum+=i;
	    n/=10;
	}
	return sum;
}
int main (){
	int n;
	printf("nhap so nguyen");
	scanf("%d",&n);
	int tong = tongsonguyen(n);
	printf("tong = %d",tong);
}

