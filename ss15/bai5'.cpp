#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void nhieu_nhat(int arr[],int n){
	int cnt_max=0;
	int n_max;
	for(int i=0;i<n;i++){
		int cnt=1;
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				cnt++;
			}
		}
			if(cnt_max<cnt){
				cnt_max=cnt;
				n_max=arr[i];
			}
	}
		printf("so %d xuat hien %d lan",n_max,cnt_max);
}
int main (){
	int n;
	printf("nhap so phan tu trong mang:");
	scanf("%d",&n);
	int arr[100];
	for(int i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	nhieu_nhat(arr,n);
}

