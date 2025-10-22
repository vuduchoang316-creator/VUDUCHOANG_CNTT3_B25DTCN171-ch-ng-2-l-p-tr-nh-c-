#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (){
	int a,b,c;
	printf("nhap so a");
	scanf("%d",&a);
	printf("nhap so b");
	scanf("%d",&b);
	printf("nhap so c");
	scanf("%d",&c);
	
	if(a>=b && b>=c){
		printf("thu tu tang dan %d %d %d",c,b,a);
		
}	else if(a>=c && c>=b){
	printf("thu tu tang dan %d %d %d",b,c,a);
	
}else if(b>=c && c>=a){
	printf("thu tu tang dan %d %d %d",a,c,b);
	
}else if(b>=a && a>=c){
	printf("thu tu tang dan %d %d %d ",c,a,b);
	
}else if(c>=b && b>=a){
	printf("thu tu tang dan %d %d %d",a,b,c);
	
}else if (c>=a && a>=b){
	printf("thu tu tang dan %d %d %d",b,a,c);	
}
	return 0;
}
