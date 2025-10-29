#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main(){
		int a, b ,c ;
		int menu=0 ;
				 printf("1:nhap vao 3 so nguyen\n 2:tong 3 so\n 3:trung binh cong 3 so\n 4:so lon nhan\n 5:so nho nhat\n 6:thoat.\n ");
				 printf(" chon chuc nang :");
				 scanf("%d",&menu);
			while(menu<1 || menu >6){
				printf("vui long nhap lai:");
				scanf("%d",&menu);
		}	 
		if(menu == 6 ){
			return 0 ;
		}else if (menu !=1){
			printf("vui long nhap 3 so:\n ");
			scanf("%d%d%d",&a,&b,&c);
			printf(" chon chuc nang: ");
			scanf("%d",&menu);
		}
					
					while(menu !=6){
						switch( menu){
							case 1:
								printf("nhap 3 so :");
								scanf("%d%d%d",&a,&b,&c);
								printf("1:nhap vao 3 so nguyen\n 2:tong 3 so\n 3:trung binh cong 3 so\n 4:so lon nhan\n 5:so nho nhat\n 6:thoat.\n ");
								printf("chon chuc nang :");
									 scanf("%d",&menu);
								break;
							case 2:
								printf("tong 3 so = %d\n",a+b+c);
								printf(" 1:nhap vao 3 so nguyen\n2:tong 3 so\n3:trung binh cong 3 so\n4:so lon nhan\n5:so nho nhat\n6:thoat.\n ");
								printf("chon chuc nang :");
									 scanf("%d",&menu);	
									 break;
							case 3:
								printf("trung binh cong 3 so =%d\n",(a+b+c)/3); 
								printf("1:nhap vao 3 so nguyen\n 2:tong 3 so\n 3:trung binh cong 3 so\n 4:so lon nhan\n 5:so nho nhat\n 6:thoat.\n ");
				 				printf("chon chuc nang :");
									 scanf("%d",&menu);
									 break;
							case 4:
								if( a>= b && a>= c){
									printf("so lon nhat trong 3 so la :%d\n",a);
								}else if (b>=c && b>=a){
									printf("so lon nhat trong 3 so la : %d\n",b);
								}else if(c>=b && c>=a ){
									printf("so lon nhat trong 3 so la : %d\n",c);	
								}else{
								}
								printf("1:nhap vao 3 so nguyen\n 2:tong 3 so\n 3:trung binh cong 3 so\n 4:so lon nhan\n 5:so nho nhat\n 6:thoat.\n ");
				 				printf("chon chuc nang :");
									 scanf("%d",&menu);
								break;
							case 5:
								
								if ( a<=b && a <=c){
									printf("so nho nhat trong 3 so la : %d\n",a);
								}else if (b<=c && b<=a){
									printf("so nho nhat trong 3 so la : %d\n",b);
								}else if (c<=b && c<=a){
									printf("so nho nhat trong 3 so la : %d\n",c);	
								}else{
								}
								printf("1:nhap vao 3 so nguyen\n 2:tong 3 so\n 3:trung binh cong 3 so\n 4:so lon nhan\n 5:so nho nhat\n 6:thoat.\n ");
				 				printf("chon chuc nang :");
									 scanf("%d",&menu);
								break;
							case 6:
								printf("ket thuc chuong trinh")	;
								break;
								
						
											 
						}
					}
								 
					
		
	
	return 0;
	
}


