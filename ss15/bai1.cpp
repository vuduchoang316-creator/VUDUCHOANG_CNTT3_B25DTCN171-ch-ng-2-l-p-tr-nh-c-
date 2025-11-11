#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int signal(int a , int b){
	int hieu=a-b;
	return hieu;
	
}

int tich(int x , int y ){
int	tich = x*y;
	return tich;
}
int main (){
	int a , b ;
	printf("nhap vao 2 so a va b ");
	scanf("%d%d",&a,&b);
	int c=signal(a,b);
	printf("hieu 2 so %d-%d=%d",a,b,c);
      int  d=tich(a,b);
		printf("\n tich 2 so %d*%d=%d",a,b,d);
} 
