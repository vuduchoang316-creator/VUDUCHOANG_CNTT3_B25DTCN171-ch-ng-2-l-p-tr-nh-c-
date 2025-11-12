#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	char c[1000];
	int digit=0;int chucai=0 ;int dac_biet=0; 
	printf("nhap ki tu :");
	fgets(c,1000,stdin);
	
	c[strcspn(c,"\n")]='\0';
	for(int i=0;i<strlen(c);i++){
		if(isdigit(c[i])){
			digit++;
		}else if(isalpha(c[i])){
			chucai++;
		}else{
			dac_biet++;
		}
	}
	printf("so chu so :%d",digit);
	printf("\nso chu cai :%d",chucai);
	printf("\nso ki tu dac biet %d",dac_biet);
} 


