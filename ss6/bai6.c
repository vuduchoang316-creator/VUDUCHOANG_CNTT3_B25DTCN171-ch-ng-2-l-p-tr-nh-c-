#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (){
	int a,b ;
	double tong ,hieu,tich,thuong;
	int menu = 0;
	 printf("nhap vao so a :");
	 scanf("%d",&a);
	 printf("nhap so b:");
	 scanf("%d",&b);
	 while(menu !=5){
	 	if(menu<1 && menu >5){
	 		printf("vui long nhap lai tu 1-5:\n");
		 }else{
		 		printf("chon chuc nang : 1:tong , 2:hieu , 3:tich , 4:thuong , 5:thoat");
					scanf("%d",& menu );
	 }
	 
	 		switch(menu){
	 			case 1:
	 				tong =(double)a+b;
	 				break;
	 				
	 			case 2:	
	 			 	hieu =(double)a-b ;
	 				break;
	 			
	 			case 3:
	 				tich = (double)a*b;
	 				break;
	 			case 4:
	 			
	 				if (b==0){
	 					printf("khong the chia cho khong");
					 }else{
					 	thuong =(double) a/b ;
					 }
					 break;
				 case 5:
				 	printf("thoat");
				 	break;			
				 	
}
			if(menu==5){
				return 0;
			}
	printf("tong(a+b)=%.2f \n hieu(a-b)=%.2f \n tich(a*b)=%.2f\n thuong(a/b)=%.2f  \n\n",tong ,hieu,tich,thuong);
	
	 			
	 continue;
	 
	 
	 }
	 	 
	
	return 0;
}


