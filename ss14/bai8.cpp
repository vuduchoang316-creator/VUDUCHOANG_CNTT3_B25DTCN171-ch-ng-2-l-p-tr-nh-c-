#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int isPerfect(int n){
  int tong = 1;
  for (int i=2;i*i<n;i++){
  		if(n%i==0){
  			tong+=i;
  			if(i!=n/i){
  				tong+=n/i;
			  }
		  }
  }
  	if(tong==n && n!=1){
  		printf("True");
	  }else{
	  	printf("False");
	  }
}


int main (){
	int n ;
	printf("nhap n :");
	scanf("%d",&n);
	isPerfect(n);
}

