#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (){
	char sentence[]="hello world";
	int leght=sizeof(sentence)/sizeof(char);
	for(int i =0;i<leght;i++){
		printf("%c ",sentence[i]);
	}
	
}

