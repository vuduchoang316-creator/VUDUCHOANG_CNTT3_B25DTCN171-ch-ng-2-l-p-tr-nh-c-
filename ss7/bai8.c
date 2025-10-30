#include <stdio.h>
int main (){
	int n ;
	int x;
	 printf("nhap so n:");
	 scanf("%d",&n );
	 printf("nhap gia tri cua x (0-9):");
	 scanf("%d",&x);
	 int so_cuoi_cung;
	int dem = 0;
	 		x=so_cuoi_cung; 
		if( x < 0 || x > 9 ){
			printf("loi");
			return 1;
		}
		while(n > 0){
			so_cuoi_cung = n%10;
			 if(so_cuoi_cung==x){
			 	dem++;
			 }
			 n/=10;
		}
		
		printf("so lan so x xuat hien trong so n la : %d",dem);
	
		
		
		
	
	 return 0;
}
