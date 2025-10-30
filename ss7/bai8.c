#include <stdio.h>
int main (){
	int n ;
	int x;
	 printf("nhap so n:");
	 scanf("%d",&n );
	 printf("nhap gia tri cua x (0-9):");
	 scanf("%d",&x);
	 
	int dem = 0;
		x=dem;
		if( x < 0 || x > 9 ){
			printf("loi");
			return 1;
		}
		while(n != 0){
			dem = n%10;
			++dem;
			n/=10;
			
		}
		if(dem==x){
		
		printf("so lan so x xuat hien trong so n la : %d",dem);
	}
		
		
		
	
	 return 0;
}
