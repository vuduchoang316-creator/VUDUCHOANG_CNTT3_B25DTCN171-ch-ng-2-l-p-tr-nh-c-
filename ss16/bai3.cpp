#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (){
	char c[]="hello wolrd";
	for(int i =0 ; i<strlen(c);i++){
		printf("%c ",c[i]);
	}
	printf("\n chuoi dao nguoc la :");
	for(int i=strlen(c)-1;i>=0;i--){
		printf("%c ",c[i]);
	}
		
}

