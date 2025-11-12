#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	char c[1000];
	gets(c);
	int cnt[256]={0};
	for(int i =0;i<strlen(c);i++){
		cnt[(int)c[i]]++;
	}
	for(int i=0;i<256;i++){
		if(cnt[i]!=0){
			printf("%c %d\n",i,cnt[i]);
		}
	}
} 


