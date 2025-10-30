#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (){
	int n,a,i;
	int temp;
	double sum=0.0 ;
	int number_of_digits=0;
	printf("nhap n:");
	scanf("%d",&n);
	a=n;
	temp = n;
	
	if(temp==0){
		number_of_digits=1;		
	}else{
		while(temp>0){
			number_of_digits++;
				temp/=10;
		}
	}
	temp=n;
	while (temp > 0){
		i = temp % 10;
		sum+=pow(i,number_of_digits);
		temp/=10;
	}
	if((int)sum == a){
		printf("%d la so armstrong",a);
	}else{
		printf("%d khong la so armdtrong",a);
	}
	
	
	
	
	return 0;
}

