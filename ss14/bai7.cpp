#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
void isPrime(int n){
	int flag=1;
	if(n<2){
		flag=0;
	}else{
		for(int i=2;i*i<=n;i++){
			 flag=1;
			if(n%i==0){
				flag=0;
				break;
			}
		}
	}
	if(flag==1){
		printf("True");
	}else{
		printf("Flase");
	}
}

int main (){
	int n;
	printf("nhap so :");
	scanf("%d",&n);
	isPrime(n);
	
}


