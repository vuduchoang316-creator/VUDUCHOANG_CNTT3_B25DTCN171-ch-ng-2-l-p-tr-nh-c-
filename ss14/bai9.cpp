#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
  void UCLN(int a , int b){
  	if(a==0 || b==0){
  		printf("uoc chung lon nhat cua a va b la : %d",a+b);
  		return ;
	  }
	if(a>b){
		for(int i=b ; i>=1 ; i--){
		      	if(a%i==0 && b%i==0){
		      		printf("%d",i);
		      		break;
	  		  }
		} 
	}else{
		for(int i=a;i>=1;i--){
			if(a % i==0 && b % i==0){
				printf("%d",i);
				break;			}
		}
	}  
  	
}
  
  int main (){
  		int a ,b ;
  		printf("nhap 2 so a va b ");
  		scanf("%d%d",&a,&b);
  		printf("UCLN cua a va b la :");
  		UCLN(a,b);
  	
  }


