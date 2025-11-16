#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
void themmang(int arr[] ,int *spt ,int pos,int value){
		int n = *spt;
		for(int i = n ;i>pos;i--){
			arr[i]=arr[i-1];
		}
		arr[pos]=value;
		(*spt)++;

}
int main (){
	int arr[100]={45 ,89,56,7,61,47};
	 int spt=6;
	int pos,value;
		printf("nhap phan tu can them :");
		scanf("%d",&value);
		printf("nhap vi tri :");
		scanf("%d",&pos); 
	themmang(arr,&spt,pos,value);
	printf("mang sau khi them :");
	for(int i=0;i<spt;i++){
		printf("%d  ",*(arr+i));
	}
}
