#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (){
	int i;
	int n;
	int tich;
	for (i=1 ; i<10; i++){
		printf("\n------------bang nhan %d------------\n",i);
		for (n=1;n<=10;n++){
			tich = n*i;
			printf("%d * %d = %d \n  ",i,n,tich);	
		}
	}
	
	return 0;
}

