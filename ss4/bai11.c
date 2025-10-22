#include <stdio.h>
#include <math.h>
#include <time.h>


int main (){

	int n;
	float m ;
	// m = diem trung binh
	printf("nhap nam sinh cua ban ");
	scanf("%d",&n );
	printf("nhap diem trung binh cua ban ");
	scanf(" %f",&m );
	 
	 time_t t=time(NULL);
	 struct tm tm= *localtime(&t);
	 int namhientai =  tm.tm_year+1900;
	 
	if(1900<n && n<namhientai ){
	 	printf("\nnam sinh phu hop");
	}else{
	 	printf("\nnam sinh khong phu hop");
	 	
	}
	if((namhientai-n >= 18)){
	 	printf("\ndu 18 tuoi");
	}else{
	 	printf("\nchua du 18 tuoi");
	}
	  
	if(m >=8.0 ){
		printf(" \nhoc luc gioi");	
	}else if(m >= 6.5){
		printf("\n hoc luc kha");
	}else if(m >= 5.0){
		printf("\nhoc luc trung binh");
	}else{
		printf("\nhoc luc yeu");
	} 

	 

	 printf("\n-------thong tin sinh vien -------");
	 printf("\nnam sinh: %d",n);
	 printf("\ndiem trung binh:%.2f ",m);
	 
	 return 0;
	 
	
}




