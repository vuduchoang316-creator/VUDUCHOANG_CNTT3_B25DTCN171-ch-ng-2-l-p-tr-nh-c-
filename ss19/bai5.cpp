#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int compareArray(int *a,int *b,int n){
	int flag=0;
	for(int i=0;i<n;i++){
		if(*(a+i)!=*(b+i)){
			return 0;
		}
	}
	return 1;
}

int main (){
	int a[]={1,2,3,4,5};
	int b[]={1,2,3,4,5};
	int n=5;
	int result=compareArray(a, b, n);
	printf("%d",result);
	
} 


