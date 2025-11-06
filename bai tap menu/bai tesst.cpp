#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	int max =100;
	int arr[max];
	int n,choose ;
 	int i,flag,j,temp,isSort=0,found,x,mid,key,pos=-1;
 	int tong=0;
 	int low,high;
	do{
		printf("\n-----------------menu----------------\n");
		printf("\n1.nhap so phan tu cua mang");
		printf("\n2.in ra mang vua nhap");
		printf("\n3.in ra cac phan tu la so nguyen to trong mang");
		printf("\n4 sap xep cac phan tu theo thu tu giam dan");
		printf("\n5.tim phan tu bang binary");
		printf("\n6.tinh va in tong , trung binh cong cua cac phan tu trong mang");
		printf("\n7.chan phan tu vao mang");
		printf("\nchon chuc nang :");
		scanf("%d",&choose);
		switch(choose){
			case 1:
				printf("nhap so phan tu cua n:" );
				scanf("%d",&n);
				for(i=0;i<n;i++){
					printf("arr[%d]=",i);
					scanf("%d",&arr[i]);
				}
				break;
			case 2:
				printf("phan tu vua nhap vao mang la :");
				for(i=0;i<n;i++){
					printf("%3d",arr[i]);
				}	
				break;
			case 3:
				
				for(i=0;i<n;i++){
					tong+=arr[i];
				}
				printf("tong=%d\n",tong);
				printf("trung binh cong = %.2f",(float)tong/n);	
				break;
			case 4: 
			int sapxep;
			printf("lua chon kieu sap xep 1.tang dan (bubblesort)\n2.giam dan (selection)\n3. tang dan(Insertsort)");
			printf("moi chon kieu sap xep"); 
			scanf("%d",&sapxep);
			switch(sapxep){
				case 1:
					printf("mang da sap xep la :");
						for(i=0;i<n;i++){
							for(j=0;j<n-1-i;j++){
								if(arr[j]>arr[j+1]){
									temp=arr[j];
									arr[j]=arr[j+1];
									arr[j+1]=temp;
								}
							}
						}
						isSort=1;
						break;
				printf("nhap gia tri can them:");
						scanf("%d",&value);
						printf("nhap vi tri can them:");
						scanf("%d",index);
				case 3:
					for(i=1;i<n;i++){
						key = arr[i];
						j=i-1;
						while(j>=0 && arr[j]>key){
							arr[j+1]=arr[j];
							j--;
							
						}	
						arr[j+1]=key;
					}
						isSort=1;
						break;
				default :{
					printf("loi nhap ");
					break;
			}
			}
			printf("mang sau sap xep ");
				for(i=0;i<n;i++){
					printf("%d  ",arr[i]);}
			break; 
			case 5:
				
				if(isSort==0){
					printf("phan tu can tim la :");
					scanf("%d",&x);
					for(i=0;i<n;i++){
						if(arr[i]==x){
							pos = i ;
							break;
						}
					}
				}else{
					printf("nhap phan tu can tim:");
					scanf("%d",&x);
					low = 0;
					high = n-1;
					found = 0;
					while (low<=high){
						mid = (low+high)/2;
						if(arr[mid]==x){
							pos=mid;
							break;
						}else if(arr[mid]>x){
							high = mid -1;
						}else {
							low = mid+1;
						}
					}
				}
					if(pos==-1){
						printf("khong tim thay\n");
					}else {
						printf("tim thay tai vi tri %d",pos);
					}
				break;
			case 6:
			
							
       }
       
	}while (1);
	
}


