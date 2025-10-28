#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (){
	int so_dien , loai_ho_tieu_dung,tien_dien_bac_thang;
	double tong_tien_dien;
	float  phu_phi;
	
	printf("nhap so dien :");
	scanf("%d",&so_dien);
	
	printf("nhap loai ho tieu du 1:ho gia dinh , 2: ho kinh doanh,3:ho san xuat");
	scanf("%d",&loai_ho_tieu_dung);
	
	switch(loai_ho_tieu_dung){
	
		case 1 :
			
		if(so_dien <= 50 ){
		 		tien_dien_bac_thang=so_dien*1500;	
		 		 }else if (so_dien <= 100){
		 		 	tien_dien_bac_thang=50*1500+(so_dien-50)*2000;
				  }else if( so_dien <= 200){
				  	tien_dien_bac_thang = 50*1500+50*2000+(so_dien-1000)*2500;
				  }else{
				  	tien_dien_bac_thang=50*1500+50*2000+50*2500+(so_dien-200)*3000;
				  }
		 		 
			 phu_phi=tien_dien_bac_thang*0.05;
				break;
		case 2:
			if(so_dien <= 50 ){
		 		tien_dien_bac_thang=so_dien*1500;	
		 		 }else if (so_dien <= 100){
		 		 	tien_dien_bac_thang=50*1500+(so_dien-50)*2000;
				  }else if( so_dien <= 200){
				  	tien_dien_bac_thang = 50*1500+50*2000+(so_dien-1000)*2500;
				  }else{
				  	tien_dien_bac_thang=50*1500+50*2000+50*2500+(so_dien-200)*3000;
				  }
					phu_phi = tien_dien_bac_thang*0.1;
						break;
		case 3:
				if(so_dien <= 50 ){
		 		tien_dien_bac_thang=so_dien*1500;	
		 		 }else if (so_dien <= 100){
		 		 	tien_dien_bac_thang=50*1500+(so_dien-50)*2000;
				  }else if( so_dien <= 200){
				  	tien_dien_bac_thang = 50*1500+50*2000+(so_dien-1000)*2500;
				  }else{
				  	tien_dien_bac_thang=50*1500+50*2000+50*2500+(so_dien-200)*3000;
				  }
				  phu_phi = tien_dien_bac_thang*0.15;
				  break;
	
}
 					tong_tien_dien = tien_dien_bac_thang+ phu_phi;
				printf("%.0fVND",tong_tien_dien);
	return 0;

}
