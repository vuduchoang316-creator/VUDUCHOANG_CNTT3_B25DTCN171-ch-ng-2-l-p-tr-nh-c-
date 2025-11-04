#include <stdio.h>
int main (){
	int arr[]={1,2,3,5,23,5,2,1};
	int n = sizeof(arr)/sizeof(int);
	int cnt,i,j;
	int cnt_max=0;
	int n_max;
	for (i=0;i<n;i++){
		cnt=1;
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				cnt++;
			}
		}
		if(cnt_max<cnt){
			cnt_max=cnt;
			n_max=arr[i];
		}
	}
	printf("so lan phan tu xuat hien nhieu nhat :");
	for(i=0;i<n;i++){
		cnt=1;
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j])
			cnt++;			
		}
		if(cnt_max==cnt){
			printf("%d  ",arr[i]);
		}
	}
	return 0;
}
	
