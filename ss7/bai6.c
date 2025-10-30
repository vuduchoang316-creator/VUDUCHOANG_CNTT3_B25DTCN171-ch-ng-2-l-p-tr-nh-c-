#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	int n ,i;
	int so_dao_nguoc_cua_n;
	printf("nhap so n: ");
	scanf("%d",&n);
	
	while(n>0){
	i=n%10;
	so_dao_nguoc_cua_n =so_dao_nguoc_cua_n*10+i;
	n/=10; 
	}
	printf("so dao nguoc cua n la %d",so_dao_nguoc_cua_n);
	return 0;
}


