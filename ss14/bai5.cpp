#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int giaithua(int n){
	int giaithua=1;
	for(int i=1;i<=n;i++){
		giaithua*=i;
	}
	return giaithua;
}
int main (){
	int n ;
	printf("nhap n ");
	scanf("%d",&n);
 int c = giaithua(n);
 printf("%d",c);
}
