#include <stdio.h>
 
 int main (){
 	int number=12345;
 	int a = number%10; 
 	int b = (number/10)%10;
 	int c= (number/100)%10;
 	int d = (number/1000)%10;
 	int e = number/10000;
 	
 	int tong = a+b+c+d+e;
 	printf("tong :%d");
 	
 	
	 }
