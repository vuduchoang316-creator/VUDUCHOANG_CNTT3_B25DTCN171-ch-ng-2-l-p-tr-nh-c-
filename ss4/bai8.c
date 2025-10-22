#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (){
	int a,b,c;
	printf("nhap canh tam giac");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);

		printf("a:%d b:%d c:%d\n",a,b,c);
		
	if( a+b>c && a+c>b && b+c>a){
		printf("la 3 canh tam giac");
		
	}else{
		printf("khong la 3 canh tam giac");
	}
	
	return 0;
}



