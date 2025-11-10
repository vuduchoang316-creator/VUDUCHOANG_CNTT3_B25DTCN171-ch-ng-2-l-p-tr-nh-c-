#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


    int n;
	int arr[100];
	int sorted=0;
	void chucnang1(int n ,int arr[]);
	void chucnang2(int n ,int arr[]);
	void chucnang3(int arr[],int index , int value);
	void chucnang4(int arr[],int index , int value);
	void chucnang5(int arr[],int index );
	void chucnang6(int arr[] );
	void chucnang7(int arr[] );
	void chucnang8(void );
int main (){
	int choice;
	
	do{
	printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("1.nhap so phan tu can nhap va cac gia tri phan tu cua mang\n");
	printf("2.in ra gia tri phan tu dang quan ly \n");
	printf("3.them mot phan tu vao vi tri chi dinh \n");
	printf("4.sua mot phan tu vao vi tri chi dinh\n");
	printf("5.xoa mot phan tu o vi tri chi dinh \n");
	printf("6.sap xep cac phan tu (menu con a.giam dan ; b.tang dan )\n");
	printf("7.tim kiem phan tu nhap vao mang a.tuyen tinh b.nhi phan\n");
	printf("8.thoat\n");
		printf("vui long choc chuc nang:");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				printf("nhap so phan tu :");
				scanf("%d",&n);
				chucnang1(n,arr);
				break;
			}
			case 2:{
				printf("cac phan tu trong mang :"); 
				chucnang2(n,arr);
				break;
			}
			case 3:{
				int index , value ;
				printf("nhap gia tri can them :");
				scanf("%d",&value);
				printf("nhap vi tri can them :");
				scanf("%d",&index);
				if(index < 0 || index > n){
					printf("loi nhap sai vi tri!!! ");
						break;
				}
			    chucnang3(arr,index,value);
				break;
			}
			case 4:{
				int value , index ;
				printf("nhap phan tu can cap nhat :");
				scanf("%d",&value);
				printf("nhap vi tri can cap nhat :");
				scanf("%d",&index);
				chucnang4(arr,index,value);
				break;
			}
			case 5:{
				int index;
				printf("nhap vi tri can xoa : ");
				scanf("%d",&index);
				chucnang5(arr,index);
				break;
			}
			case 6:{
				chucnang6(arr);
				sorted = 1;
				break;
			}
			case 7:{
				chucnang7( arr );
				break;
			}
			case 8:{
				chucnang8();
				return 0;
			}		
		}		
	}while(choice !=8);	
}

void chucnang1(int n , int arr[]){
	printf("nhap gia tri cac phan tu: \n");
	for(int i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
}

void chucnang2(int n , int arr[] ){
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
}

void chucnang3( int arr[],int index,int value){

	 for(int i = n; i > index ; i--){
	 	arr[i]=arr[i-1];}
	 		 
	 arr[index]=value;
	n++;
	 printf("da them phan tu %d vao vi tri %d",value,index);
}

void chucnang4(int arr[],int index,int value){
		if(index < 0 || index >n){
			printf("loi cap nhan vi tri khong hop le  vui long cap nhat tu vi tri 0 den %d",n-1);
			return;
		}
		arr[index]=value;
		printf("da cap nhat %d vao vi tri %d",value , index);
}

void chucnang5(int arr[],int index){
	if(index < 0 || index > n){
		printf("loi vui long nhap tu 0 den %d",n-1);
		return;
	}
	for(int i=index ;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	n--;
	printf("da xoa phan tu tai vi tri %d",index);
}

void chucnang6(int arr[]){
	char luachon;int temp;
	printf("nhap lua chon cua ban : a.sap xep giam dan | b.sap xep tang dan ");
	scanf(" %c",&luachon);
	switch(luachon){
		case 'a':{
			for(int i = 0;i<n ;i++){
				for(int j = 0; j < n-1-i ; j++){
					if(arr[j]<arr[j+1]){
						temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
				}
			}
			printf("mang da duoc sap xep giam dan");
			break;
		}
		case 'b':{
			for(int i = 0;i<n ;i++){
				for(int j = 0; j < n-1-i ; j++){
					if(arr[j]>arr[j+1]){
						temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
				}
			}
			printf("mang da duoc sap xep tang dan");
			break;
		default: 
			printf("loi nhap khong hop le ");
			break;	
		}
	}
}

void chucnang7(int arr[]){
	char type; int pos=-1;int x;
	 printf("moi lua chon chuc nang a.tim kiem tuyen tinh || b.tim kiem nhi phan ");
	 scanf(" %c",&type);
	 switch(type){
	 	case 'a':{
	 		printf("nhap gia tri can tim ");
			scanf("%d",&x);
			
				for(int i=0 ;i<n;i++){
					if(arr[i]==x){
					pos=i;
					break;
					}
					
				}
					if(pos==-1){
						printf("khong tim thay %d trong mang ",x);
					}else{
						printf("tim thay %d trong mang o vi tri %d",x,pos);
					}
			break;
		 }
		
		case 'b':{
			if(sorted==0){
				printf("loi chua sap xep ");
				break;
			}else{
						printf("nhap gia tri can tim ");
						scanf("%d",&x);
						int low =0;int high = n-1;
						while(low <= high){
							int mid=(low + high)/2;
							if(arr[mid]==x){
								pos=mid;
								break;
							}else if(arr[mid]>x){
								high = mid-1;
							}else{
								low = mid+1;
							}
						}
						if(pos==-1){
						printf("khong tim thay %d trong mang ",x);
						}else{
						printf("tim thay %d trong mang o vi tri %d",x,pos);
					}
				
			}
			
			break;
		} 
	 }
} 

void chucnang8(void){
	printf("cam on vi da su dung !!!");
}
