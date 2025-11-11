#include <stdio.h>
int inputTotalElement(int max);
void inputArray(int arr[], int n);
void displayArray(int arr[], int n);
int removeDuplicates(int arr[], int size);

int main(){
	const int max = 100;
	int arr[max];
	int n;
	
	
	n = inputTotalElement(max);	
	
	inputArray(arr,n);
	
	printf("\nMang ban dau: \n");
	displayArray(arr,n);
		
	n = removeDuplicates(arr,n);
	printf("\nMang sau khi loai bo cac phan tu trung lap\n");
	displayArray(arr,n);
}

/*
Vi?t hàm removeDuplicates(int arr[], int size) trong ngôn ng? C d? 
lo?i b? các ph?n t? trùng l?p trong m?ng m?t chi?u. 
Sau khi lo?i b?, các ph?n t? c?n l?i trong m?ng ph?i du?c gi? nguyên th? t? ban d?u.
*/
int inputTotalElement(int max){
	int n;
	do{
		printf("Nhap so phan tu cua mang: ");
		scanf("%d",&n);
		if(n<1 || n>max){
			printf("\nNhap lai n\n");
		}
	}while(n<1 || n>max);
	return n;
}
void inputArray(int arr[], int n){
	for(int i=0;i<n;i++){
		printf("Nhap phan tu arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
}
void displayArray(int arr[], int n){	
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
}
int removeDuplicates(int arr[], int size){
	int i = 0;
	while(i<size){
		//xoa tat cac phan tu o dang sau trung lap voi phan tu arr[i] 
		for(int j=i+1;j<size;j++){
			if(arr[j]==arr[i]){
				for(int k=j;k<size-1;k++){
					arr[k] = arr[k+1];
				}
				j--;
				size--;
			}
		}
		
		i++;
	}
	return size;
}
