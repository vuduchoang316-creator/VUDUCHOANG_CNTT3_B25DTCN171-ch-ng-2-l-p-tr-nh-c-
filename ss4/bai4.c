#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (){
	int thang;
	printf("nhap so thang 1-12");
	scanf("%d",&thang);
	
	switch(thang){
		case 1:
			printf("co 31 ngay");
			break;
		case 2 :
			printf("co 28 ngay hoac 29 ngay");
			break;
		case 3 :
			printf("co 31 ngay");
			break;
		case 4:
			printf("co 30 ngay");
			break;
		case 5 :
			printf("co 31 ngay");
			break;
		case 6 :
			printf("co 30 ngay");
			break;
		case 7:
			printf("co 31 ngay");
			break;
		case 8:
			printf("co 31 ngay");
			break;
		case 9 :
			printf("co 30 ngay");
			break;
		case 10 :
			printf("co 31 ngay");
			break;
		case 11:
			printf("co 30 ngay");
			break;
		case 12 :
			printf("co 31 ngay");
			break;
							
						

	} 	
	return 0;
}

