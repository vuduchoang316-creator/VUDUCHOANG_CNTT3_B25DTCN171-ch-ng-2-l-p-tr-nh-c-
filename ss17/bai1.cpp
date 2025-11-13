#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
void inputString(char c[]){
	printf("nhap ki tu: ");
	gets(c);
	c[strcspn(c,"\n")]='\0';
}
int isPalindrome(char c[]){
	for(int i=0;i<strlen(c)/2;i++){
		if(c[i]!=c[strlen(c)-1-i]){
			return 0;
		}
	}
	return 1;
}
int main (){
	char c[1000];
	inputString(c);
	printf("%s\n",c);
	int n = isPalindrome(c);
	if(isPalindrome(c)){
		printf("la phalindrome");
	}else{
		printf("khong la palindrome");
	}
}
