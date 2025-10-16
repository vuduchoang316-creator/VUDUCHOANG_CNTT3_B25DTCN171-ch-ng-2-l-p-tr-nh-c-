#include <stdio.h>

int main (){
	int number = 12345;
	int a=number/10000;
	int b=(number/1000)%10;
	int c=(number/100)%10;
	int d=(number/10)%10;
	int e=number%10;
	int so;
so =e*10000+d*1000+c*100+b*10+a;
 printf("so:%d",so);
 
	return 0;
	
	
}
