#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (){
	int n , i ,a;
	int palindrome;
	printf("nhap so nguyen duong n");
	scanf("%d",&n);
			a=n;
		while(n!=0){
			i = n%10;
			printf("%d",i);
				palindrome=palindrome*10+i;
				n = n/10;
		}
			if (palindrome==a){
				printf("la so dao nguoc");
			}else{
				printf("khong la so dao nguoc");
			}
	
	return 0;
} 

